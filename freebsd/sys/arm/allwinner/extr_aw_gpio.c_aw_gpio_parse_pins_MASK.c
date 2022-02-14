
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int FUNC_0 (int ,char*,char const***) ;

__attribute__((used)) static const char **
FUNC_1(phandle_t VAR_0, int *VAR_1)
{
 const char **VAR_2;

 *VAR_1 = FUNC_0(VAR_0, "pins", &VAR_2);
 if (*VAR_1 > 0)
  return (VAR_2);

 *VAR_1 = FUNC_0(VAR_0, "allwinner,pins",
     &VAR_2);
 if (*VAR_1 > 0)
  return (VAR_2);

 return (((void*)0));
}
