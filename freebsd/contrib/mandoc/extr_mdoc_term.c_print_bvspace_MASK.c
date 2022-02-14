
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct termp {int dummy; } ;
struct roff_node {scalar_t__ tok; scalar_t__ type; int flags; int * child; struct roff_node const* body; struct roff_node* prev; TYPE_3__* norm; struct roff_node* parent; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ comp; } ;
struct TYPE_4__ {scalar_t__ comp; } ;
struct TYPE_6__ {TYPE_2__ Bl; TYPE_1__ Bd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct roff_node const*) ;
 int FUNC_1 (struct termp*) ;
 int FUNC_2 (struct termp*) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_12,
 const struct roff_node *VAR_13,
 const struct roff_node *VAR_14)
{
 const struct roff_node *VAR_15;

 FUNC_0(VAR_14);

 FUNC_1(VAR_12);

 if (VAR_3 == VAR_13->tok && VAR_13->norm->Bd.comp)
  return;
 if (VAR_4 == VAR_13->tok && VAR_13->norm->Bl.comp)
  return;



 VAR_15 = VAR_14;
 while (VAR_15->prev != ((void*)0) &&
     (VAR_15->prev->type == VAR_10 ||
      VAR_15->prev->flags & VAR_8))
  VAR_15 = VAR_15->prev;
 while (VAR_15->prev == ((void*)0)) {
  do {
   VAR_15 = VAR_15->parent;
   if (VAR_15->type == VAR_11)
    return;
  } while (VAR_15->type != VAR_9);
  if (VAR_15->tok == VAR_6 || VAR_15->tok == VAR_7)
   return;
  if (VAR_15->tok == VAR_5 &&
      VAR_15->parent->parent->norm->Bl.type != VAR_2)
   break;
 }



 if (VAR_4 == VAR_13->tok && VAR_0 == VAR_13->norm->Bl.type)
  if (VAR_14->prev && VAR_5 == VAR_14->prev->tok)
   return;



 if (VAR_4 == VAR_13->tok && VAR_1 == VAR_13->norm->Bl.type)
  if (VAR_14->prev && VAR_5 == VAR_14->prev->tok) {
   FUNC_0(VAR_14->prev->body);
   if (((void*)0) == VAR_14->prev->body->child)
    return;
  }

 FUNC_2(VAR_12);
}
