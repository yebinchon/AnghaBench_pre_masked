
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct zip {scalar_t__ entry_crc32; int unconsumed; int end_of_entry; scalar_t__ entry_bytes_remaining; size_t decrypted_buffer_size; int entry_uncompressed_bytes_read; int entry_compressed_bytes_read; scalar_t__ decrypted_buffer; int cctx; int hctx; int tctx; scalar_t__ tctx_valid; scalar_t__ cctx_valid; scalar_t__ hctx_valid; TYPE_3__* entry; scalar_t__ ignore_crc32; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int ssize_t ;
typedef int int64_t ;
struct TYPE_5__ {scalar_t__ vendor; } ;
struct TYPE_6__ {int zip_flags; int flags; scalar_t__ uncompressed_size; scalar_t__ compressed_size; scalar_t__ crc32; TYPE_2__ aes_extra; } ;
struct TYPE_4__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (int *,int const*,size_t,scalar_t__,size_t*) ;
 int FUNC_2 (int *,int const*,size_t) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (struct archive_read*,char const*) ;
 int FUNC_7 (int *,int const*,size_t,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_8(struct archive_read *VAR_9, const void **VAR_10,
    size_t *VAR_11, int64_t *VAR_12)
{
 struct zip *VAR_13;
 const char *VAR_14;
 ssize_t VAR_15;
 int VAR_16;

 (void)VAR_12;

 VAR_13 = (struct zip *)(VAR_9->format->data);

 if (VAR_13->entry->zip_flags & VAR_8) {
  const char *VAR_17;
  ssize_t VAR_18 = 24;

  if (VAR_13->hctx_valid)
   VAR_18 += VAR_5;

  VAR_14 = FUNC_0(VAR_9, VAR_18, &VAR_15);
  if (VAR_15 < VAR_18) {




   FUNC_5(&VAR_9->archive,
       VAR_1,
       "Truncated ZIP file data");
   return (VAR_3);
  }


  VAR_17 = VAR_14;
  if (VAR_13->hctx_valid)
   VAR_17 += VAR_5;
  if (VAR_17[0] == 'P' && VAR_17[1] == 'K'
      && VAR_17[2] == '\007' && VAR_17[3] == '\010'
      && (FUNC_3(VAR_17 + 4) == VAR_13->entry_crc32
   || VAR_13->ignore_crc32
   || (VAR_13->hctx_valid
    && VAR_13->entry->aes_extra.vendor == VAR_0))) {
   if (VAR_13->entry->flags & VAR_7) {
    uint64_t VAR_19, VAR_20;
    VAR_13->entry->crc32 = FUNC_3(VAR_17 + 4);
    VAR_19 = FUNC_4(VAR_17 + 8);
    VAR_20 = FUNC_4(VAR_17 + 16);
    if (VAR_19 > VAR_6 || VAR_20 >
        VAR_6) {
     FUNC_5(&VAR_9->archive,
         VAR_1,
         "Overflow of 64-bit file sizes");
     return VAR_2;
    }
    VAR_13->entry->compressed_size = VAR_19;
    VAR_13->entry->uncompressed_size = VAR_20;
    VAR_13->unconsumed = 24;
   } else {
    VAR_13->entry->crc32 = FUNC_3(VAR_17 + 4);
    VAR_13->entry->compressed_size =
     FUNC_3(VAR_17 + 8);
    VAR_13->entry->uncompressed_size =
     FUNC_3(VAR_17 + 12);
    VAR_13->unconsumed = 16;
   }
   if (VAR_13->hctx_valid) {
    VAR_16 = FUNC_6(VAR_9, VAR_14);
    if (VAR_16 != VAR_4)
     return (VAR_16);
   }
   VAR_13->end_of_entry = 1;
   return (VAR_4);
  }

  ++VAR_17;





  while (VAR_17 < VAR_14 + VAR_15 - 4) {
   if (VAR_17[3] == 'P') { VAR_17 += 3; }
   else if (VAR_17[3] == 'K') { VAR_17 += 2; }
   else if (VAR_17[3] == '\007') { VAR_17 += 1; }
   else if (VAR_17[3] == '\010' && VAR_17[2] == '\007'
       && VAR_17[1] == 'K' && VAR_17[0] == 'P') {
    if (VAR_13->hctx_valid)
     VAR_17 -= VAR_5;
    break;
   } else { VAR_17 += 4; }
  }
  VAR_15 = VAR_17 - VAR_14;
 } else {
  if (VAR_13->entry_bytes_remaining == 0) {
   VAR_13->end_of_entry = 1;
   if (VAR_13->hctx_valid) {
    VAR_16 = FUNC_6(VAR_9, ((void*)0));
    if (VAR_16 != VAR_4)
     return (VAR_16);
   }
   return (VAR_4);
  }

  VAR_14 = FUNC_0(VAR_9, 1, &VAR_15);
  if (VAR_15 <= 0) {
   FUNC_5(&VAR_9->archive,
       VAR_1,
       "Truncated ZIP file data");
   return (VAR_3);
  }
  if (VAR_15 > VAR_13->entry_bytes_remaining)
   VAR_15 = (ssize_t)VAR_13->entry_bytes_remaining;
 }
 if (VAR_13->tctx_valid || VAR_13->cctx_valid) {
  size_t VAR_21 = VAR_15;

  if (VAR_21 > VAR_13->decrypted_buffer_size)
   VAR_21 = VAR_13->decrypted_buffer_size;
  if (VAR_13->tctx_valid) {
   FUNC_7(&VAR_13->tctx,
       (const uint8_t *)VAR_14, VAR_21,
       VAR_13->decrypted_buffer, VAR_21);
  } else {
   size_t VAR_22 = VAR_21;
   FUNC_2(&VAR_13->hctx,
       (const uint8_t *)VAR_14, VAR_21);
   FUNC_1(&VAR_13->cctx,
       (const uint8_t *)VAR_14, VAR_21,
       VAR_13->decrypted_buffer, &VAR_22);
  }
  VAR_15 = VAR_21;
  VAR_14 = (const char *)VAR_13->decrypted_buffer;
 }
 *VAR_11 = VAR_15;
 VAR_13->entry_bytes_remaining -= VAR_15;
 VAR_13->entry_uncompressed_bytes_read += VAR_15;
 VAR_13->entry_compressed_bytes_read += VAR_15;
 VAR_13->unconsumed += VAR_15;
 *VAR_10 = VAR_14;
 return (VAR_4);
}
