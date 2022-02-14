
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int kvaddr_t ;


 int FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (char const*,int *,int *) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_0, kvaddr_t *VAR_1)
{
 struct minimal_symbol *VAR_2;

 VAR_2 = FUNC_1 (VAR_0, ((void*)0), ((void*)0));
 if (VAR_2 == ((void*)0))
  return (1);

 *VAR_1 = FUNC_0 (VAR_2);
 return (0);
}
