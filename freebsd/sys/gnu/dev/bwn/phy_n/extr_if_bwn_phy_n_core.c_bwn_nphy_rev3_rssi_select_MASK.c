
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
typedef enum n_rssi_type { ____Placeholder_n_rssi_type } n_rssi_type ;
typedef scalar_t__ bwn_band_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct bwn_mac*,int,int) ;
 int FUNC_1 (struct bwn_mac*,int,int) ;
 int FUNC_2 (struct bwn_mac*,int,int,int) ;
 int FUNC_3 (struct bwn_mac*,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_4 (struct bwn_mac*) ;
 scalar_t__ FUNC_5 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_6(struct bwn_mac *VAR_17, uint8_t VAR_18,
          enum n_rssi_type VAR_19)
{
 uint8_t VAR_20;
 uint16_t VAR_21, VAR_22;

 if (VAR_18 == 0) {
  FUNC_0(VAR_17, VAR_7, 0xFDFF);
  FUNC_0(VAR_17, VAR_6, 0xFDFF);
  FUNC_0(VAR_17, VAR_4, 0xFCFF);
  FUNC_0(VAR_17, VAR_5, 0xFCFF);
  FUNC_0(VAR_17, VAR_10, 0xFFDF);
  FUNC_0(VAR_17, VAR_11, 0xFFDF);
  FUNC_0(VAR_17, VAR_8, 0xFFC3);
  FUNC_0(VAR_17, VAR_9, 0xFFC3);
 } else {
  for (VAR_20 = 0; VAR_20 < 2; VAR_20++) {
   if ((VAR_18 == 1 && VAR_20 == 1) || (VAR_18 == 2 && !VAR_20))
    continue;

   VAR_21 = (VAR_20 == 0) ?
    VAR_7 : VAR_6;
   FUNC_2(VAR_17, VAR_21, 0xFDFF, 0x0200);

   if (VAR_19 == VAR_15 ||
       VAR_19 == VAR_16 ||
       VAR_19 == VAR_13) {
    VAR_21 = (VAR_20 == 0) ?
     VAR_4 :
     VAR_5;
    FUNC_2(VAR_17, VAR_21, 0xFCFF, 0);

    VAR_21 = (VAR_20 == 0) ?
     VAR_8 :
     VAR_9;
    FUNC_2(VAR_17, VAR_21, 0xFFC3, 0);

    if (VAR_19 == VAR_15)
     VAR_22 = (FUNC_4(VAR_17) == VAR_3) ? 4 : 8;
    else if (VAR_19 == VAR_16)
     VAR_22 = 16;
    else
     VAR_22 = 32;
    FUNC_1(VAR_17, VAR_21, VAR_22);

    VAR_21 = (VAR_20 == 0) ?
     VAR_10 :
     VAR_11;
    FUNC_1(VAR_17, VAR_21, 0x0020);
   } else {
    if (VAR_19 == VAR_14)
     VAR_22 = 0x0100;
    else if (VAR_19 == VAR_12)
     VAR_22 = 0x0200;
    else
     VAR_22 = 0x0300;

    VAR_21 = (VAR_20 == 0) ?
     VAR_4 :
     VAR_5;

    FUNC_2(VAR_17, VAR_21, 0xFCFF, VAR_22);
    FUNC_2(VAR_17, VAR_21, 0xF3FF, VAR_22 << 2);

    if (VAR_19 != VAR_12 &&
        VAR_19 != VAR_14) {
     bwn_band_t VAR_23 =
      FUNC_4(VAR_17);

     if (VAR_17->mac_phy.rev < 7) {
      if (FUNC_5(VAR_17))
       VAR_22 = (VAR_23 == VAR_3) ? 0xC : 0xE;
      else
       VAR_22 = 0x11;
      VAR_21 = (VAR_20 == 0) ? VAR_0 : VAR_1;
      VAR_21 |= VAR_2;
      FUNC_3(VAR_17, VAR_21, VAR_22);
     }

     VAR_21 = (VAR_20 == 0) ?
      VAR_7 :
      VAR_6;
     FUNC_1(VAR_17, VAR_21, 0x0200);
    }
   }
  }
 }
}
