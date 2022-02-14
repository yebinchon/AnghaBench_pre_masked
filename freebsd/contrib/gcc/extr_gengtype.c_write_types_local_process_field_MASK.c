
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* type_p ;
struct walk_type_data {int val; int indent; int of; int * prev_val; } ;
struct TYPE_3__ {int kind; } ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2 (type_p VAR_0, const struct walk_type_data *VAR_1)
{
  switch (VAR_0->kind)
    {
    case 132:
    case 129:
    case 128:
    case 134:
    case 133:
    case 130:
      FUNC_1 (VAR_1->of, "%*sif ((void *)(%s) == this_obj)\n", VAR_1->indent, "",
        VAR_1->prev_val[3]);
      FUNC_1 (VAR_1->of, "%*s  op (&(%s), cookie);\n", VAR_1->indent, "", VAR_1->val);
      break;

    case 131:
      break;

    default:
      FUNC_0 ();
    }
}
