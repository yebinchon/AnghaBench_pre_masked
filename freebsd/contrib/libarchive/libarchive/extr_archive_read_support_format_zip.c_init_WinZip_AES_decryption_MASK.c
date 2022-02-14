
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ const uint8_t ;
struct zip {int cctx_valid; int hctx_valid; scalar_t__ entry_bytes_remaining; TYPE_3__* entry; scalar_t__ decrypted_bytes_remaining; int entry_compressed_bytes_read; int cctx; int hctx; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int derived_key ;
struct TYPE_5__ {int strength; int compression; } ;
struct TYPE_6__ {int zip_flags; TYPE_2__ aes_extra; int compression; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 char* FUNC_2 (struct archive_read*) ;
 int FUNC_3 (int *,scalar_t__ const*,size_t) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__ const*,size_t) ;
 int FUNC_6 (char const*,int ,void const*,size_t,int,scalar_t__ const*,size_t) ;
 int FUNC_7 (int *,int ,char*) ;
 int FUNC_8 (scalar_t__ const*,int ,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct archive_read*) ;

__attribute__((used)) static int
FUNC_11(struct archive_read *VAR_8)
{
 struct zip *VAR_9 = (struct zip *)(VAR_8->format->data);
 const void *VAR_10;
 const uint8_t *VAR_11;
 size_t VAR_12, VAR_13;
 uint8_t VAR_14[VAR_6];
 int VAR_15;
 int VAR_16;

 if (VAR_9->cctx_valid || VAR_9->hctx_valid)
  return (VAR_4);

 switch (VAR_9->entry->aes_extra.strength) {
 case 1: VAR_13 = 8; VAR_12 = 16; break;
 case 2: VAR_13 = 12; VAR_12 = 24; break;
 case 3: VAR_13 = 16; VAR_12 = 32; break;
 default: goto corrupted;
 }
 VAR_10 = FUNC_0(VAR_8, VAR_13 + 2, ((void*)0));
 if (VAR_10 == ((void*)0))
  goto truncated;

 for (VAR_15 = 0;; VAR_15++) {
  const char *VAR_17;

  VAR_17 = FUNC_2(VAR_8);
  if (VAR_17 == ((void*)0)) {
   FUNC_7(&VAR_8->archive, VAR_1,
       (VAR_15 > 0)?
    "Incorrect passphrase":
    "Passphrase required for this entry");
   return (VAR_2);
  }
  FUNC_8(VAR_14, 0, sizeof(VAR_14));
  VAR_16 = FUNC_6(VAR_17, FUNC_9(VAR_17),
      VAR_10, VAR_13, 1000, VAR_14, VAR_12 * 2 + 2);
  if (VAR_16 != 0) {
   FUNC_7(&VAR_8->archive, VAR_1,
       "Decryption is unsupported due to lack of "
       "crypto library");
   return (VAR_2);
  }


  VAR_11 = ((const uint8_t *)VAR_10) + VAR_13;
  if (VAR_14[VAR_12 * 2] == VAR_11[0] &&
      VAR_14[VAR_12 * 2 + 1] == VAR_11[1])
   break;
  if (VAR_15 > 10000) {

   FUNC_7(&VAR_8->archive, VAR_1,
       "Too many incorrect passphrases");
   return (VAR_2);
  }
 }

 VAR_16 = FUNC_3(&VAR_9->cctx, VAR_14, VAR_12);
 if (VAR_16 != 0) {
  FUNC_7(&VAR_8->archive, VAR_1,
      "Decryption is unsupported due to lack of crypto library");
  return (VAR_2);
 }
 VAR_16 = FUNC_5(&VAR_9->hctx, VAR_14 + VAR_12, VAR_12);
 if (VAR_16 != 0) {
  FUNC_4(&VAR_9->cctx);
  FUNC_7(&VAR_8->archive, VAR_1,
      "Failed to initialize HMAC-SHA1");
  return (VAR_2);
 }
 VAR_9->cctx_valid = VAR_9->hctx_valid = 1;
 FUNC_1(VAR_8, VAR_13 + 2);
 VAR_9->entry_bytes_remaining -= VAR_13 + 2 + VAR_5;
 if (0 == (VAR_9->entry->zip_flags & VAR_7)
     && VAR_9->entry_bytes_remaining < 0)
  goto corrupted;
 VAR_9->entry_compressed_bytes_read += VAR_13 + 2 + VAR_5;
 VAR_9->decrypted_bytes_remaining = 0;

 VAR_9->entry->compression = VAR_9->entry->aes_extra.compression;
 return (FUNC_10(VAR_8));

truncated:
 FUNC_7(&VAR_8->archive, VAR_0,
     "Truncated ZIP file data");
 return (VAR_3);
corrupted:
 FUNC_7(&VAR_8->archive, VAR_0,
     "Corrupted ZIP file data");
 return (VAR_3);
}
