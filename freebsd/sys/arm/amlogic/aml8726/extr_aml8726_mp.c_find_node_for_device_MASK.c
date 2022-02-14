
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char const*,int) ;
 scalar_t__ FUNC_2 (int,char const*) ;

__attribute__((used)) static phandle_t
FUNC_3(const char *VAR_0, const char **VAR_1)
{
 int VAR_2;
 phandle_t VAR_3;





 if ((VAR_3 = FUNC_0(VAR_0)) != -1)
  for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
   if (FUNC_2(VAR_3, VAR_1[VAR_2]))
    return VAR_3;





 for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++) {
  if ((VAR_3 = FUNC_0("/soc")) == -1)
   return (0);

  if ((VAR_3 = FUNC_1(VAR_3, VAR_1[VAR_2], 1)) != 0)
   return VAR_3;
 }

 return (0);
}
