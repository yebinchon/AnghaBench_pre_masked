
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct roff_node {int type; int flags; struct roff_node const* parent; int tok; int pos; int line; } const roff_node ;
struct roff_man {struct roff_node const* last; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (struct roff_man*,struct roff_node const*) ;
 int FUNC_1 (struct roff_man*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct roff_man *VAR_4, const struct roff_node *VAR_5)
{

 for (;;) {
  FUNC_0(VAR_4, VAR_5);

  if (VAR_4->last == VAR_5) {
   switch (VAR_5->type) {
   case 128:
    FUNC_1(VAR_4, VAR_5->line, VAR_5->pos,
        VAR_5->tok);
    if (VAR_5->tok == VAR_0)
     VAR_4->flags &= ~VAR_3;
    break;
   case 129:
    break;
   default:
    return;
   }
   if ( ! (VAR_5->flags & VAR_1))
    return;
  } else
   VAR_5 = VAR_4->last;

  for (;;) {
   if ((VAR_5 = VAR_5->parent) == ((void*)0))
    return;

   if (VAR_5->type == 129 ||
       VAR_5->type == 128) {
    if (VAR_5->flags & VAR_2)
     break;
    else
     return;
   }
  }
 }
}
