
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_dev; } ;


 int FUNC_0 (int ,char*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct ath_softc *VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{

 FUNC_0(VAR_0->sc_dev,
     "bad series%d hwrate 0x%x, tries %u ts_status 0x%x\n",
     VAR_1, VAR_2, VAR_3, VAR_4);
}
