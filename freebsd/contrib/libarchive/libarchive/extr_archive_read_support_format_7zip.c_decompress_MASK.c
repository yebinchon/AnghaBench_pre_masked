
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef unsigned char uint8_t ;
typedef int uint64_t ;
typedef void* uInt ;
struct archive_read {int archive; } ;
struct TYPE_11__ {unsigned char const* next_in; size_t avail_in; unsigned char* next_out; size_t avail_out; int total_out; int overconsumed; } ;
struct TYPE_12__ {int p; TYPE_1__* Stream; } ;
struct TYPE_10__ {int * Read; struct archive_read* a; } ;
struct TYPE_14__ {size_t avail_in; unsigned char* next_out; size_t avail_out; int * next_in; } ;
struct TYPE_16__ {char* next_in; size_t avail_in; char* next_out; size_t avail_out; } ;
struct TYPE_13__ {unsigned char const* next_in; size_t avail_in; unsigned char* next_out; size_t avail_out; } ;
struct _7zip {int codec; scalar_t__ codec2; scalar_t__ odd_bcj_size; unsigned char* odd_bcj; size_t tmp_stream_bytes_remaining; size_t main_stream_bytes_remaining; unsigned char* tmp_stream_buff; size_t tmp_stream_buff_size; int ppmd7_stat; size_t tmp_stream_bytes_avail; TYPE_2__ ppstream; TYPE_3__ range_dec; int ppmd7_context; int folder_outbytes_remaining; TYPE_1__ bytein; int ppmd7_valid; TYPE_6__ stream; TYPE_8__ bzstream; int bzstream_valid; TYPE_4__ lzstream; int lzstream_valid; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_15__ {int (* Ppmd7z_RangeDec_Init ) (TYPE_3__*) ;int (* Ppmd7_DecodeSymbol ) (int *,int *) ;} ;
typedef int Bytef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (TYPE_8__*) ;


