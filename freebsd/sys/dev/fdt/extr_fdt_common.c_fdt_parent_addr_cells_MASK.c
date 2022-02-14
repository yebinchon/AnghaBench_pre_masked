
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;
typedef int addr_cells ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(phandle_t VAR_0)
{
 pcell_t VAR_1;


 if (FUNC_1(FUNC_0(VAR_0), "#address-cells", &VAR_1,
     sizeof(VAR_1)) <= 0)
  return (2);

 return ((int)FUNC_2(VAR_1));
}
