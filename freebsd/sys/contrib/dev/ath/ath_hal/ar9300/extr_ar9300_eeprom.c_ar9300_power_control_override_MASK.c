
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ath_hal {int dummy; } ;
typedef int int32_t ;
struct TYPE_9__ {int misc_configuration; int feature_enable; int txrx_mask; } ;
struct TYPE_10__ {int temp_slope_low; int temp_slope_high; } ;
struct TYPE_12__ {int* tempslopextension; } ;
struct TYPE_11__ {int temp_slope; } ;
struct TYPE_8__ {int temp_slope; } ;
struct TYPE_13__ {TYPE_2__ base_eep_header; TYPE_3__ base_ext2; TYPE_5__ base_ext1; TYPE_4__ modal_header_5g; int * cal_freq_pier_5g; TYPE_1__ modal_header_2g; } ;
typedef TYPE_6__ ar9300_eeprom_t ;
struct TYPE_14__ {TYPE_6__ ah_eeprom; } ;


 TYPE_7__* FUNC_0 (struct ath_hal*) ;
 int VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct ath_hal*) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*) ;
 int FUNC_4 (struct ath_hal*) ;
 int FUNC_5 (struct ath_hal*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ath_hal*,int ,int,int ) ;
 int FUNC_8 (struct ath_hal*,int ,int ,int) ;
 int FUNC_9 (int,int*,int*,int) ;

int
FUNC_10(struct ath_hal *VAR_16, int VAR_17,
    int *VAR_18, int *VAR_19, int *VAR_20)
{
    int VAR_21 = 0;
    int VAR_22 = 0;
    int VAR_23 = 0;
    ar9300_eeprom_t *VAR_24 = &FUNC_0(VAR_16)->ah_eeprom;
    int32_t VAR_25[8], VAR_26[8],VAR_27[3], VAR_28[3];
 int VAR_29;

    FUNC_7(VAR_16, VAR_0,
        (VAR_18[0] << VAR_13),
        VAR_12);
    if (!FUNC_3(VAR_16)) {
        FUNC_7(VAR_16, VAR_1,
            (VAR_18[1] << VAR_13),
            VAR_12);
        if (!FUNC_5(VAR_16) && !FUNC_2(VAR_16) && !FUNC_1(VAR_16) ) {
            FUNC_7(VAR_16, VAR_2,
                (VAR_18[2] << VAR_13),
                VAR_12);
        }
    }



    FUNC_7(VAR_16, VAR_7,
        (3 << VAR_11), VAR_10);
    if (!FUNC_3(VAR_16)) {
        FUNC_7(VAR_16, VAR_8,
            (3 << VAR_11), VAR_10);
        if (!FUNC_5(VAR_16) && !FUNC_2(VAR_16) && !FUNC_1(VAR_16) ) {
            FUNC_7(VAR_16, VAR_9,
                (3 << VAR_11),
                VAR_10);
        }
    }





    if (VAR_17 < 4000) {
        VAR_21 = VAR_24->modal_header_2g.temp_slope;
    } else {
  if ((VAR_24->base_eep_header.misc_configuration & 0x20) != 0)
  {
    for(VAR_29=0;VAR_29<8;VAR_29++)
    {
     VAR_26[VAR_29]=VAR_24->base_ext1.tempslopextension[VAR_29];
     VAR_25[VAR_29]=FUNC_6(VAR_24->cal_freq_pier_5g[VAR_29], 0);
    }
    VAR_21=FUNC_9(VAR_17,VAR_25,VAR_26,8);
  }
  else
  {
        if(!FUNC_4(VAR_16)) {
          if (VAR_24->base_ext2.temp_slope_low != 0) {
             VAR_26[0] = VAR_24->base_ext2.temp_slope_low;
             VAR_25[0] = 5180;
             VAR_26[1] = VAR_24->modal_header_5g.temp_slope;
             VAR_25[1] = 5500;
             VAR_26[2] = VAR_24->base_ext2.temp_slope_high;
             VAR_25[2] = 5785;
             VAR_21 = FUNC_9(VAR_17, VAR_25, VAR_26, 3);
           } else {
             VAR_21 = VAR_24->modal_header_5g.temp_slope;
           }
         } else {



             VAR_26[0] = VAR_24->base_ext1.tempslopextension[2];
             VAR_27[0]= VAR_24->base_ext1.tempslopextension[3];
             VAR_28[0]= VAR_24->base_ext1.tempslopextension[4];
             VAR_25[0] = 5180;
             VAR_26[1] = VAR_24->modal_header_5g.temp_slope;
             VAR_27[1]= VAR_24->base_ext1.tempslopextension[0];
             VAR_28[1]= VAR_24->base_ext1.tempslopextension[1];
             VAR_25[1] = 5500;
             VAR_26[2] = VAR_24->base_ext1.tempslopextension[5];
             VAR_27[2]= VAR_24->base_ext1.tempslopextension[6];
             VAR_28[2]= VAR_24->base_ext1.tempslopextension[7];
             VAR_25[2] = 5785;
             VAR_21 = FUNC_9(VAR_17, VAR_25, VAR_26, 3);
             VAR_22=FUNC_9(VAR_17, VAR_25, VAR_27,3);
             VAR_23=FUNC_9(VAR_17, VAR_25, VAR_28,3);
       }
  }
  }

    if (!FUNC_4(VAR_16) && !FUNC_1(VAR_16)) {
        FUNC_8(VAR_16,
            VAR_5, VAR_6, VAR_21);
    } else {


        if (VAR_24->base_eep_header.feature_enable & 0x1){
     if(VAR_17 < 4000) {
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x1) {
      FUNC_8(VAR_16,
        VAR_5, VAR_6,
        VAR_24->base_ext2.temp_slope_low);
      }
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x2) {
      FUNC_8(VAR_16,
        VAR_14, VAR_6,
        VAR_21);
      }
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x4) {
      FUNC_8(VAR_16,
        VAR_15, VAR_6,
        VAR_24->base_ext2.temp_slope_high);
       }
     } else {
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x1) {
      FUNC_8(VAR_16,
        VAR_5, VAR_6,
        VAR_21);
   }
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x2) {
      FUNC_8(VAR_16,
        VAR_14, VAR_6,
        VAR_22);
  }
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x4) {
      FUNC_8(VAR_16,
        VAR_15, VAR_6,
        VAR_23);
   }
     }
        }else {

  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x1) {
            FUNC_8(VAR_16,
                VAR_5, VAR_6, 0);
      }
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x2) {
            FUNC_8(VAR_16,
                VAR_14, VAR_6, 0);
      }
  if (((VAR_24->base_eep_header.txrx_mask & 0xf0) >> 4) & 0x4) {
            FUNC_8(VAR_16,
                VAR_15, VAR_6, 0);
  }
        }
    }
    FUNC_8(VAR_16,
        VAR_3, VAR_4, VAR_20[0]);

    return 0;
}
