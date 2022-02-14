
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void uint8_t ;
typedef void* uInt ;
struct TYPE_2__ {unsigned char* next_in; void const* next_out; void* avail_out; void* avail_in; } ;
struct zip {scalar_t__ entry_uncompressed_limit; size_t entry_uncompressed_written; int entry_flags; int entry_encryption; int tctx_valid; int cctx_valid; int hctx_valid; int entry_compression; void const* buf; size_t len_buf; size_t entry_compressed_written; size_t written_bytes; scalar_t__ aes_vendor; int entry_crc32; int (* crc32func ) (int ,void const*,unsigned int) ;TYPE_1__ stream; int hctx; int cctx; int tctx; } ;
struct archive_write {int archive; struct zip* format_data; } ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct archive_write*,void const*,size_t) ;
 int FUNC_1 (int *,void const*,int,void const*,size_t*) ;
 int FUNC_2 (int *,void const*,size_t) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct archive_write*) ;
 int FUNC_6 (struct archive_write*) ;
 int FUNC_7 (int ,void const*,unsigned int) ;
 size_t FUNC_8 (int *,void const*,int,void const*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_9(struct archive_write *VAR_8, const void *VAR_9, size_t VAR_10)
{
 int VAR_11;
 struct zip *VAR_12 = VAR_8->format_data;

 if ((int64_t)VAR_10 > VAR_12->entry_uncompressed_limit)
  VAR_10 = (size_t)VAR_12->entry_uncompressed_limit;
 VAR_12->entry_uncompressed_written += VAR_10;

 if (VAR_10 == 0) return 0;

 if (VAR_12->entry_flags & VAR_5) {
  switch (VAR_12->entry_encryption) {
  case 130:

   if (!VAR_12->tctx_valid) {
    VAR_11 = FUNC_5(VAR_8);
    if (VAR_11 != VAR_4)
     return (VAR_11);
    VAR_12->tctx_valid = 1;
   }
   break;
  case 129:
  case 128:
   if (!VAR_12->cctx_valid) {
    VAR_11 = FUNC_6(VAR_8);
    if (VAR_11 != VAR_4)
     return (VAR_11);
    VAR_12->cctx_valid = VAR_12->hctx_valid = 1;
   }
   break;
  default:
   break;
  }
 }

 switch (VAR_12->entry_compression) {
 case 131:
  if (VAR_12->tctx_valid || VAR_12->cctx_valid) {
   const uint8_t *VAR_13 = (const uint8_t *)VAR_9;
   const uint8_t * const VAR_14 = VAR_13 + VAR_10;

   while (VAR_13 < VAR_14) {
    size_t VAR_15;

    if (VAR_12->tctx_valid) {
     VAR_15 = FUNC_8(&VAR_12->tctx,
         VAR_13, VAR_14 - VAR_13,
         VAR_12->buf, VAR_12->len_buf);
    } else {
     VAR_15 = VAR_12->len_buf;
     VAR_11 = FUNC_1(
         &VAR_12->cctx,
         VAR_13, VAR_14 - VAR_13, VAR_12->buf, &VAR_15);
     if (VAR_11 < 0) {
      FUNC_3(&VAR_8->archive,
          VAR_1,
          "Failed to encrypt file");
      return (VAR_2);
     }
     FUNC_2(&VAR_12->hctx,
         VAR_12->buf, VAR_15);
    }
    VAR_11 = FUNC_0(VAR_8, VAR_12->buf, VAR_15);
    if (VAR_11 != VAR_4)
     return (VAR_11);
    VAR_12->entry_compressed_written += VAR_15;
    VAR_12->written_bytes += VAR_15;
    VAR_13 += VAR_15;
   }
  } else {
   VAR_11 = FUNC_0(VAR_8, VAR_9, VAR_10);
   if (VAR_11 != VAR_4)
    return (VAR_11);
   VAR_12->written_bytes += VAR_10;
   VAR_12->entry_compressed_written += VAR_10;
  }
  break;
 default:
  FUNC_3(&VAR_8->archive, VAR_1,
      "Invalid ZIP compression type");
  return VAR_3;
 }

 VAR_12->entry_uncompressed_limit -= VAR_10;
 if (!VAR_12->cctx_valid || VAR_12->aes_vendor != VAR_0)
  VAR_12->entry_crc32 =
      VAR_12->crc32func(VAR_12->entry_crc32, VAR_9, (unsigned)VAR_10);
 return (VAR_10);

}
