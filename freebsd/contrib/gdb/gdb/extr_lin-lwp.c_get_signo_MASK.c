
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minimal_symbol {int dummy; } ;
typedef int signo ;


 int FUNC_0 (struct minimal_symbol*) ;
 struct minimal_symbol* FUNC_1 (char const*,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_3 (const char *VAR_0)
{
  struct minimal_symbol *VAR_1;
  int VAR_2;

  VAR_1 = FUNC_1 (VAR_0, ((void*)0), ((void*)0));
  if (VAR_1 == ((void*)0))
    return 0;

  if (FUNC_2 (FUNC_0 (VAR_1), (char *) &VAR_2,
     sizeof (VAR_2)) != 0)
    return 0;

  return VAR_2;
}
