
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char**,int*) ;
 scalar_t__ FUNC_1 (int,char**,int,char**) ;
 scalar_t__ FUNC_2 (int,char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, char *VAR_3[])
{
 int VAR_4;
 char *VAR_5, *VAR_6, *VAR_7;

 VAR_5 = (VAR_2 > 2) ? VAR_3[2] : ((void*)0);

 VAR_7 = ((void*)0);

 if (VAR_2 > 3) {

  if (FUNC_1(VAR_2, VAR_3, 3, &VAR_7) != 0)
   return (VAR_0);
 } else
  VAR_7 = ((void*)0);

 if (FUNC_0(&VAR_5, &VAR_6, &VAR_4) != 0)
  return (VAR_0);

 if (FUNC_2(VAR_4, VAR_6, VAR_7, 1))
  return (VAR_0);

 return (VAR_1);
}
