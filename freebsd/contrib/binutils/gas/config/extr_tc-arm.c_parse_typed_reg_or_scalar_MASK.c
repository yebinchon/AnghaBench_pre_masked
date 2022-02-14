
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct reg_entry {scalar_t__ type; int number; struct neon_typed_alias* neon; } ;
struct neon_type_el {int size; int type; } ;
struct neon_typed_alias {int defined; int index; struct neon_type_el eltype; } ;
struct TYPE_3__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;
typedef enum arm_reg_type { ____Placeholder_arm_reg_type } arm_reg_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char**,char*,struct reg_entry*,int) ;
 struct reg_entry* FUNC_2 (char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char**,int ) ;
 scalar_t__ FUNC_5 (struct neon_type_el*,char**) ;
 int FUNC_6 (char**,char) ;

__attribute__((used)) static int
FUNC_7 (char **VAR_16, enum arm_reg_type VAR_17,
                           enum arm_reg_type *VAR_18,
                           struct neon_typed_alias *VAR_19)
{
  char *VAR_20 = *VAR_16;
  struct reg_entry *VAR_21 = FUNC_2 (&VAR_20);
  struct neon_typed_alias VAR_22;
  struct neon_type_el VAR_23;

  VAR_22.defined = 0;
  VAR_22.index = -1;
  VAR_22.eltype.type = VAR_5;
  VAR_22.eltype.size = -1;



  if (VAR_21 == ((void*)0))
    {
      int VAR_24 = FUNC_1 (&VAR_20, *VAR_16, VAR_21, VAR_17);
      if (VAR_24 != VAR_0)
        *VAR_16 = VAR_20;
      if (VAR_19)
        *VAR_19 = VAR_22;
      return VAR_24;
    }


  if ((VAR_17 == VAR_9
       && (VAR_21->type == VAR_10 || VAR_21->type == VAR_12))
      || (VAR_17 == VAR_14
          && (VAR_21->type == VAR_13 || VAR_21->type == VAR_12))
      || (VAR_17 == VAR_11
          && (VAR_21->type == VAR_13 || VAR_21->type == VAR_12
              || VAR_21->type == VAR_10))
      || (VAR_17 == VAR_7
   && (VAR_21->type == VAR_8)))
    VAR_17 = VAR_21->type;

  if (VAR_17 != VAR_21->type)
    return VAR_0;

  if (VAR_21->neon)
    VAR_22 = *VAR_21->neon;

  if (FUNC_5 (&VAR_23, &VAR_20) == VAR_15)
    {
      if ((VAR_22.defined & VAR_4) != 0)
        {
          FUNC_3 (FUNC_0("can't redefine type for operand"));
          return VAR_0;
        }
      VAR_22.defined |= VAR_4;
      VAR_22.eltype = VAR_23;
    }

  if (FUNC_6 (&VAR_20, '[') == VAR_15)
    {
      if (VAR_17 != VAR_12)
        {
          FUNC_3 (FUNC_0("only D registers may be indexed"));
          return VAR_0;
        }

      if ((VAR_22.defined & VAR_3) != 0)
        {
          FUNC_3 (FUNC_0("can't change index for operand"));
          return VAR_0;
        }

      VAR_22.defined |= VAR_3;

      if (FUNC_6 (&VAR_20, ']') == VAR_15)
        VAR_22.index = VAR_2;
      else
        {
          expressionS VAR_25;

          FUNC_4 (&VAR_25, &VAR_20, VAR_1);

          if (VAR_25.X_op != VAR_6)
            {
              FUNC_3 (FUNC_0("constant expression required"));
              return VAR_0;
            }

          if (FUNC_6 (&VAR_20, ']') == VAR_0)
            return VAR_0;

          VAR_22.index = VAR_25.X_add_number;
        }
    }

  if (VAR_19)
    *VAR_19 = VAR_22;

  if (VAR_18)
    *VAR_18 = VAR_17;

  *VAR_16 = VAR_20;

  return VAR_21->number;
}
