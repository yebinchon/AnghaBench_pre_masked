
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_clkman_softc {int sc_m_res; int sc_m_bsh; int sc_m_bst; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ) ;
 struct bcm2835_clkman_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct bcm2835_clkman_softc *VAR_4;
 int VAR_5;

 if (FUNC_3(VAR_3) != 0) {
  FUNC_4(VAR_3, "only one clk manager supported\n");
  return (VAR_0);
 }

 VAR_4 = FUNC_2(VAR_3);
 VAR_4->sc_dev = VAR_3;

 VAR_5 = 0;
 VAR_4->sc_m_res = FUNC_0(VAR_3, VAR_2, &VAR_5,
     VAR_1);
 if (!VAR_4->sc_m_res) {
  FUNC_4(VAR_3, "cannot allocate memory window\n");
  return (VAR_0);
 }

 VAR_4->sc_m_bst = FUNC_6(VAR_4->sc_m_res);
 VAR_4->sc_m_bsh = FUNC_5(VAR_4->sc_m_res);

 return (FUNC_1(VAR_3));
}
