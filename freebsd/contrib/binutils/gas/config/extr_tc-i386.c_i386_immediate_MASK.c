
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int symbolS ;
typedef TYPE_2__* segT ;
struct TYPE_16__ {scalar_t__ X_op; int X_add_number; int * X_op_symbol; int * X_add_symbol; } ;
typedef TYPE_3__ expressionS ;
typedef int addressT ;
struct TYPE_17__ {scalar_t__ imm_operands; int* types; int * reloc; TYPE_1__* op; } ;
struct TYPE_15__ {char* name; } ;
struct TYPE_14__ {TYPE_3__* imms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 TYPE_2__* VAR_11 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ VAR_12 ;
 TYPE_2__* VAR_13 ;
 TYPE_2__* VAR_14 ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*) ;
 TYPE_7__ VAR_15 ;
 TYPE_3__* VAR_16 ;
 char* VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_6 (char) ;
 char* FUNC_7 (int *,int *,unsigned int*) ;
 TYPE_2__* VAR_19 ;
 size_t VAR_20 ;
 TYPE_2__* VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_8 (char *VAR_23)
{
  char *VAR_24;
  char *VAR_25;
  segT VAR_26 = 0;
  expressionS *VAR_27;
  unsigned int VAR_28 = ~0U;

  if (VAR_15.imm_operands == VAR_5)
    {
      FUNC_2 (FUNC_1("at most %d immediate operands are allowed"),
       VAR_5);
      return 0;
    }

  VAR_27 = &VAR_16[VAR_15.imm_operands++];
  VAR_15.op[VAR_20].imms = VAR_27;

  if (FUNC_6 (*VAR_23))
    ++VAR_23;

  VAR_24 = VAR_17;
  VAR_17 = VAR_23;

  VAR_25 = FUNC_7 (&VAR_15.reloc[VAR_20], ((void*)0), &VAR_28);
  if (VAR_25)
    VAR_17 = VAR_25;

  VAR_26 = FUNC_4 (VAR_27);

  FUNC_0 ();
  if (*VAR_17)
    FUNC_2 (FUNC_1("junk `%s' after expression"), VAR_17);

  VAR_17 = VAR_24;
  if (VAR_25)
    FUNC_5 (VAR_25);

  if (VAR_27->X_op == VAR_7 || VAR_27->X_op == VAR_8)
    {

      FUNC_2 (FUNC_1("missing or invalid immediate expression `%s' taken as 0"),
       VAR_23);
      VAR_27->X_op = VAR_9;
      VAR_27->X_add_number = 0;
      VAR_27->X_add_symbol = (symbolS *) 0;
      VAR_27->X_op_symbol = (symbolS *) 0;
    }
  else if (VAR_27->X_op == VAR_9)
    {

      VAR_15.types[VAR_20] |= VAR_3;

      if (!VAR_22
   && (VAR_27->X_add_number & ~(((addressT) 2 << 31) - 1)) == 0)
 VAR_27->X_add_number
   = (VAR_27->X_add_number ^ ((addressT) 1 << 31)) - ((addressT) 1 << 31);
    }
  else if (!VAR_18 && VAR_27->X_op == VAR_10)
    {
      FUNC_2 (FUNC_1("illegal immediate register operand %s"), VAR_23);
      return 0;
    }
  else
    {



      VAR_15.types[VAR_20] |= VAR_4 | VAR_0 | VAR_1 | VAR_2 | VAR_3;
      VAR_15.types[VAR_20] &= VAR_28;
    }

  return 1;
}
