
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*,int*) ;
 scalar_t__ FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (char*,int) ;

int
FUNC_3(void)
{
 int VAR_5;
 char VAR_6[VAR_4];

 if (FUNC_2(VAR_6, VAR_4) != 0 ||
     FUNC_0(VAR_6, &VAR_5) != 0) {
  VAR_5 = VAR_3;
  if (FUNC_1(&VAR_5) != 0)
   return (VAR_0);
  return (VAR_2);
 }

 if (FUNC_1(&VAR_5) != 0)
  return (VAR_0);

 return (VAR_1);
}
