
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,int ,char*,int*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2;
 uint32_t VAR_3 = 0;
 if ((FUNC_1("ar933x_gmac", 0, "override_phy", &VAR_2) == 0)
     && (VAR_2 == 0))
  return;
 if ((FUNC_1("ar933x_gmac", 0, "swap_phy", &VAR_2) == 0)
     && (VAR_2 == 1))
  VAR_3 |= VAR_1;
 if ((FUNC_1("ar933x_gmac", 0, "swap_phy_addr", &VAR_2) == 0)
     && (VAR_2 == 1))
  VAR_3 |= VAR_0;
 FUNC_0(VAR_3);
}
