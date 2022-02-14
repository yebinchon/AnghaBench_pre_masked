
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_softc {int sc_gpio; int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int FUNC_0 (int ,int ,size_t,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int) ;
 size_t FUNC_3 (int*) ;

int
FUNC_4(struct bwn_mac *VAR_2, uint32_t VAR_3)
{
 struct bwn_softc *VAR_4;
 uint32_t VAR_5[32];
 int VAR_6;

 VAR_4 = VAR_2->mac_sc;


 for (size_t VAR_7 = 0; VAR_7 < FUNC_3(VAR_5); VAR_7++) {
  uint32_t VAR_8 = (1 << VAR_7);

  if (VAR_3 & VAR_8) {

   VAR_5[VAR_7] = VAR_0|VAR_1;
  } else {

   VAR_5[VAR_7] = 0;
  }
 }


 VAR_6 = FUNC_0(VAR_4->sc_gpio, 0, FUNC_3(VAR_5), VAR_5);
 if (VAR_6) {
  FUNC_2(VAR_4->sc_dev, "error configuring %s pin flags: "
      "%d\n", FUNC_1(VAR_4->sc_gpio), VAR_6);
  return (VAR_6);
 }

 return (0);
}
