
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct reg_entry {int type; int number; struct neon_typed_alias* neon; } ;
struct TYPE_4__ {int size; int type; } ;
struct neon_typed_alias {int defined; int index; TYPE_1__ eltype; } ;
struct neon_type {int elems; TYPE_1__* el; } ;
struct TYPE_5__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_2__ expressionS ;
typedef enum arm_reg_type { ____Placeholder_arm_reg_type } arm_reg_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char FUNC_0 (char) ;
 char FUNC_1 (char) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 struct reg_entry* FUNC_4 (char**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int,struct neon_typed_alias*) ;
 int FUNC_7 (TYPE_2__*,char**,int ) ;
 scalar_t__ FUNC_8 (struct neon_type*,char**) ;
 scalar_t__ FUNC_9 (char**,char) ;
 scalar_t__ FUNC_10 (char*,char*,int) ;
 int FUNC_11 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_12 (char *VAR_9, char *VAR_10)
{
  enum arm_reg_type VAR_11;
  struct reg_entry *VAR_12;
  struct reg_entry VAR_13;
  struct neon_type VAR_14;
  struct neon_typed_alias VAR_15;
  char *VAR_16, *VAR_17;
  int VAR_18;

  VAR_15.defined = 0;
  VAR_15.eltype.type = VAR_4;
  VAR_15.eltype.size = -1;
  VAR_15.index = -1;

  VAR_17 = VAR_10;

  if (FUNC_10 (VAR_10, " .dn ", 5) == 0)
    VAR_11 = VAR_7;
  else if (FUNC_10 (VAR_10, " .qn ", 5) == 0)
    VAR_11 = VAR_6;
  else
    return 0;

  VAR_10 += 5;

  if (*VAR_10 == '\0')
    return 0;

  VAR_12 = FUNC_4 (&VAR_10);

  if (VAR_12 && VAR_12->type != VAR_11)
    {
      FUNC_5 (FUNC_2("bad type for register"));
      return 0;
    }

  if (VAR_12 == ((void*)0))
    {
      expressionS VAR_19;

      FUNC_7 (&VAR_19, &VAR_10, VAR_1);
      if (VAR_19.X_op != VAR_5)
        {
          FUNC_5 (FUNC_2("expression must be constant"));
          return 0;
        }
      VAR_12 = &VAR_13;
      VAR_12->number = (VAR_11 == VAR_6) ? VAR_19.X_add_number * 2
                                                  : VAR_19.X_add_number;
      VAR_12->neon = 0;
    }

  if (VAR_12->neon)
    VAR_15 = *VAR_12->neon;

  if (FUNC_8 (&VAR_14, &VAR_10) == VAR_8)
    {

      if (VAR_15.defined & VAR_3)
        {
          FUNC_5 (FUNC_2("can't redefine the type of a register alias"));
          return 0;
        }

      VAR_15.defined |= VAR_3;
      if (VAR_14.elems != 1)
        {
          FUNC_5 (FUNC_2("you must specify a single type only"));
          return 0;
        }
      VAR_15.eltype = VAR_14.el[0];
    }

  if (FUNC_9 (&VAR_10, '[') == VAR_8)
    {
      expressionS VAR_20;


      if (VAR_15.defined & VAR_2)
        {
          FUNC_5 (FUNC_2("can't redefine the index of a scalar alias"));
          return 0;
        }

      FUNC_7 (&VAR_20, &VAR_10, VAR_1);

      if (VAR_20.X_op != VAR_5)
        {
          FUNC_5 (FUNC_2("scalar index must be constant"));
          return 0;
        }

      VAR_15.defined |= VAR_2;
      VAR_15.index = VAR_20.X_add_number;

      if (FUNC_9 (&VAR_10, ']') == VAR_0)
        {
          FUNC_5 (FUNC_2("expecting ]"));
          return 0;
        }
    }

  VAR_18 = VAR_17 - VAR_9;
  VAR_16 = FUNC_3 (VAR_18 + 1);
  FUNC_11 (VAR_16, VAR_9, VAR_18);
  VAR_16[VAR_18] = '\0';

  FUNC_6 (VAR_16, VAR_12->number, VAR_11,
                         VAR_15.defined != 0 ? &VAR_15 : ((void*)0));


  for (VAR_10 = VAR_16; *VAR_10; VAR_10++)
    *VAR_10 = FUNC_1 (*VAR_10);

  if (FUNC_10 (VAR_16, VAR_9, VAR_18))
    FUNC_6 (VAR_16, VAR_12->number, VAR_11,
                           VAR_15.defined != 0 ? &VAR_15 : ((void*)0));


  for (VAR_10 = VAR_16; *VAR_10; VAR_10++)
    *VAR_10 = FUNC_0 (*VAR_10);

  if (FUNC_10 (VAR_16, VAR_9, VAR_18))
    FUNC_6 (VAR_16, VAR_12->number, VAR_11,
                           VAR_15.defined != 0 ? &VAR_15 : ((void*)0));

  return 1;
}
