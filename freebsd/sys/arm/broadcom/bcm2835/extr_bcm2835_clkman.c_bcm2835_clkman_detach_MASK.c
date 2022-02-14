
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_clkman_softc {scalar_t__ sc_m_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 struct bcm2835_clkman_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct bcm2835_clkman_softc *VAR_2;

 FUNC_0(VAR_1);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2->sc_m_res)
  FUNC_1(VAR_1, VAR_0, 0, VAR_2->sc_m_res);

 return (0);
}
