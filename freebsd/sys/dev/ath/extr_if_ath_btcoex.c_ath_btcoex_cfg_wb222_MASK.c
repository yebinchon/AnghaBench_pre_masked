
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_dev; } ;


 int FUNC_0 (struct ath_softc*,int,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int
FUNC_2(struct ath_softc *VAR_0)
{

 FUNC_1(VAR_0->sc_dev, "Enabling WB222 BTCOEX\n");

 return (FUNC_0(VAR_0, 0x2201, 1));
}