 scalar_t__ FUNC_2 (struct _7zip*,unsigned char*,size_t) ;

 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_7__ VAR_8 ;
 int FUNC_3 (int *,int ,char*,...) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (unsigned char*,unsigned char const*,size_t) ;
 int VAR_9 ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (int *,int *) ;
 size_t FUNC_10 (struct _7zip*,void*,size_t) ;

__attribute__((used)) static int
FUNC_11(struct archive_read *VAR_10, struct _7zip *VAR_11,
    void *VAR_12, size_t *VAR_13, const void *VAR_14, size_t *VAR_15)
{
 const uint8_t *VAR_16;
 uint8_t *VAR_17;
 size_t VAR_18, VAR_19;
 size_t VAR_20, VAR_21;
 uint8_t *VAR_22;
 size_t VAR_23;
 int VAR_24, VAR_25 = VAR_4;

 VAR_20 = VAR_18 = *VAR_15;
 VAR_21 = VAR_19 = *VAR_13;
 VAR_16 = VAR_14;
 VAR_17 = VAR_12;

 if (VAR_11->codec != 129 && VAR_11->codec2 == VAR_6) {
  int VAR_26;



  if (VAR_18 != 0 && VAR_21 < 5 && VAR_11->odd_bcj_size) {
   *VAR_15 = 0;
   *VAR_13 = 0;
   return (VAR_25);
  }
  for (VAR_26 = 0; VAR_11->odd_bcj_size > 0 && VAR_21; VAR_26++) {
   *VAR_17++ = VAR_11->odd_bcj[VAR_26];
   VAR_21--;
   VAR_11->odd_bcj_size--;
  }
  if (VAR_18 == 0 || VAR_21 == 0) {
   *VAR_15 = VAR_18 - VAR_20;
   *VAR_13 = VAR_19 - VAR_21;
   if (VAR_18 == 0)
    VAR_25 = VAR_0;
   return (VAR_25);
  }
 }

 VAR_22 = VAR_17;
 VAR_23 = VAR_21;
 if (VAR_11->codec2 == VAR_7) {



  if (VAR_11->tmp_stream_bytes_remaining) {
   ssize_t VAR_27;
   size_t VAR_28 = VAR_11->tmp_stream_bytes_remaining;
   VAR_27 = FUNC_2(VAR_11, VAR_17, VAR_21);
   if (VAR_27 < 0) {
    FUNC_3(&(VAR_10->archive),
        VAR_2,
        "BCJ2 conversion Failed");
    return (VAR_3);
   }
   VAR_11->main_stream_bytes_remaining -=
       VAR_28 - VAR_11->tmp_stream_bytes_remaining;
   VAR_21 -= VAR_27;
   if (VAR_18 == 0 || VAR_21 == 0) {
    *VAR_15 = 0;
    *VAR_13 = VAR_19 - VAR_21;
    if (VAR_18 == 0 &&
        VAR_11->tmp_stream_bytes_remaining)
     VAR_25 = VAR_0;
    return (VAR_25);
   }
   VAR_17 += VAR_27;
   VAR_22 = VAR_17;
   VAR_23 = VAR_21;
  }
  VAR_17 = VAR_11->tmp_stream_buff;
  VAR_21 = VAR_11->tmp_stream_buff_size;
 }

 switch (VAR_11->codec) {
 case 132:
 {
  size_t VAR_29 =
      (VAR_20 > VAR_21)?VAR_21:VAR_20;

  FUNC_7(VAR_17, VAR_16, VAR_29);
  VAR_20 -= VAR_29;
  VAR_21 -= VAR_29;
  if (VAR_18 == 0)
   VAR_25 = VAR_0;
  break;
 }
 case 128:
 {
  uint64_t VAR_30;

  if (!VAR_11->ppmd7_valid || VAR_11->ppmd7_stat < 0 ||
      VAR_21 <= 0) {
   FUNC_3(&(VAR_10->archive),
       VAR_2,
       "Decompression internal error");
   return (VAR_3);
  }
  VAR_11->ppstream.next_in = VAR_16;
  VAR_11->ppstream.avail_in = VAR_20;
  VAR_11->ppstream.next_out = VAR_17;
  VAR_11->ppstream.avail_out = VAR_21;
  if (VAR_11->ppmd7_stat == 0) {
   VAR_11->bytein.a = VAR_10;
   VAR_11->bytein.Read = &VAR_9;
   VAR_11->range_dec.Stream = &VAR_11->bytein;
   VAR_24 = VAR_8.Ppmd7z_RangeDec_Init(
    &(VAR_11->range_dec));
   if (VAR_24 == 0) {
    VAR_11->ppmd7_stat = -1;
    FUNC_3(&VAR_10->archive,
        VAR_2,
        "Failed to initialize PPMd range decorder");
    return (VAR_3);
   }
   if (VAR_11->ppstream.overconsumed) {
    VAR_11->ppmd7_stat = -1;
    return (VAR_3);
   }
   VAR_11->ppmd7_stat = 1;
  }

  if (VAR_20 == 0)

   VAR_30 = VAR_11->folder_outbytes_remaining;
  else
   VAR_30 = 0;

  do {
   int VAR_31;

   VAR_31 = VAR_8.Ppmd7_DecodeSymbol(
    &(VAR_11->ppmd7_context), &(VAR_11->range_dec.p));
   if (VAR_31 < 0) {
    VAR_11->ppmd7_stat = -1;
    FUNC_3(&VAR_10->archive,
        VAR_1,
        "Failed to decode PPMd");
    return (VAR_3);
   }
   if (VAR_11->ppstream.overconsumed) {
    VAR_11->ppmd7_stat = -1;
    return (VAR_3);
   }
   *VAR_11->ppstream.next_out++ = (unsigned char)VAR_31;
   VAR_11->ppstream.avail_out--;
   VAR_11->ppstream.total_out++;
   if (VAR_30)
    VAR_30--;
  } while (VAR_11->ppstream.avail_out &&
   (VAR_11->ppstream.avail_in || VAR_30));

  VAR_20 = (size_t)VAR_11->ppstream.avail_in;
  VAR_21 = (size_t)VAR_11->ppstream.avail_out;
  break;
 }
 default:
  FUNC_3(&(VAR_10->archive), VAR_2,
      "Decompression internal error");
  return (VAR_3);
 }
 if (VAR_25 != VAR_4 && VAR_25 != VAR_0)
  return (VAR_25);

 *VAR_15 = VAR_18 - VAR_20;
 *VAR_13 = VAR_19 - VAR_21;




 if (VAR_11->codec != 129 && VAR_11->codec2 == VAR_6) {
  size_t VAR_32 = FUNC_10(VAR_11, VAR_12, *VAR_13);
  VAR_11->odd_bcj_size = *VAR_13 - VAR_32;
  if (VAR_11->odd_bcj_size > 0 && VAR_11->odd_bcj_size <= 4 &&
      VAR_18 && VAR_25 != VAR_0) {
   FUNC_7(VAR_11->odd_bcj, ((unsigned char *)VAR_12) + VAR_32,
       VAR_11->odd_bcj_size);
   *VAR_13 = VAR_32;
  } else
   VAR_11->odd_bcj_size = 0;
 }




 if (VAR_11->codec2 == VAR_7) {
  ssize_t VAR_33;

  VAR_11->tmp_stream_bytes_avail =
      VAR_11->tmp_stream_buff_size - VAR_21;
  if (VAR_11->tmp_stream_bytes_avail >
        VAR_11->main_stream_bytes_remaining)
   VAR_11->tmp_stream_bytes_avail =
       VAR_11->main_stream_bytes_remaining;
  VAR_11->tmp_stream_bytes_remaining = VAR_11->tmp_stream_bytes_avail;
  VAR_33 = FUNC_2(VAR_11, VAR_22, VAR_23);
  if (VAR_33 < 0) {
   FUNC_3(&(VAR_10->archive),
       VAR_2, "BCJ2 conversion Failed");
   return (VAR_3);
  }
  VAR_11->main_stream_bytes_remaining -=
      VAR_11->tmp_stream_bytes_avail
        - VAR_11->tmp_stream_bytes_remaining;
  VAR_23 -= VAR_33;
  *VAR_13 = VAR_19 - VAR_23;
 }

 return (VAR_25);
}
