
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neon_type_el {int dummy; } ;
struct neon_typed_alias {int defined; int index; struct neon_type_el eltype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char**,int ,int *,struct neon_typed_alias*) ;

__attribute__((used)) static int
FUNC_3 (char **VAR_4, int VAR_5, struct neon_type_el *VAR_6)
{
  int VAR_7;
  char *VAR_8 = *VAR_4;
  struct neon_typed_alias VAR_9;

  VAR_7 = FUNC_2 (&VAR_8, VAR_3, ((void*)0), &VAR_9);

  if (VAR_7 == VAR_0 || (VAR_9.defined & VAR_2) == 0)
    return VAR_0;

  if (VAR_9.index == VAR_1)
    {
      FUNC_1 (FUNC_0("scalar must have an index"));
      return VAR_0;
    }
  else if (VAR_9.index >= 64 / VAR_5)
    {
      FUNC_1 (FUNC_0("scalar index out of range"));
      return VAR_0;
    }

  if (VAR_6)
    *VAR_6 = VAR_9.eltype;

  *VAR_4 = VAR_8;

  return VAR_7 * 16 + VAR_9.index;
}
