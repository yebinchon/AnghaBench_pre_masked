
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct termp {int dummy; } ;
struct roff_node {int * prev; TYPE_1__* parent; TYPE_2__* body; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_5__ {TYPE_3__* child; } ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ tok; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*) ;

__attribute__((used)) static void
FUNC_2(struct termp *VAR_3, const struct roff_node *VAR_4, int VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_3);

 if (VAR_4->body != ((void*)0) && VAR_4->body->child != ((void*)0))
  if (VAR_4->body->child->type == VAR_2)
   return;

 if (VAR_4->parent->type == VAR_1 || VAR_4->parent->tok != VAR_0)
  if (VAR_4->prev == ((void*)0))
   return;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_1(VAR_3);
}
