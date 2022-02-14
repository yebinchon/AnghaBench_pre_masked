
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ath_softc {int sc_ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct ath_softc*,int,int) ;
 int FUNC_3 (struct ath_softc*,int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct ath_softc *VAR_6, uint8_t VAR_7,
    uint8_t *VAR_8)
{
 uint32_t VAR_9[4] = {0, 0, 0, 0};

 switch (VAR_7) {
 case 128:
  FUNC_0(VAR_6, VAR_0, "(MCI) receive BT_CAL_REQ\n");
  if (FUNC_4(VAR_6->sc_ah, VAR_1,
      ((void*)0)) == VAR_3) {
   FUNC_4(VAR_6->sc_ah,
       VAR_2, ((void*)0));
   FUNC_2(VAR_6, 1000, 1000);
  } else {
   FUNC_0(VAR_6, VAR_0,
       "(MCI) State mismatches: %d\n",
       FUNC_4(VAR_6->sc_ah,
       VAR_1, ((void*)0)));
  }
  break;
 case 130:
  FUNC_0(VAR_6, VAR_0, "(MCI) receive BT_CAL_DONE\n");
  if (FUNC_4(VAR_6->sc_ah, VAR_1,
      ((void*)0)) == VAR_4) {
   FUNC_0(VAR_6, VAR_0,
       "(MCI) ERROR ILLEGAL!\n");
  } else {
   FUNC_0(VAR_6, VAR_0,
       "(MCI) BT not in CAL state.\n");
  }
  break;
 case 129:
  FUNC_0(VAR_6, VAR_0, "(MCI) receive BT_CAL_GRANT\n");

  FUNC_0(VAR_6, VAR_0, "(MCI) Send WLAN_CAL_DONE\n");
  FUNC_1(VAR_9, VAR_5);
  FUNC_3(VAR_6, &VAR_9[0]);
  break;
 default:
  FUNC_0(VAR_6, VAR_0,
      "(MCI) Unknown GPM CAL message.\n");
  break;
 }
}
