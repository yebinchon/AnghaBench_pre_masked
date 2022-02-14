
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapping {int index; } ;
struct macro_group {int num_builtins; int (* find_builtin ) (char const*,int *) ;int macros; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ,char const**) ;
 int FUNC_1 (char const*,int *) ;

__attribute__((used)) static int
FUNC_2 (struct macro_group *VAR_0, const char *VAR_1, FILE *VAR_2)
{
  struct mapping *VAR_3;

  VAR_3 = (struct mapping *) FUNC_0 (VAR_0->macros, &VAR_1);
  if (VAR_3 != 0)
    return VAR_3->index + VAR_0->num_builtins;
  return VAR_0->find_builtin (VAR_1, VAR_2);
}
