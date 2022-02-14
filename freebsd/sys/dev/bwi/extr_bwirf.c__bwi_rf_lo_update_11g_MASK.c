
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct bwi_softc {int sc_flags; } ;
struct bwi_rf_lo {int dummy; } ;
struct TYPE_2__ {int tp_ctrl2; } ;
struct bwi_mac {TYPE_1__ mac_tpctl; struct bwi_softc* mac_sc; } ;
typedef int lo_save ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (struct bwi_mac*,int,int) ;
 int FUNC_2 (struct bwi_rf_lo*,struct bwi_rf_lo*,int) ;
 struct bwi_rf_lo* FUNC_3 (struct bwi_mac*,int const,int) ;
 int FUNC_4 (struct bwi_mac*,int) ;
 int FUNC_5 (struct bwi_mac*,struct bwi_rf_lo*) ;
 int FUNC_6 (struct bwi_mac*,struct bwi_rf_lo*,struct bwi_rf_lo*,int) ;
 int FUNC_7 (struct bwi_rf_lo*,int) ;

__attribute__((used)) static uint8_t
FUNC_8(struct bwi_mac *VAR_5, uint16_t VAR_6)
{



 static const int VAR_7[14] =
 { 3, 1, 5, 7, 9, 2, 0, 4, 6, 8, 1, 2, 3, 4 };
 static const int VAR_8[14] =
        { 0, 3, 1, 5, 7, 3, 2, 0, 4, 6, -1, -1, -1, -1 };
 static const int VAR_9[14] =
 { 3, 1, 5, 7, 9, 2, 0, 4, 6, 8, 10, 11, 12, 13 };

 struct bwi_softc *VAR_10 = VAR_5->mac_sc;
 struct bwi_rf_lo VAR_11, *VAR_12;
 uint8_t VAR_13 = 0;
 int VAR_14, VAR_15 = 0;

 FUNC_7(&VAR_11, sizeof(VAR_11));
 for (VAR_14 = 0; VAR_14 < 14; ++VAR_14) {
  int VAR_16 = VAR_8[VAR_14];
  int VAR_17 = VAR_7[VAR_14];
  int VAR_18;

  for (VAR_18 = 0; VAR_18 < 4; ++VAR_18) {
   uint16_t VAR_19, VAR_20;

   if ((VAR_10->sc_flags & VAR_1) == 0) {
    if (VAR_14 == 0) {
     FUNC_7(&VAR_11, sizeof(VAR_11));
    } else if (VAR_16 < 0) {
     VAR_12 = FUNC_3(VAR_5,
      VAR_17, 2 * VAR_18);
     FUNC_2(VAR_12, &VAR_11, sizeof(VAR_11));
    } else {
     VAR_12 = FUNC_3(VAR_5,
      VAR_16, 0);
     FUNC_2(VAR_12, &VAR_11, sizeof(VAR_11));
    }

    VAR_13 = 0;
    VAR_15 = 0;





    if (VAR_16 >= 0) {
     int VAR_21;

     VAR_21 = VAR_17 * 2 + VAR_18;
     if (VAR_21 > 14) {
      VAR_15 = 1;
      if (VAR_21 > 17)
       VAR_13 = 1;
      if (VAR_21 > 19)
       VAR_13 = 2;
     }
    }
   } else {
    VAR_12 = FUNC_3(VAR_5,
     VAR_17, 2 * VAR_18);
    if (!FUNC_5(VAR_5, VAR_12))
     continue;
    FUNC_2(VAR_12, &VAR_11, sizeof(VAR_11));

    VAR_13 = 3;
    VAR_15 = 0;
   }

   FUNC_1(VAR_5, VAR_2, VAR_17);

   VAR_19 = VAR_5->mac_tpctl.tp_ctrl2;
   if (VAR_16 < 0)
    VAR_19 |= (3 << 4);
   FUNC_1(VAR_5, VAR_3, VAR_19);

   FUNC_0(10);

   FUNC_4(VAR_5, VAR_18 * 2);

   VAR_20 = VAR_6 & 0xfff0;
   if (VAR_15)
    VAR_20 |= 0x8;
   FUNC_1(VAR_5, 0x7a, VAR_20);

   VAR_12 = FUNC_3(VAR_5,
    VAR_9[VAR_14], VAR_18 * 2);
   FUNC_6(VAR_5, &VAR_11, VAR_12, VAR_13);
  }
 }
 return VAR_13;



}
