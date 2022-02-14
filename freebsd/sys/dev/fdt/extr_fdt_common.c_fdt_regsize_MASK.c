
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int reg ;
typedef int phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int **,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int*,int*) ;
 int FUNC_3 (int *,int) ;

int
FUNC_4(phandle_t VAR_3, u_long *VAR_4, u_long *VAR_5)
{
 pcell_t VAR_6[4];
 int VAR_7, VAR_8, VAR_9;

 if (FUNC_2(FUNC_1(VAR_3), &VAR_7, &VAR_9))
  return (VAR_2);

 if ((sizeof(pcell_t) * (VAR_7 + VAR_9)) > sizeof(VAR_6))
  return (VAR_1);

 VAR_8 = FUNC_0(VAR_3, "reg", &VAR_6, sizeof(VAR_6));
 if (VAR_8 <= 0)
  return (VAR_0);

 *VAR_4 = FUNC_3(&VAR_6[0], VAR_7);
 *VAR_5 = FUNC_3(&VAR_6[VAR_7], VAR_9);
 return (0);
}
