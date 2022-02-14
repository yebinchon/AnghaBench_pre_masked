
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff_node {TYPE_1__* next; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct roff_node *VAR_3)
{
 if (VAR_3->next != ((void*)0) && (VAR_3->next->flags & VAR_1) == 0)
  VAR_2 &= ~VAR_0;
}
