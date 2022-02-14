
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bwn_softc {int * sc_pmu; int sc_dev; } ;
struct bwn_mac {struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int,int) ;
 int FUNC_1 (int ,char*) ;

int
FUNC_2(struct bwn_mac *VAR_1)
{
 struct bwn_softc *VAR_2;
 uint32_t VAR_3;

 VAR_2 = VAR_1->mac_sc;

 if (VAR_2->sc_pmu == ((void*)0)) {
  FUNC_1(VAR_2->sc_dev, "PMU device not found\n");
  return (VAR_0);
 }

 VAR_3 = 0x4;
 FUNC_0(VAR_2->sc_pmu, 0x0, 0x0, VAR_3);
 FUNC_0(VAR_2->sc_pmu, 0x0, VAR_3, VAR_3);
 FUNC_0(VAR_2->sc_pmu, 0x0, 0x0, VAR_3);

 return (0);
}
