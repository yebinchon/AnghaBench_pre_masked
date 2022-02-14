
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neon_type_el {int dummy; } ;
struct neon_type {int elems; struct neon_type_el* el; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct neon_type*,char**) ;

__attribute__((used)) static int
FUNC_3 (struct neon_type_el *VAR_2, char **VAR_3)
{
  char *VAR_4 = *VAR_3;
  struct neon_type VAR_5;

  if (*VAR_4 == '.')
    {
      if (FUNC_2 (&VAR_5, &VAR_4) == VAR_1)
        {
          if (VAR_5.elems == 1)
            *VAR_2 = VAR_5.el[0];
          else
            {
              FUNC_1 (FUNC_0("only one type should be specified for operand"));
              return VAR_0;
            }
        }
      else
        {
          FUNC_1 (FUNC_0("vector type expected"));
          return VAR_0;
        }
    }
  else
    return VAR_0;

  *VAR_3 = VAR_4;

  return VAR_1;
}
