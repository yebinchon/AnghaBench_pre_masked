
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int i ;


 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*,int*,size_t*,int *,int ) ;

int
FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;
 int VAR_3;

 if (FUNC_0(&VAR_1, "kern.features.%s", VAR_0) < 0)
  return (0);
 VAR_2 = sizeof(VAR_3);
 if (FUNC_2(VAR_1, &VAR_3, &VAR_2, ((void*)0), 0) < 0) {
  FUNC_1(VAR_1);
  return (0);
 }
 FUNC_1(VAR_1);
 if (VAR_2 != sizeof(VAR_3))
  return (0);
 return (VAR_3 != 0);
}
