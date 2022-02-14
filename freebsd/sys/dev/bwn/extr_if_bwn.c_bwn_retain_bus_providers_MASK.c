
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chipc_caps {scalar_t__ pmu; } ;
struct bwn_softc {int sc_dev; int * sc_pmu; int * sc_gpio; int * sc_chipc; } ;


 struct chipc_caps* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bwn_softc*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct bwn_softc *VAR_4)
{
 struct chipc_caps *VAR_5;

 VAR_4->sc_chipc = FUNC_1(VAR_4->sc_dev, VAR_0);
 if (VAR_4->sc_chipc == ((void*)0)) {
  FUNC_3(VAR_4->sc_dev, "ChipCommon device not found\n");
  goto failed;
 }

 VAR_5 = FUNC_0(VAR_4->sc_chipc);

 VAR_4->sc_gpio = FUNC_1(VAR_4->sc_dev, VAR_1);
 if (VAR_4->sc_gpio == ((void*)0)) {
  FUNC_3(VAR_4->sc_dev, "GPIO device not found\n");
  goto failed;
 }

 if (VAR_5->pmu) {
  VAR_4->sc_pmu = FUNC_1(VAR_4->sc_dev, VAR_2);
  if (VAR_4->sc_pmu == ((void*)0)) {
   FUNC_3(VAR_4->sc_dev, "PMU device not found\n");
   goto failed;
  }
 }

 return (0);

failed:
 FUNC_2(VAR_4);
 return (VAR_3);
}
