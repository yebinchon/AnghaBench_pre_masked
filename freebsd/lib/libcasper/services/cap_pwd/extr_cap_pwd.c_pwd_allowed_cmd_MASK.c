
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int FUNC_0 (int const*,char const*) ;
 int FUNC_1 (int const*,char*) ;
 int * FUNC_2 (int const*,char*) ;

__attribute__((used)) static bool
FUNC_3(const nvlist_t *VAR_0, const char *VAR_1)
{

 if (VAR_0 == ((void*)0))
  return (1);





 if (!FUNC_1(VAR_0, "cmds"))
  return (1);

 VAR_0 = FUNC_2(VAR_0, "cmds");
 return (FUNC_0(VAR_0, VAR_1));
}
