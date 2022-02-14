
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int mode; } ;
struct TYPE_4__ {int opno; int intval; int dup; int veclen; int c_test; TYPE_1__ pred; int code; int mode; int num_insns; } ;
struct decision_test {int type; TYPE_2__ u; } ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2 (struct decision_test *VAR_0, struct decision_test *VAR_1)
{
  switch (VAR_0->type)
    {
    case 131:
      return VAR_0->u.num_insns == VAR_1->u.num_insns;

    case 132:
      return VAR_0->u.mode == VAR_1->u.mode;

    case 138:
      return VAR_0->u.code == VAR_1->u.code;

    case 130:
      return (VAR_0->u.pred.mode == VAR_1->u.pred.mode
       && FUNC_1 (VAR_0->u.pred.name, VAR_1->u.pred.name) == 0);

    case 139:
      return FUNC_1 (VAR_0->u.c_test, VAR_1->u.c_test) == 0;

    case 129:
    case 128:
      return VAR_0->u.veclen == VAR_1->u.veclen;

    case 137:
      return VAR_0->u.dup == VAR_1->u.dup;

    case 135:
    case 136:
    case 134:
    case 133:
      return VAR_0->u.intval == VAR_1->u.intval;

    case 140:
      return VAR_0->u.opno == VAR_1->u.opno;

    case 141:

      return 1;

    default:
      FUNC_0 ();
    }
}
