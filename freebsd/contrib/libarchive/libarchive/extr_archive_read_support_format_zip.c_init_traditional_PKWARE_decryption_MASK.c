
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct zip {int tctx_valid; scalar_t__ entry_bytes_remaining; scalar_t__ decrypted_bytes_remaining; int entry_compressed_bytes_read; TYPE_2__* entry; int tctx; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int intmax_t ;
struct TYPE_4__ {int zip_flags; scalar_t__ decdat; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (struct archive_read*,scalar_t__,int *) ;
 int FUNC_1 (struct archive_read*,scalar_t__) ;
 char* FUNC_2 (struct archive_read*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const*,int ,void const*,scalar_t__,scalar_t__*) ;
 int FUNC_6 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_7)
{
 struct zip *VAR_8 = (struct zip *)(VAR_7->format->data);
 const void *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_8->tctx_valid)
  return (VAR_4);






 if (0 == (VAR_8->entry->zip_flags & VAR_6)
     && VAR_8->entry_bytes_remaining < 12) {
  FUNC_3(&VAR_7->archive, VAR_0,
      "Truncated Zip encrypted body: only %jd bytes available",
      (intmax_t)VAR_8->entry_bytes_remaining);
  return (VAR_3);
 }

 VAR_9 = FUNC_0(VAR_7, 12, ((void*)0));
 if (VAR_9 == ((void*)0)) {
  FUNC_3(&VAR_7->archive, VAR_0,
      "Truncated ZIP file data");
  return (VAR_3);
 }

 for (VAR_10 = 0;; VAR_10++) {
  const char *VAR_12;
  uint8_t VAR_13;

  VAR_12 = FUNC_2(VAR_7);
  if (VAR_12 == ((void*)0)) {
   FUNC_3(&VAR_7->archive, VAR_1,
       (VAR_10 > 0)?
    "Incorrect passphrase":
    "Passphrase required for this entry");
   return (VAR_2);
  }




  VAR_11 = FUNC_5(&VAR_8->tctx, VAR_12, FUNC_4(VAR_12),
   VAR_9, 12, &VAR_13);
  if (VAR_11 == 0 && VAR_13 == VAR_8->entry->decdat)
   break;
  if (VAR_10 > 10000) {

   FUNC_3(&VAR_7->archive, VAR_1,
       "Too many incorrect passphrases");
   return (VAR_2);
  }
 }

 FUNC_1(VAR_7, 12);
 VAR_8->tctx_valid = 1;
 if (0 == (VAR_8->entry->zip_flags & VAR_6)) {
     VAR_8->entry_bytes_remaining -= 12;
 }

 VAR_8->entry_compressed_bytes_read += 12;
 VAR_8->decrypted_bytes_remaining = 0;

 return (FUNC_6(VAR_7));

}
