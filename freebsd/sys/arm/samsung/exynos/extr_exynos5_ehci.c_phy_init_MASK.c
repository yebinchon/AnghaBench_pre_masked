
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_ehci_softc {int host_bsh; int host_bst; int sysreg_bsh; int sysreg_bst; } ;
typedef int phandle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (struct exynos_ehci_softc*,int ,int) ;
 int FUNC_5 (struct exynos_ehci_softc*,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(struct exynos_ehci_softc *VAR_12)
{
 int VAR_13;
 phandle_t VAR_14;

 FUNC_4(VAR_12, VAR_1, 1);


 FUNC_3(VAR_12->sysreg_bst, VAR_12->sysreg_bsh,
     VAR_0, VAR_11);


 FUNC_6();

 VAR_13 = FUNC_2(VAR_12->host_bst, VAR_12->host_bsh, 0x0);
 VAR_13 &= ~(VAR_4 |
     VAR_6 |
     VAR_7 |
     VAR_8 |
     VAR_10 |
     VAR_9);

 VAR_13 |= (VAR_3 |
     VAR_5);
 FUNC_3(VAR_12->host_bst, VAR_12->host_bsh, 0x0, VAR_13);

 FUNC_0(10);

 VAR_13 = FUNC_2(VAR_12->host_bst, VAR_12->host_bsh, 0x0);
 VAR_13 &= ~(VAR_5);
 FUNC_3(VAR_12->host_bst, VAR_12->host_bsh, 0x0, VAR_13);

 if ((VAR_14 = FUNC_1("/hsichub")) != -1) {
  FUNC_5(VAR_12, VAR_14);
 }

 FUNC_4(VAR_12, VAR_2, 1);

 return (0);
}
