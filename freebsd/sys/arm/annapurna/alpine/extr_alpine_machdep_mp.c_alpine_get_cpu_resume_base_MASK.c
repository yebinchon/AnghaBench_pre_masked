
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int phandle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,int *,int *) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int
FUNC_3(u_long *VAR_2, u_long *VAR_3)
{
 phandle_t VAR_4;
 u_long VAR_5 = 0;
 u_long VAR_6 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_1);

 if ((VAR_4 = FUNC_0("/")) == -1)
  return (VAR_0);

 if ((VAR_4 =
     FUNC_2(VAR_4, "annapurna-labs,al-cpu-resume")) == 0)
  return (VAR_0);

 if (FUNC_1(VAR_4, &VAR_5, &VAR_6))
  return (VAR_0);

 *VAR_2 = VAR_5;
 *VAR_3 = VAR_6;

 return (0);
}
