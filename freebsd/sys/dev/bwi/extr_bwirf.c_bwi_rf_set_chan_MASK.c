
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int ;
struct bwi_softc {scalar_t__ sc_locale; } ;
struct TYPE_2__ {int rf_curchan; } ;
struct bwi_mac {TYPE_1__ mac_rf; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bwi_softc*,int ,int) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (struct bwi_softc*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bwi_mac*,int ) ;
 int FUNC_6 (struct bwi_mac*,int ) ;
 int VAR_6 ;
 int FUNC_7 (struct bwi_mac*,int ,int ,int) ;
 int FUNC_8 (struct bwi_mac*,int) ;

void
FUNC_9(struct bwi_mac *VAR_7, u_int VAR_8, int VAR_9)
{
 struct bwi_softc *VAR_10 = VAR_7->mac_sc;

 if (VAR_8 == VAR_6)
  return;

 FUNC_7(VAR_7, VAR_0, VAR_1, VAR_8);



 if (VAR_9)
  FUNC_8(VAR_7, VAR_8);

 FUNC_3(VAR_10, VAR_3, FUNC_0(VAR_8));

 if (VAR_8 == 14) {
  if (VAR_10->sc_locale == VAR_5)
   FUNC_5(VAR_7, VAR_2);
  else
   FUNC_6(VAR_7, VAR_2);
  FUNC_2(VAR_10, VAR_4, (1 << 11));
 } else {
  FUNC_1(VAR_10, VAR_4, 0x840);
 }
 FUNC_4(8000);

 VAR_7->mac_rf.rf_curchan = VAR_8;
}
