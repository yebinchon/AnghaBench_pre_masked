
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_clobbers_to_add; } ;
struct TYPE_4__ {char* name; int mode; } ;
struct TYPE_6__ {int num_insns; int veclen; int dup; TYPE_2__ insn; int c_test; TYPE_1__ pred; scalar_t__ intval; int code; int mode; } ;
struct decision_test {int type; TYPE_3__ u; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;
 char* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void
FUNC_7 (struct decision_test *VAR_1, int VAR_2,
     enum routine_type VAR_3)
{
  switch (VAR_1->type)
    {
    case 131:
      FUNC_6 ("peep2_current_count >= %d", VAR_1->u.num_insns);
      break;

    case 132:
      FUNC_6 ("GET_MODE (x%d) == %smode", VAR_2, FUNC_0 (VAR_1->u.mode));
      break;

    case 139:
      FUNC_6 ("GET_CODE (x%d) == ", VAR_2);
      FUNC_4 (VAR_1->u.code);
      break;

    case 129:
      FUNC_6 ("XVECLEN (x%d, 0) == %d", VAR_2, VAR_1->u.veclen);
      break;

    case 135:
      FUNC_6 ("XINT (x%d, 0) == %d", VAR_2, (int) VAR_1->u.intval);
      break;

    case 136:
      FUNC_6 ("XINT (x%d, 1) == %d", VAR_2, (int) VAR_1->u.intval);
      break;

    case 134:
    case 133:
      FUNC_6 ("XWINT (x%d, 0) == ", VAR_2);
      FUNC_5 (VAR_1->u.intval);
      break;

    case 138:
      FUNC_6 ("x%d == const_int_rtx[MAX_SAVED_CONST_INT + (%d)]",
       VAR_2, (int) VAR_1->u.intval);
      break;

    case 128:
      FUNC_6 ("XVECLEN (x%d, 0) >= %d", VAR_2, VAR_1->u.veclen);
      break;

    case 137:
      FUNC_6 ("rtx_equal_p (x%d, operands[%d])", VAR_2, VAR_1->u.dup);
      break;

    case 130:
      FUNC_6 ("%s (x%d, %smode)", VAR_1->u.pred.name, VAR_2,
       FUNC_0 (VAR_1->u.pred.mode));
      break;

    case 140:
      FUNC_3 (VAR_1->u.c_test);
      break;

    case 141:
      FUNC_1 (VAR_3 == VAR_0);
      FUNC_1 (VAR_1->u.insn.num_clobbers_to_add);
      FUNC_6 ("pnum_clobbers != NULL");
      break;

    default:
      FUNC_2 ();
    }
}
