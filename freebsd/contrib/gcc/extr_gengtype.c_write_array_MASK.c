
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct write_types_data {int prefix; scalar_t__ param_prefix; } ;
struct walk_type_data {int indent; char** prev_val; char* val; int process_field; int opt; int of; int * param; int bitmap; TYPE_1__* line; struct write_types_data const* cookie; } ;
typedef TYPE_2__* pair_p ;
typedef int outf_p ;
typedef int d ;
struct TYPE_4__ {int file; } ;
struct TYPE_5__ {char* name; int type; int opt; TYPE_1__ line; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct walk_type_data*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,struct walk_type_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6 (outf_p VAR_2, pair_p VAR_3, const struct write_types_data *VAR_4)
{
  struct walk_type_data VAR_5;
  char *VAR_6;

  FUNC_2 (&VAR_5, 0, sizeof (VAR_5));
  VAR_5.of = VAR_2;
  VAR_5.cookie = VAR_4;
  VAR_5.indent = 2;
  VAR_5.line = &VAR_3->line;
  VAR_5.opt = VAR_3->opt;
  VAR_5.bitmap = FUNC_1 (VAR_3->line.file);
  VAR_5.param = ((void*)0);

  VAR_5.prev_val[3] = VAR_6 = FUNC_5 ("&%s", VAR_3->name);

  if (VAR_4->param_prefix)
    {
      FUNC_3 (VAR_2, "static void gt_%sa_%s\n", VAR_4->param_prefix, VAR_3->name);
      FUNC_3 (VAR_2,
       "    (void *, void *, gt_pointer_operator, void *);\n");
      FUNC_3 (VAR_2, "static void gt_%sa_%s (ATTRIBUTE_UNUSED void *this_obj,\n",
        VAR_4->param_prefix, VAR_3->name);
      FUNC_3 (VAR_5.of,
        "      ATTRIBUTE_UNUSED void *x_p,\n"
        "      ATTRIBUTE_UNUSED gt_pointer_operator op,\n"
        "      ATTRIBUTE_UNUSED void * cookie)\n");
      FUNC_3 (VAR_5.of, "{\n");
      VAR_5.prev_val[0] = VAR_5.prev_val[1] = VAR_5.prev_val[2] = VAR_5.val = VAR_3->name;
      VAR_5.process_field = VAR_0;
      FUNC_4 (VAR_3->type, &VAR_5);
      FUNC_3 (VAR_2, "}\n\n");
    }

  VAR_5.opt = VAR_3->opt;
  FUNC_3 (VAR_2, "static void gt_%sa_%s (void *);\n",
    VAR_4->prefix, VAR_3->name);
  FUNC_3 (VAR_2, "static void\ngt_%sa_%s (ATTRIBUTE_UNUSED void *x_p)\n",
    VAR_4->prefix, VAR_3->name);
  FUNC_3 (VAR_2, "{\n");
  VAR_5.prev_val[0] = VAR_5.prev_val[1] = VAR_5.prev_val[2] = VAR_5.val = VAR_3->name;
  VAR_5.process_field = VAR_1;
  FUNC_4 (VAR_3->type, &VAR_5);
  FUNC_0 (VAR_6);
  FUNC_3 (VAR_2, "}\n\n");
}
