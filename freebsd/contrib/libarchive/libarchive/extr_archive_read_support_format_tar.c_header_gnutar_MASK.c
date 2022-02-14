
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tar {int entry_padding; int entry_bytes_remaining; int realsize_override; scalar_t__ realsize; int sconv; } ;
struct archive_read {int dummy; } ;
struct archive_entry_header_gnutar {char* typeflag; scalar_t__* rdevmajor; scalar_t__* rdevminor; scalar_t__* atime; scalar_t__* ctime; scalar_t__* realsize; scalar_t__* isextended; TYPE_1__* sparse; int gname; int uname; int name; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ int64_t ;
typedef int dev_t ;
struct TYPE_2__ {scalar_t__* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct archive_entry*,int ,int,int ) ;
 scalar_t__ FUNC_1 (struct archive_entry*,int ,int,int ) ;
 scalar_t__ FUNC_2 (struct archive_entry*,int ,int,int ) ;
 int FUNC_3 (struct archive_entry*,scalar_t__,int ) ;
 int FUNC_4 (struct archive_entry*,scalar_t__,int ) ;
 int FUNC_5 (struct archive_entry*,int ) ;
 int FUNC_6 (struct archive_entry*,int ) ;
 int FUNC_7 (struct archive_entry*,int ) ;
 int FUNC_8 (struct archive_entry*,scalar_t__) ;
 int FUNC_9 (struct archive_read*,struct tar*,struct archive_entry_header_gnutar const*,size_t*) ;
 int FUNC_10 (struct archive_read*,struct tar*,struct archive_entry*,void const*) ;
 int FUNC_11 (struct archive_read*,int ,char*) ;
 scalar_t__ FUNC_12 (scalar_t__*,int) ;

__attribute__((used)) static int
FUNC_13(struct archive_read *VAR_2, struct tar *VAR_3,
    struct archive_entry *VAR_4, const void *VAR_5, size_t *VAR_6)
{
 const struct archive_entry_header_gnutar *VAR_7;
 int64_t VAR_8;
 int VAR_9 = VAR_1;
 VAR_9 = FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_9 == VAR_0)
  return (VAR_9);


 VAR_7 = (const struct archive_entry_header_gnutar *)VAR_5;
 if (FUNC_1(VAR_4,
     VAR_7->name, sizeof(VAR_7->name), VAR_3->sconv) != 0) {
  VAR_9 = FUNC_11(VAR_2, VAR_3->sconv, "Pathname");
  if (VAR_9 == VAR_0)
   return (VAR_9);
 }





 if (FUNC_2(VAR_4,
     VAR_7->uname, sizeof(VAR_7->uname), VAR_3->sconv) != 0) {
  VAR_9 = FUNC_11(VAR_2, VAR_3->sconv, "Uname");
  if (VAR_9 == VAR_0)
   return (VAR_9);
 }

 if (FUNC_0(VAR_4,
     VAR_7->gname, sizeof(VAR_7->gname), VAR_3->sconv) != 0) {
  VAR_9 = FUNC_11(VAR_2, VAR_3->sconv, "Gname");
  if (VAR_9 == VAR_0)
   return (VAR_9);
 }


 if (VAR_7->typeflag[0] == '3' || VAR_7->typeflag[0] == '4') {
  FUNC_6(VAR_4, (dev_t)
      FUNC_12(VAR_7->rdevmajor, sizeof(VAR_7->rdevmajor)));
  FUNC_7(VAR_4, (dev_t)
      FUNC_12(VAR_7->rdevminor, sizeof(VAR_7->rdevminor)));
 } else
  FUNC_5(VAR_4, 0);

 VAR_3->entry_padding = 0x1ff & (-VAR_3->entry_bytes_remaining);


 VAR_8 = FUNC_12(VAR_7->atime, sizeof(VAR_7->atime));
 if (VAR_8 > 0)
  FUNC_3(VAR_4, VAR_8, 0);
 VAR_8 = FUNC_12(VAR_7->ctime, sizeof(VAR_7->ctime));
 if (VAR_8 > 0)
  FUNC_4(VAR_4, VAR_8, 0);

 if (VAR_7->realsize[0] != 0) {
  VAR_3->realsize
      = FUNC_12(VAR_7->realsize, sizeof(VAR_7->realsize));
  FUNC_8(VAR_4, VAR_3->realsize);
  VAR_3->realsize_override = 1;
 }

 if (VAR_7->sparse[0].offset[0] != 0) {
  if (FUNC_9(VAR_2, VAR_3, VAR_7, VAR_6)
      != VAR_1)
   return (VAR_0);
 } else {
  if (VAR_7->isextended[0] != 0) {

  }
 }

 return (VAR_9);
}
