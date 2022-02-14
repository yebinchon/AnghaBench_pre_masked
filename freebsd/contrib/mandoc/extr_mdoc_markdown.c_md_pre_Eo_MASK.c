
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct roff_node {scalar_t__ end; TYPE_4__* parent; TYPE_2__* child; } ;
struct TYPE_8__ {TYPE_3__* tail; TYPE_1__* head; } ;
struct TYPE_7__ {int * child; } ;
struct TYPE_6__ {scalar_t__ end; } ;
struct TYPE_5__ {int * child; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct roff_node *VAR_4)
{
 if (VAR_4->end == VAR_0 &&
     VAR_4->parent->head->child == ((void*)0) &&
     VAR_4->child != ((void*)0) &&
     VAR_4->child->end != VAR_0)
  FUNC_0();
 else if (VAR_4->end != VAR_0 ? VAR_4->child != ((void*)0) :
     VAR_4->parent->head->child != ((void*)0) && (VAR_4->child != ((void*)0) ||
     (VAR_4->parent->tail != ((void*)0) && VAR_4->parent->tail->child != ((void*)0))))
  VAR_3 &= ~(VAR_2 | VAR_1);
 return 1;
}
