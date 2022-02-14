
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwi_softc {int sc_dev; } ;
struct bwi_mac {struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct bwi_mac*) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(struct bwi_mac *VAR_6)
{
 struct bwi_softc *VAR_7 = VAR_6->mac_sc;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;

 FUNC_0(VAR_7, VAR_2, VAR_3);


 FUNC_1(VAR_7, VAR_2);


 for (VAR_9 = 0; VAR_9 < 10000; ++VAR_9) {
  if (FUNC_1(VAR_7, VAR_1) & VAR_0)
   break;
  FUNC_2(1);
 }
 if (VAR_9 == 10000) {
  FUNC_4(VAR_7->sc_dev, "can't stop MAC\n");
  return VAR_4;
 }


 return 0;
}
