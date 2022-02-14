
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {scalar_t__ tok; scalar_t__ type; int flags; struct roff_node* parent; int * child; } ;
struct roff_man {struct roff_node* last; } ;
typedef enum roff_tok { ____Placeholder_roff_tok } roff_tok ;
struct TYPE_2__ {scalar_t__ fp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (struct roff_man*,struct roff_node*) ;

__attribute__((used)) static void
FUNC_2(struct roff_man *VAR_10, enum roff_tok VAR_11)
{
 struct roff_node *VAR_12;



 VAR_12 = VAR_10->last;
 if (VAR_11 == VAR_3 && VAR_12->child == ((void*)0) &&
     (VAR_12->tok == VAR_1 || VAR_12->tok == VAR_2 || VAR_12->tok == VAR_0))
  return;

 for (;;) {
  if (VAR_12->type == VAR_8)
   return;
  if (VAR_12->flags & VAR_6) {
   VAR_12 = VAR_12->parent;
   continue;
  }
  if (VAR_12->type != VAR_7) {
   if (VAR_12->parent->type == VAR_8) {
    FUNC_1(VAR_10, VAR_12);
    return;
   } else {
    VAR_12 = VAR_12->parent;
    continue;
   }
  }
  if (VAR_11 != VAR_4 && (VAR_12->tok == VAR_4 ||
      (VAR_11 != VAR_5 && (VAR_12->tok == VAR_5 ||
       FUNC_0(VAR_12->tok)->fp == VAR_9))))
   return;
  FUNC_1(VAR_10, VAR_12);
  VAR_12 = VAR_10->last;
 }
}
