
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bwn_softc {int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;

int
FUNC_2(struct bwn_mac *VAR_1, int VAR_2)
{
 struct bwn_softc *VAR_3;
 uint32_t VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = VAR_1->mac_sc;


 VAR_5 = VAR_0;
 if (VAR_2) {
  VAR_4 = VAR_0;
 } else {
  VAR_4 = 0;
 }

 if ((VAR_6 = FUNC_0(VAR_3->sc_dev, VAR_4, VAR_5))) {
  FUNC_1(VAR_3->sc_dev, "failed to set CLK_FORCE ioctl flag: "
      "%d\n", VAR_6);
  return (VAR_6);
 }

 return (0);
}
