
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phy_reg ;
typedef int phy_handle ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,void*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(phandle_t VAR_1, int *VAR_2)
{
 phandle_t VAR_3;
 pcell_t VAR_4, VAR_5;

 if (FUNC_0(VAR_1, "phy-handle", (void *)&VAR_4,
     sizeof(VAR_4)) <= 0)
  return (VAR_0);

 VAR_3 = FUNC_1(VAR_4);

 if (FUNC_0(VAR_3, "reg", (void *)&VAR_5,
     sizeof(VAR_5)) <= 0)
  return (VAR_0);

 *VAR_2 = VAR_5;

 return (0);
}
