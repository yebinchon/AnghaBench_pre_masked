
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void const*,int,char**) ;
 int FUNC_1 (void const*,int,char**) ;
 int FUNC_2 (void const*,int,int,char**) ;
 scalar_t__ FUNC_3 (void const*,int,int*) ;

__attribute__((used)) static int
FUNC_4(const void *VAR_0, int VAR_1, char **VAR_2)
{
 int VAR_3;

 if (VAR_1 == 0) {
  *VAR_2 = ((void*)0);
  return (1);
 }

 if (FUNC_3(VAR_0, VAR_1, &VAR_3))
  return (FUNC_2(VAR_0, VAR_1, VAR_3, VAR_2));

 else if ((VAR_1 % 4) == 0)
  return (FUNC_1(VAR_0, VAR_1, VAR_2));

 else
  return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
