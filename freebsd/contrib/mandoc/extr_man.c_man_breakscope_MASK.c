
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {scalar_t__ type; int tok; int pos; int line; struct roff_node* parent; } ;
struct roff_man {int flags; struct roff_node* last; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (struct roff_man*,struct roff_node*) ;
 int FUNC_3 (int ,int ,int ,char*,int ,int ) ;
 int FUNC_4 (struct roff_man*,int ,int ,size_t) ;
 int * VAR_16 ;
 int FUNC_5 (struct roff_man*,struct roff_node*) ;

void
FUNC_6(struct roff_man *VAR_17, int VAR_18)
{
 struct roff_node *VAR_19;







 if (VAR_17->flags & VAR_3 && (VAR_18 < VAR_8 ||
     (FUNC_1(VAR_18)->flags & VAR_5) == 0)) {
  VAR_19 = VAR_17->last;
  if (VAR_19->type == VAR_12)
   VAR_19 = VAR_19->parent;
  if (VAR_19->tok < VAR_8 ||
      (FUNC_1(VAR_19->tok)->flags & (VAR_5 | VAR_4))
       == VAR_5)
   VAR_19 = VAR_19->parent;

  FUNC_3(VAR_0, VAR_19->line, VAR_19->pos,
      "%s breaks %s", VAR_16[VAR_18], VAR_16[VAR_19->tok]);

  FUNC_5(VAR_17, VAR_19);
  VAR_17->flags &= ~VAR_3;
 }






 if (VAR_17->flags & VAR_1 &&
     (VAR_18 == VAR_15 || VAR_18 == VAR_14) &&
     (VAR_17->last->tok == VAR_6 || VAR_17->last->tok == VAR_7)) {
  VAR_19 = VAR_17->last;
  FUNC_2(VAR_17, VAR_19);
  FUNC_4(VAR_17, VAR_19->line, VAR_19->pos, VAR_19->tok);
  VAR_17->flags &= ~(VAR_1 | VAR_13);
 }







 if (VAR_17->flags & VAR_1 && VAR_18 != VAR_15 && VAR_18 != VAR_14 &&
     (VAR_18 < VAR_8 || FUNC_1(VAR_18)->flags & VAR_9)) {
  VAR_19 = VAR_17->last;
  if (VAR_19->type == VAR_12)
   VAR_19 = VAR_19->parent;
  if (VAR_19->tok < VAR_8 ||
      (FUNC_1(VAR_19->tok)->flags & VAR_9) == 0)
   VAR_19 = VAR_19->parent;

  FUNC_0(VAR_19->type == VAR_11);
  VAR_19 = VAR_19->parent;
  FUNC_0(VAR_19->type == VAR_10);
  FUNC_0(FUNC_1(VAR_19->tok)->flags & VAR_2);

  FUNC_3(VAR_0, VAR_19->line, VAR_19->pos,
      "%s breaks %s", VAR_16[VAR_18], VAR_16[VAR_19->tok]);

  FUNC_5(VAR_17, VAR_19);
  VAR_17->flags &= ~(VAR_1 | VAR_13);
 }
}
