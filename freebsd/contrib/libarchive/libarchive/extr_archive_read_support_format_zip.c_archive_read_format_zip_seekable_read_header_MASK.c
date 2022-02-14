
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ s; } ;
struct zip_entry {scalar_t__ local_header_offset; TYPE_2__ rsrcname; int node; } ;
struct zip {scalar_t__ has_encrypted_entries; scalar_t__ unconsumed; struct zip_entry* entry; scalar_t__ hctx_valid; scalar_t__ cctx_valid; scalar_t__ tctx_valid; int hctx; int cctx; int tree_rsrc; int tree; int * zip_entries; } ;
struct TYPE_6__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_3__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct archive_read*,scalar_t__) ;
 int FUNC_4 (struct archive_read*) ;
 int FUNC_5 (struct archive_read*,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct archive_read*,struct archive_entry*,struct zip*) ;
 int FUNC_10 (struct archive_read*,struct archive_entry*,struct zip*) ;
 int FUNC_11 (struct archive_read*,struct archive_entry*,struct zip_entry*) ;

__attribute__((used)) static int
FUNC_12(struct archive_read *VAR_6,
 struct archive_entry *VAR_7)
{
 struct zip *VAR_8 = (struct zip *)VAR_6->format->data;
 struct zip_entry *VAR_9;
 int64_t VAR_10;
 int VAR_11, VAR_12 = VAR_2;
 if (VAR_8->has_encrypted_entries ==
   VAR_4)
  VAR_8->has_encrypted_entries = 0;

 VAR_6->archive.archive_format = VAR_1;
 if (VAR_6->archive.archive_format_name == ((void*)0))
  VAR_6->archive.archive_format_name = "ZIP";

 if (VAR_8->zip_entries == ((void*)0)) {
  VAR_11 = FUNC_9(VAR_6, VAR_7, VAR_8);
  if (VAR_11 != VAR_2)
   return VAR_11;


  VAR_8->entry =
      (struct zip_entry *)FUNC_0(&VAR_8->tree);
 } else if (VAR_8->entry != ((void*)0)) {

  VAR_8->entry = (struct zip_entry *)FUNC_2(
      &VAR_8->tree, &VAR_8->entry->node, VAR_3);
 }

 if (VAR_8->entry == ((void*)0))
  return VAR_0;

 if (VAR_8->entry->rsrcname.s)
  VAR_9 = (struct zip_entry *)FUNC_1(
      &VAR_8->tree_rsrc, VAR_8->entry->rsrcname.s);
 else
  VAR_9 = ((void*)0);

 if (VAR_8->cctx_valid)
  FUNC_6(&VAR_8->cctx);
 if (VAR_8->hctx_valid)
  FUNC_8(&VAR_8->hctx);
 VAR_8->tctx_valid = VAR_8->cctx_valid = VAR_8->hctx_valid = 0;
 FUNC_4(VAR_6);




 VAR_10 = FUNC_7(&VAR_6->archive, 0);
 if (VAR_10 < VAR_8->entry->local_header_offset)
  FUNC_3(VAR_6,
      VAR_8->entry->local_header_offset - VAR_10);
 else if (VAR_10 != VAR_8->entry->local_header_offset) {
  FUNC_5(VAR_6, VAR_8->entry->local_header_offset,
      VAR_5);
 }
 VAR_8->unconsumed = 0;
 VAR_11 = FUNC_10(VAR_6, VAR_7, VAR_8);
 if (VAR_11 != VAR_2)
  return VAR_11;
 if (VAR_9) {
  int VAR_13 = FUNC_11(VAR_6, VAR_7, VAR_9);
  if (VAR_13 < VAR_12)
   VAR_12 = VAR_13;
 }
 return (VAR_12);
}
