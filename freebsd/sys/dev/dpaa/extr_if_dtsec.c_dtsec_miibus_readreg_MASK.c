
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dtsec_softc {int sc_mdio; } ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 struct dtsec_softc* FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct dtsec_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 return (FUNC_0(VAR_3->sc_mdio, VAR_1, VAR_2));
}
