
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct roff_node {scalar_t__ end; TYPE_2__* parent; int * child; } ;
struct TYPE_6__ {int * child; } ;
struct TYPE_5__ {TYPE_3__* tail; TYPE_1__* head; } ;
struct TYPE_4__ {int * child; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct roff_node *VAR_3)
{
 if (VAR_3->end != VAR_0) {
  VAR_2 |= VAR_1;
  return;
 }

 if (VAR_3->child == ((void*)0) && VAR_3->parent->head->child == ((void*)0))
  return;

 if (VAR_3->parent->tail != ((void*)0) && VAR_3->parent->tail->child != ((void*)0))
  VAR_2 &= ~VAR_1;
        else
  VAR_2 |= VAR_1;
}
