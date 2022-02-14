
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {TYPE_2__* In; } ;
struct TYPE_11__ {TYPE_1__ Stream; } ;
struct TYPE_10__ {int * Read; struct archive_read* a; } ;
struct zip {int ppmd8_valid; int uncompressed_buffer_size; int decompress_init; scalar_t__ zipx_ppmd_read_compressed; int entry_compressed_bytes_read; int * uncompressed_buffer; TYPE_3__ ppmd8; TYPE_2__ zipx_ppmd_stream; scalar_t__ ppmd8_stream_failed; } ;
struct archive_read {int archive; } ;
struct TYPE_12__ {int (* Ppmd8_Init ) (TYPE_3__*,int,int) ;int (* Ppmd8_RangeDec_Init ) (TYPE_3__*) ;int (* Ppmd8_Alloc ) (TYPE_3__*,int) ;int (* Ppmd8_Construct ) (TYPE_3__*) ;int (* Ppmd8_Free ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_8__ VAR_6 ;
 void* FUNC_0 (struct archive_read*,int,int *) ;
 int FUNC_1 (struct archive_read*,int) ;
 int FUNC_2 (void const*) ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,int,int) ;

__attribute__((used)) static int
FUNC_11(struct archive_read *VAR_8, struct zip *VAR_9)
{
 const void* VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;


 if(VAR_9->ppmd8_valid) {
  VAR_6.Ppmd8_Free(&VAR_9->ppmd8);
  VAR_9->ppmd8_valid = 0;
 }


 VAR_6.Ppmd8_Construct(&VAR_9->ppmd8);
 VAR_9->ppmd8_stream_failed = 0;




 VAR_9->ppmd8.Stream.In = &VAR_9->zipx_ppmd_stream;
 VAR_9->zipx_ppmd_stream.a = VAR_8;
 VAR_9->zipx_ppmd_stream.Read = &VAR_7;


 VAR_9->zipx_ppmd_read_compressed = 0;


 VAR_10 = FUNC_0(VAR_8, 2, ((void*)0));
 if(!VAR_10) {
  FUNC_3(&VAR_8->archive, VAR_0,
      "Truncated file data in PPMd8 stream");
  return (VAR_3);
 }
 FUNC_1(VAR_8, 2);


 VAR_11 = FUNC_2(VAR_10);
 VAR_12 = (VAR_11 & 15) + 1;
 VAR_13 = ((VAR_11 >> 4) & 0xff) + 1;
 VAR_14 = (VAR_11 >> 12);

 if(VAR_12 < 2 || VAR_14 > 2) {
  FUNC_3(&VAR_8->archive, VAR_0,
      "Invalid parameter set in PPMd8 stream (order=%d, "
      "restore=%d)", VAR_12, VAR_14);
  return (VAR_2);
 }


 if(!VAR_6.Ppmd8_Alloc(&VAR_9->ppmd8, VAR_13 << 20)) {
  FUNC_3(&VAR_8->archive, VAR_5,
      "Unable to allocate memory for PPMd8 stream: %d bytes",
      VAR_13 << 20);
  return (VAR_3);
 }



 VAR_9->ppmd8_valid = 1;


 if(!VAR_6.Ppmd8_RangeDec_Init(&VAR_9->ppmd8)) {
  FUNC_3(&VAR_8->archive, VAR_1,
      "PPMd8 stream range decoder initialization error");
  return (VAR_3);
 }

 VAR_6.Ppmd8_Init(&VAR_9->ppmd8, VAR_12,
     VAR_14);


 FUNC_4(VAR_9->uncompressed_buffer);

 VAR_9->uncompressed_buffer_size = 256 * 1024;
 VAR_9->uncompressed_buffer =
     (uint8_t*) FUNC_5(VAR_9->uncompressed_buffer_size);

 if(VAR_9->uncompressed_buffer == ((void*)0)) {
  FUNC_3(&VAR_8->archive, VAR_5,
      "No memory for PPMd8 decompression");
  return VAR_3;
 }


 VAR_9->decompress_init = 1;





 VAR_9->entry_compressed_bytes_read += 2 + VAR_9->zipx_ppmd_read_compressed;

 return VAR_4;
}
