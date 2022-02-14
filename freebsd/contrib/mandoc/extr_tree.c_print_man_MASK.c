
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {int type; char* string; size_t tok; int flags; int line; int pos; struct roff_node* next; struct roff_node* child; TYPE_1__* eqn; scalar_t__ span; } ;
struct TYPE_2__ {int first; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char) ;
 char** VAR_4 ;

__attribute__((used)) static void
FUNC_6(const struct roff_node *VAR_5, int VAR_6)
{
 const char *VAR_7, *VAR_8;
 int VAR_9;

 if (VAR_5 == ((void*)0))
  return;

 VAR_8 = VAR_7 = ((void*)0);

 switch (VAR_5->type) {
 case 130:
  VAR_8 = "root";
  break;
 case 133:
  VAR_8 = "elem";
  break;
 case 128:
  VAR_8 = "text";
  break;
 case 134:
  VAR_8 = "comment";
  break;
 case 136:
  VAR_8 = "block";
  break;
 case 131:
  VAR_8 = "head";
  break;
 case 135:
  VAR_8 = "body";
  break;
 case 129:
  break;
 case 132:
  VAR_8 = "eqn";
  break;
 default:
  FUNC_0();
 }

 switch (VAR_5->type) {
 case 128:
 case 134:
  VAR_7 = VAR_5->string;
  break;
 case 133:
 case 136:
 case 131:
 case 135:
  VAR_7 = VAR_4[VAR_5->tok];
  break;
 case 130:
  VAR_7 = "root";
  break;
 case 129:
  break;
 case 132:
  VAR_7 = "EQ";
  break;
 default:
  FUNC_0();
 }

 if (VAR_5->span) {
  FUNC_1(((void*)0) == VAR_7 && ((void*)0) == VAR_8);
  FUNC_3(VAR_5->span, VAR_6);
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
   FUNC_5(' ');
  FUNC_4("%s (%s) ", VAR_7, VAR_8);
  if (VAR_5->flags & VAR_2)
   FUNC_5('*');
  FUNC_4("%d:%d", VAR_5->line, VAR_5->pos + 1);
  if (VAR_5->flags & VAR_0)
   FUNC_5(')');
  if (VAR_5->flags & VAR_1)
   FUNC_5('.');
  if (VAR_5->flags & VAR_3)
   FUNC_4(" NOFILL");
  FUNC_5('\n');
 }

 if (VAR_5->eqn)
  FUNC_2(VAR_5->eqn->first, VAR_6 + 4);
 if (VAR_5->child)
  FUNC_6(VAR_5->child, VAR_6 +
      (VAR_5->type == 136 ? 2 : 4));
 if (VAR_5->next)
  FUNC_6(VAR_5->next, VAR_6);
}
