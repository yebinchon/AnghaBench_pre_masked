
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct zip {int has_encrypted_entries; int entry_uncompressed_bytes_read; scalar_t__ entry_crc32; scalar_t__ (* crc32func ) (scalar_t__,void const*,unsigned int) ;scalar_t__ entry_compressed_bytes_read; TYPE_3__* entry; int ignore_crc32; int hctx_valid; scalar_t__ end_of_entry; scalar_t__ init_decryption; scalar_t__ unconsumed; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef unsigned long intmax_t ;
typedef int int64_t ;
struct TYPE_5__ {scalar_t__ vendor; } ;
struct TYPE_6__ {int mode; int zip_flags; int compression; scalar_t__ compressed_size; int uncompressed_size; scalar_t__ crc32; TYPE_2__ aes_extra; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (int *,int ,char*,unsigned long,unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (struct archive_read*) ;
 int FUNC_4 (struct archive_read*) ;
 int FUNC_5 (struct archive_read*) ;
 scalar_t__ FUNC_6 (scalar_t__,void const*,unsigned int) ;
 int FUNC_7 (struct archive_read*,void const**,size_t*,int*) ;
 int FUNC_8 (struct archive_read*,void const**,size_t*,int*) ;
 int FUNC_9 (struct archive_read*,void const**,size_t*,int*) ;
 int FUNC_10 (struct archive_read*,void const**,size_t*,int*) ;
 int FUNC_11 (struct archive_read*,void const**,size_t*,int*) ;
 int FUNC_12 (struct archive_read*,void const**,size_t*,int*) ;

__attribute__((used)) static int
FUNC_13(struct archive_read *VAR_13,
    const void **VAR_14, size_t *VAR_15, int64_t *VAR_16)
{
 int VAR_17;
 struct zip *VAR_18 = (struct zip *)(VAR_13->format->data);

 if (VAR_18->has_encrypted_entries ==
   VAR_8) {
  VAR_18->has_encrypted_entries = 0;
 }

 *VAR_16 = VAR_18->entry_uncompressed_bytes_read;
 *VAR_15 = 0;
 *VAR_14 = ((void*)0);


 if (VAR_18->end_of_entry)
  return (VAR_3);


 if (VAR_2 != (VAR_18->entry->mode & VAR_1))
  return (VAR_3);

 FUNC_0(VAR_13, VAR_18->unconsumed);
 VAR_18->unconsumed = 0;

 if (VAR_18->init_decryption) {
  VAR_18->has_encrypted_entries = 1;
  if (VAR_18->entry->zip_flags & VAR_12)
   VAR_17 = FUNC_5(VAR_13);
  else if (VAR_18->entry->compression == VAR_11)
   VAR_17 = FUNC_3(VAR_13);
  else
   VAR_17 = FUNC_4(VAR_13);
  if (VAR_17 != VAR_7)
   return (VAR_17);
  VAR_18->init_decryption = 0;
 }

 switch(VAR_18->entry->compression) {
 case 0:
  VAR_17 = FUNC_8(VAR_13, VAR_14, VAR_15, VAR_16);
  break;
 case 98:
  VAR_17 = FUNC_11(VAR_13, VAR_14, VAR_15, VAR_16);
  break;






 default:

  FUNC_1(&VAR_13->archive, VAR_4,
      "Unsupported ZIP compression method (%d: %s)",
      VAR_18->entry->compression, FUNC_2(VAR_18->entry->compression));


  return (VAR_6);
  break;
 }
 if (VAR_17 != VAR_7)
  return (VAR_17);

 if (*VAR_15)
  VAR_18->entry_crc32 = VAR_18->crc32func(VAR_18->entry_crc32, *VAR_14,
      (unsigned)*VAR_15);

 if (VAR_18->end_of_entry) {

  if (VAR_18->entry->compressed_size !=
      VAR_18->entry_compressed_bytes_read) {
   FUNC_1(&VAR_13->archive, VAR_5,
       "ZIP compressed data is wrong size "
       "(read %jd, expected %jd)",
       (intmax_t)VAR_18->entry_compressed_bytes_read,
       (intmax_t)VAR_18->entry->compressed_size);
   return (VAR_9);
  }


  if ((VAR_18->entry->uncompressed_size & VAR_10)
      != (VAR_18->entry_uncompressed_bytes_read & VAR_10)) {
   FUNC_1(&VAR_13->archive, VAR_5,
       "ZIP uncompressed data is wrong size "
       "(read %jd, expected %jd)\n",
       (intmax_t)VAR_18->entry_uncompressed_bytes_read,
       (intmax_t)VAR_18->entry->uncompressed_size);
   return (VAR_9);
  }

  if ((!VAR_18->hctx_valid ||
        VAR_18->entry->aes_extra.vendor != VAR_0) &&
     VAR_18->entry->crc32 != VAR_18->entry_crc32
      && !VAR_18->ignore_crc32) {
   FUNC_1(&VAR_13->archive, VAR_5,
       "ZIP bad CRC: 0x%lx should be 0x%lx",
       (unsigned long)VAR_18->entry_crc32,
       (unsigned long)VAR_18->entry->crc32);
   return (VAR_9);
  }
 }

 return (VAR_7);
}
