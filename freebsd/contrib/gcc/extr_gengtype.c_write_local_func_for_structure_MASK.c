
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_13__ ;


typedef TYPE_7__* type_p ;
struct walk_type_data {char** prev_val; char* val; int fn_wants_lvalue; int indent; int of; TYPE_7__** param; int bitmap; TYPE_4__* line; int opt; int process_field; } ;
typedef int d ;
struct TYPE_18__ {char* file; } ;
struct TYPE_19__ {int tag; int bitmap; TYPE_4__ line; int opt; } ;
struct TYPE_20__ {TYPE_5__ s; TYPE_13__* p; } ;
struct TYPE_21__ {scalar_t__ kind; TYPE_6__ u; } ;
struct TYPE_15__ {char* file; } ;
struct TYPE_16__ {TYPE_1__ line; } ;
struct TYPE_17__ {TYPE_2__ s; } ;
struct TYPE_14__ {TYPE_3__ u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_13__*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (struct walk_type_data*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,struct walk_type_data*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6 (type_p VAR_4, type_p VAR_5, type_p *VAR_6)
{
  const char *VAR_7 = VAR_5->u.s.line.file;
  int VAR_8;
  struct walk_type_data VAR_9;


  for (VAR_8 = VAR_0 - 1; VAR_8 >= 0; VAR_8--)
    if (VAR_6 && VAR_6[VAR_8] && VAR_6[VAR_8]->kind == VAR_1
 && FUNC_0 (VAR_6[VAR_8]->u.p))
      VAR_7 = VAR_6[VAR_8]->u.p->u.s.line.file;

  FUNC_2 (&VAR_9, 0, sizeof (VAR_9));
  VAR_9.of = FUNC_1 (VAR_7);

  VAR_9.process_field = VAR_3;
  VAR_9.opt = VAR_5->u.s.opt;
  VAR_9.line = &VAR_5->u.s.line;
  VAR_9.bitmap = VAR_5->u.s.bitmap;
  VAR_9.param = VAR_6;
  VAR_9.prev_val[0] = VAR_9.prev_val[2] = "*x";
  VAR_9.prev_val[1] = "not valid postage";
  VAR_9.prev_val[3] = "x";
  VAR_9.val = "(*x)";
  VAR_9.fn_wants_lvalue = 1;

  FUNC_3 (VAR_9.of, "\n");
  FUNC_3 (VAR_9.of, "void\n");
  FUNC_3 (VAR_9.of, "gt_pch_p_");
  FUNC_4 (VAR_9.of, VAR_4);
  FUNC_3 (VAR_9.of, " (ATTRIBUTE_UNUSED void *this_obj,\n"
    "\tvoid *x_p,\n"
    "\tATTRIBUTE_UNUSED gt_pointer_operator op,\n"
    "\tATTRIBUTE_UNUSED void *cookie)\n");
  FUNC_3 (VAR_9.of, "{\n");
  FUNC_3 (VAR_9.of, "  %s %s * const x ATTRIBUTE_UNUSED = (%s %s *)x_p;\n",
    VAR_5->kind == VAR_2 ? "union" : "struct", VAR_5->u.s.tag,
    VAR_5->kind == VAR_2 ? "union" : "struct", VAR_5->u.s.tag);
  VAR_9.indent = 2;
  FUNC_5 (VAR_5, &VAR_9);
  FUNC_3 (VAR_9.of, "}\n");
}
