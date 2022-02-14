
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_xhci_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 int VAR_14 ;
 int FUNC_5 (struct exynos_xhci_softc*,int ) ;
 int VAR_15 ;
 int FUNC_6 (struct exynos_xhci_softc*,int ,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct exynos_xhci_softc *VAR_16)
{
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_18 = FUNC_5(VAR_16, VAR_11);
 if ((VAR_18 & VAR_12) != 0x55330000) {
  FUNC_7("It is not DWC3 controller\n");
  return (-1);
 }


 FUNC_6(VAR_16, VAR_0, VAR_1);
 FUNC_6(VAR_16, FUNC_4(0), VAR_14);
 FUNC_6(VAR_16, FUNC_3(0), VAR_13);

 FUNC_0(100000);

 VAR_19 = FUNC_5(VAR_16, FUNC_4(0));
 VAR_19 &= ~(VAR_14);
 FUNC_6(VAR_16, FUNC_4(0), VAR_19);

 VAR_19 = FUNC_5(VAR_16, FUNC_3(0));
 VAR_19 &= ~(VAR_13);
 FUNC_6(VAR_16, FUNC_3(0), VAR_19);

 VAR_19 = FUNC_5(VAR_16, VAR_0);
 VAR_19 &= ~VAR_1;
 FUNC_6(VAR_16, VAR_0, VAR_19);

 VAR_17 = FUNC_5(VAR_16, VAR_9);

 VAR_19 = FUNC_5(VAR_16, VAR_0);
 VAR_19 &= ~(VAR_6 << VAR_7);
 VAR_19 &= ~(VAR_2);

 if (FUNC_2(VAR_17) == VAR_10)

  VAR_19 &= ~(VAR_3);

 if ((VAR_18 & VAR_15) < 0x190a)
  VAR_19 |= (VAR_8);
 FUNC_6(VAR_16, VAR_0, VAR_19);


 VAR_19 = FUNC_5(VAR_16, VAR_0);
 VAR_19 &= ~(FUNC_1(VAR_5));
 VAR_19 |= FUNC_1(VAR_4);
 FUNC_6(VAR_16, VAR_0, VAR_19);

 return (0);
}
