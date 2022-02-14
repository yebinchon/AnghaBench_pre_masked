
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct roff_node {int type; char* string; size_t tok; int flags; int line; int pos; struct roff_node* next; struct roff_node* child; TYPE_2__* eqn; scalar_t__ span; TYPE_1__* args; int end; } ;
struct mdoc_argv {size_t arg; scalar_t__ sz; char** value; } ;
struct TYPE_4__ {int first; } ;
struct TYPE_3__ {size_t argc; struct mdoc_argv* argv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 char** VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;
 char** VAR_9 ;

__attribute__((used)) static void
FUNC_6(const struct roff_node *VAR_10, int VAR_11)
{
 const char *VAR_12, *VAR_13;
 int VAR_14, VAR_15;
 size_t VAR_16;
 struct mdoc_argv *VAR_17;

 if (VAR_10 == ((void*)0))
  return;

 VAR_17 = ((void*)0);
 VAR_16 = 0;
 VAR_13 = VAR_12 = ((void*)0);

 switch (VAR_10->type) {
 case 131:
  VAR_13 = "root";
  break;
 case 137:
  VAR_13 = "block";
  break;
 case 132:
  VAR_13 = "head";
  break;
 case 136:
  if (VAR_10->end)
   VAR_13 = "body-end";
  else
   VAR_13 = "body";
  break;
 case 130:
  VAR_13 = "tail";
  break;
 case 134:
  VAR_13 = "elem";
  break;
 case 128:
  VAR_13 = "text";
  break;
 case 135:
  VAR_13 = "comment";
  break;
 case 129:
  break;
 case 133:
  VAR_13 = "eqn";
  break;
 default:
  FUNC_0();
 }

 switch (VAR_10->type) {
 case 128:
 case 135:
  VAR_12 = VAR_10->string;
  break;
 case 136:
  VAR_12 = VAR_9[VAR_10->tok];
  break;
 case 132:
  VAR_12 = VAR_9[VAR_10->tok];
  break;
 case 130:
  VAR_12 = VAR_9[VAR_10->tok];
  break;
 case 134:
  VAR_12 = VAR_9[VAR_10->tok];
  if (VAR_10->args) {
   VAR_17 = VAR_10->args->argv;
   VAR_16 = VAR_10->args->argc;
  }
  break;
 case 137:
  VAR_12 = VAR_9[VAR_10->tok];
  if (VAR_10->args) {
   VAR_17 = VAR_10->args->argv;
   VAR_16 = VAR_10->args->argc;
  }
  break;
 case 129:
  break;
 case 133:
  VAR_12 = "EQ";
  break;
 case 131:
  VAR_12 = "root";
  break;
 default:
  FUNC_0();
 }

 if (VAR_10->span) {
  FUNC_1(((void*)0) == VAR_12 && ((void*)0) == VAR_13);
  FUNC_3(VAR_10->span, VAR_11);
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_11; VAR_14++)
   FUNC_5(' ');

  FUNC_4("%s (%s)", VAR_12, VAR_13);

  for (VAR_14 = 0; VAR_14 < (int)VAR_16; VAR_14++) {
   FUNC_4(" -%s", VAR_8[VAR_17[VAR_14].arg]);
   if (VAR_17[VAR_14].sz > 0)
    FUNC_4(" [");
   for (VAR_15 = 0; VAR_15 < (int)VAR_17[VAR_14].sz; VAR_15++)
    FUNC_4(" [%s]", VAR_17[VAR_14].value[VAR_15]);
   if (VAR_17[VAR_14].sz > 0)
    FUNC_4(" ]");
  }

  FUNC_5(' ');
  if (VAR_10->flags & VAR_2)
   FUNC_5('(');
  if (VAR_10->flags & VAR_4)
   FUNC_5('*');
  FUNC_4("%d:%d", VAR_10->line, VAR_10->pos + 1);
  if (VAR_10->flags & VAR_1)
   FUNC_5(')');
  if (VAR_10->flags & VAR_3)
   FUNC_5('.');
  if (VAR_10->flags & VAR_0)
   FUNC_4(" BROKEN");
  if (VAR_10->flags & VAR_5)
   FUNC_4(" NOFILL");
  if (VAR_10->flags & VAR_7)
   FUNC_4(" NOSRC");
  if (VAR_10->flags & VAR_6)
   FUNC_4(" NOPRT");
  FUNC_5('\n');
 }

 if (VAR_10->eqn)
  FUNC_2(VAR_10->eqn->first, VAR_11 + 4);
 if (VAR_10->child)
  FUNC_6(VAR_10->child, VAR_11 +
      (VAR_10->type == 137 ? 2 : 4));
 if (VAR_10->next)
  FUNC_6(VAR_10->next, VAR_11);
}
