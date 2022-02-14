
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;
typedef int cell ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int*,int) ;

int
FUNC_1(phandle_t VAR_1, int *VAR_2, int *VAR_3)
{
 pcell_t VAR_4;
 int VAR_5;




 VAR_5 = sizeof(VAR_4);
 if (FUNC_0(VAR_1, "#address-cells", &VAR_4, VAR_5) < VAR_5)
  VAR_4 = 2;
 *VAR_2 = (int)VAR_4;

 if (FUNC_0(VAR_1, "#size-cells", &VAR_4, VAR_5) < VAR_5)
  VAR_4 = 1;
 *VAR_3 = (int)VAR_4;

 if (*VAR_2 > 3 || *VAR_3 > 2)
  return (VAR_0);
 return (0);
}
