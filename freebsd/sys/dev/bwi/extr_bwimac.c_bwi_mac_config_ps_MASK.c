
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwi_softc {int sc_dev; } ;
struct bwi_mac {int mac_rev; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct bwi_mac*,int ,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(struct bwi_mac *VAR_8)
{
 struct bwi_softc *VAR_9 = VAR_8->mac_sc;
 uint32_t VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_2);

 VAR_10 &= ~VAR_3;
 VAR_10 |= VAR_4;
 FUNC_1(VAR_9, VAR_2, VAR_10);


 FUNC_0(VAR_9, VAR_2);

 if (VAR_8->mac_rev >= 5) {
  int VAR_11;


  for (VAR_11 = 0; VAR_11 < 100; ++VAR_11) {
   if (FUNC_3(VAR_8, VAR_0,
       VAR_1) != VAR_5)
    break;
   FUNC_2(10);
  }
  if (VAR_11 == 100) {
   FUNC_4(VAR_9->sc_dev, "config PS failed\n");
   return VAR_6;
  }

 }
 return 0;
}
