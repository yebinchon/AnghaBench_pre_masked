
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zip {int unconsumed; int entry_bytes_remaining; int has_encrypted_entries; TYPE_2__* entry; scalar_t__ end_of_entry; scalar_t__ init_decryption; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_4__ {int zip_flags; scalar_t__ compressed_size; int compression; int flags; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* FUNC_0 (struct archive_read*,int,int*) ;
 scalar_t__ FUNC_1 (struct archive_read*,int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (struct archive_read*) ;
 int FUNC_4 (struct archive_read*) ;
 int FUNC_5 (struct archive_read*) ;
 int FUNC_6 (struct archive_read*,void const**,size_t*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_7)
{
 struct zip *VAR_8;
 int64_t VAR_9;

 VAR_8 = (struct zip *)(VAR_7->format->data);
 VAR_9 = FUNC_1(VAR_7, VAR_8->unconsumed);
 VAR_8->unconsumed = 0;
 if (VAR_9 < 0)
  return (VAR_1);


 if (VAR_8->end_of_entry)
  return (VAR_2);


 if (0 == (VAR_8->entry->zip_flags & VAR_5)
     || VAR_8->entry->compressed_size > 0) {

  VAR_9 = FUNC_1(VAR_7,
     VAR_8->entry_bytes_remaining);
  if (VAR_9 < 0)
   return (VAR_1);
  return (VAR_2);
 }

 if (VAR_8->init_decryption) {
  int VAR_10;

  VAR_8->has_encrypted_entries = 1;
  if (VAR_8->entry->zip_flags & VAR_6)
   VAR_10 = FUNC_5(VAR_7);
  else if (VAR_8->entry->compression == VAR_4)
   VAR_10 = FUNC_3(VAR_7);
  else
   VAR_10 = FUNC_4(VAR_7);
  if (VAR_10 != VAR_2)
   return (VAR_10);
  VAR_8->init_decryption = 0;
 }




 switch (VAR_8->entry->compression) {
 default:

  for (;;) {
   const char *VAR_11, *VAR_12;
   ssize_t VAR_13;
   VAR_12 = FUNC_0(VAR_7, 16, &VAR_13);
   if (VAR_13 < 16) {
    FUNC_2(&VAR_7->archive,
        VAR_0,
        "Truncated ZIP file data");
    return (VAR_1);
   }
   VAR_11 = VAR_12;
   while (VAR_11 <= VAR_12 + VAR_13 - 16) {
    if (VAR_11[3] == 'P') { VAR_11 += 3; }
    else if (VAR_11[3] == 'K') { VAR_11 += 2; }
    else if (VAR_11[3] == '\007') { VAR_11 += 1; }
    else if (VAR_11[3] == '\010' && VAR_11[2] == '\007'
        && VAR_11[1] == 'K' && VAR_11[0] == 'P') {
     if (VAR_8->entry->flags & VAR_3)
      FUNC_1(VAR_7,
          VAR_11 - VAR_12 + 24);
     else
      FUNC_1(VAR_7,
          VAR_11 - VAR_12 + 16);
     return VAR_2;
    } else { VAR_11 += 4; }
   }
   FUNC_1(VAR_7, VAR_11 - VAR_12);
  }
 }
}
