
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {TYPE_1__* next; int * child; } ;
struct TYPE_2__ {scalar_t__ type; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct roff_node*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_1(struct roff_node *VAR_4)
{
 FUNC_0(VAR_4);
 if (VAR_4->child == ((void*)0) && VAR_4->next != ((void*)0) &&
     VAR_4->next->type != VAR_2 && !(VAR_4->next->flags & VAR_1))
  VAR_3 &= ~VAR_0;
}
