
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpp_demangle_data {int subst; } ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,char const*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct cpp_demangle_data *VAR_0, const char *VAR_1,
    size_t VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
  return (0);

 if (!FUNC_0(&VAR_0->subst, VAR_1, VAR_2))
  return (FUNC_1(&VAR_0->subst, VAR_1, VAR_2));

 return (1);
}
