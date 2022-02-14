
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cab {int read_data_invoked; int end_of_entry_cleanup; int entry_offset; scalar_t__ end_of_entry; scalar_t__ end_of_archive; scalar_t__ entry_unconsumed; scalar_t__ bytes_skipped; int * entry_cfdata; TYPE_2__* entry_cffile; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int int64_t ;
struct TYPE_4__ {int folder; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct archive_read*,scalar_t__) ;
 int FUNC_3 (struct archive_read*) ;
 int FUNC_4 (struct archive_read*,void const**,size_t*,int *) ;




__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_4,
    const void **VAR_5, size_t *VAR_6, int64_t *VAR_7)
{
 struct cab *VAR_8 = (struct cab *)(VAR_4->format->data);
 int VAR_9;

 switch (VAR_8->entry_cffile->folder) {
 case 130:
 case 128:
 case 129:
  *VAR_5 = ((void*)0);
  *VAR_6 = 0;
  *VAR_7 = 0;
  FUNC_0(&VAR_4->archive);
  FUNC_1(&VAR_4->archive, VAR_1,
      "Cannot restore this file split in multivolume.");
  return (VAR_2);
 default:
  break;
 }
 if (VAR_8->read_data_invoked == 0) {
  if (VAR_8->bytes_skipped) {
   if (VAR_8->entry_cfdata == ((void*)0)) {
    VAR_9 = FUNC_3(VAR_4);
    if (VAR_9 < 0)
     return (VAR_9);
   }
   if (FUNC_2(VAR_4, VAR_8->bytes_skipped) < 0)
    return (VAR_3);
   VAR_8->bytes_skipped = 0;
  }
  VAR_8->read_data_invoked = 1;
 }
 if (VAR_8->entry_unconsumed) {

  VAR_9 = (int)FUNC_2(VAR_4, VAR_8->entry_unconsumed);
  VAR_8->entry_unconsumed = 0;
  if (VAR_9 < 0)
   return (VAR_9);
 }
 if (VAR_8->end_of_archive || VAR_8->end_of_entry) {
  if (!VAR_8->end_of_entry_cleanup) {

   VAR_8->end_of_entry_cleanup = 1;
  }
  *VAR_7 = VAR_8->entry_offset;
  *VAR_6 = 0;
  *VAR_5 = ((void*)0);
  return (VAR_0);
 }

 return (FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7));
}
