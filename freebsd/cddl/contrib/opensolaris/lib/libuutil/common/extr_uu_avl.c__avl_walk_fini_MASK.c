
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * uaw_next_result; int * uaw_avl; TYPE_2__* uaw_prev; TYPE_1__* uaw_next; } ;
typedef TYPE_3__ uu_avl_walk_t ;
struct TYPE_6__ {TYPE_1__* uaw_next; } ;
struct TYPE_5__ {TYPE_2__* uaw_prev; } ;



__attribute__((used)) static void
FUNC_0(uu_avl_walk_t *VAR_0)
{
 if (VAR_0->uaw_next != ((void*)0)) {
  VAR_0->uaw_next->uaw_prev = VAR_0->uaw_prev;
  VAR_0->uaw_prev->uaw_next = VAR_0->uaw_next;
  VAR_0->uaw_next = ((void*)0);
  VAR_0->uaw_prev = ((void*)0);
 }
 VAR_0->uaw_avl = ((void*)0);
 VAR_0->uaw_next_result = ((void*)0);
}
