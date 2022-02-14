
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {size_t window_mask; int write_ptr; int last_write_ptr; int window_size; int cur_block_size; int block_parsing_finished; size_t solid_offset; int last_len; int const* dist_cache; int rd; int ldd; int dd; scalar_t__* window_buf; int ld; } ;
struct TYPE_3__ {int in_addr; scalar_t__ const bit_addr; } ;
struct compressed_block_header {int dummy; } ;
struct rar5 {TYPE_2__ cstate; TYPE_1__ bits; struct compressed_block_header last_block_hdr; } ;
struct archive_read {int archive; } ;
typedef size_t const int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (struct compressed_block_header const*) ;
 int FUNC_2 (struct archive_read*,int,int const) ;
 int FUNC_3 (struct rar5*,scalar_t__ const*,int) ;
 int FUNC_4 (struct archive_read*,int *,scalar_t__ const*,int*) ;
 int FUNC_5 (struct rar5*,int) ;
 int FUNC_6 (struct rar5*,int const) ;
 struct rar5* FUNC_7 (struct archive_read*) ;
 int FUNC_8 (struct archive_read*,scalar_t__ const*) ;
 int FUNC_9 (struct rar5*,scalar_t__ const*,int*) ;
 int FUNC_10 (struct rar5*,scalar_t__ const*,int,int*) ;
 int FUNC_11 (struct rar5*,int) ;

__attribute__((used)) static int FUNC_12(struct archive_read* VAR_6, const uint8_t* VAR_7) {
 struct rar5* VAR_8 = FUNC_7(VAR_6);
 uint16_t VAR_9;
 int VAR_10;

 const uint64_t VAR_11 = VAR_8->cstate.window_mask;
 const struct compressed_block_header* VAR_12 = &VAR_8->last_block_hdr;
 const uint8_t VAR_13 = 1 + FUNC_1(VAR_12);

 while(1) {
  if(VAR_8->cstate.write_ptr - VAR_8->cstate.last_write_ptr >
      (VAR_8->cstate.window_size >> 1)) {




   break;
  }

  if(VAR_8->bits.in_addr > VAR_8->cstate.cur_block_size - 1 ||
      (VAR_8->bits.in_addr == VAR_8->cstate.cur_block_size - 1 &&
      VAR_8->bits.bit_addr >= VAR_13))
  {


   VAR_8->cstate.block_parsing_finished = 1;
   break;
  }


  if(VAR_4 != FUNC_4(VAR_6, &VAR_8->cstate.ld, VAR_7, &VAR_9)) {
   return VAR_0;
  }
  if(VAR_9 < 256) {

   int64_t VAR_14 = VAR_8->cstate.solid_offset +
       VAR_8->cstate.write_ptr++;

   VAR_8->cstate.window_buf[VAR_14 & VAR_11] =
       (uint8_t) VAR_9;
   continue;
  } else if(VAR_9 >= 262) {
   uint16_t VAR_15;
   int VAR_16 = FUNC_3(VAR_8, VAR_7, VAR_9 - 262),
    VAR_17,
    VAR_18 = 1;

   if(VAR_16 == -1) {
    FUNC_0(&VAR_6->archive,
        VAR_2,
        "Failed to decode the code length");

    return VAR_3;
   }

   if(VAR_4 != FUNC_4(VAR_6, &VAR_8->cstate.dd, VAR_7,
       &VAR_15))
   {
    FUNC_0(&VAR_6->archive,
        VAR_2,
        "Failed to decode the distance slot");

    return VAR_3;
   }

   if(VAR_15 < 4) {
    VAR_17 = 0;
    VAR_18 += VAR_15;
   } else {
    VAR_17 = VAR_15 / 2 - 1;





    VAR_18 += (uint32_t) (2 |
        (VAR_15 & 1)) << VAR_17;
   }

   if(VAR_17 > 0) {
    if(VAR_17 >= 4) {
     uint32_t VAR_19 = 0;
     uint16_t VAR_20;

     if(VAR_17 > 4) {
      if(VAR_4 != FUNC_9(
          VAR_8, VAR_7, &VAR_19)) {



       return VAR_0;
      }

      FUNC_11(VAR_8, VAR_17 - 4);
      VAR_19 = (VAR_19 >> (
          36 - VAR_17)) << 4;
      VAR_18 += VAR_19;
     }

     if(VAR_4 != FUNC_4(VAR_6,
         &VAR_8->cstate.ldd, VAR_7, &VAR_20))
     {
      FUNC_0(&VAR_6->archive,
          VAR_2,
          "Failed to decode the "
          "distance slot");

      return VAR_3;
     }

     if(VAR_18 >= VAR_5 - VAR_20 - 1) {


      FUNC_0(&VAR_6->archive,
          VAR_1,
          "Distance pointer "
          "overflow");
      return VAR_3;
     }

     VAR_18 += VAR_20;
    } else {

     int VAR_21;

     if(VAR_4 != FUNC_10(VAR_8,
          VAR_7, VAR_17, &VAR_21)) {


      return VAR_0;
     }

     VAR_18 += VAR_21;
    }
   }

   if(VAR_18 > 0x100) {
    VAR_16++;

    if(VAR_18 > 0x2000) {
     VAR_16++;

     if(VAR_18 > 0x40000) {
      VAR_16++;
     }
    }
   }

   FUNC_5(VAR_8, VAR_18);
   VAR_8->cstate.last_len = VAR_16;

   if(VAR_4 != FUNC_2(VAR_6, VAR_16, VAR_18))
    return VAR_3;

   continue;
  } else if(VAR_9 == 256) {

   VAR_10 = FUNC_8(VAR_6, VAR_7);
   if(VAR_10 != VAR_4)
    return VAR_10;

   continue;
  } else if(VAR_9 == 257) {
   if(VAR_8->cstate.last_len != 0) {
    if(VAR_4 != FUNC_2(VAR_6,
        VAR_8->cstate.last_len,
        VAR_8->cstate.dist_cache[0]))
    {
     return VAR_3;
    }
   }

   continue;
  } else if(VAR_9 < 262) {
   const int VAR_22 = VAR_9 - 258;
   const int VAR_23 = FUNC_6(VAR_8, VAR_22);

   uint16_t VAR_24;
   int VAR_25;

   if(VAR_4 != FUNC_4(VAR_6, &VAR_8->cstate.rd, VAR_7,
       &VAR_24)) {
    return VAR_3;
   }

   VAR_25 = FUNC_3(VAR_8, VAR_7, VAR_24);
   VAR_8->cstate.last_len = VAR_25;

   if(VAR_4 != FUNC_2(VAR_6, VAR_25, VAR_23))
    return VAR_3;

   continue;
  }


  FUNC_0(&VAR_6->archive, VAR_1,
      "Unsupported block code: 0x%x", VAR_9);

  return VAR_3;
 }

 return VAR_4;
}
