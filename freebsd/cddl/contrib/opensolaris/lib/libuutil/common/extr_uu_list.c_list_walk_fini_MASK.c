
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * ulw_next_result; int * ulw_list; TYPE_2__* ulw_prev; TYPE_1__* ulw_next; } ;
typedef TYPE_3__ uu_list_walk_t ;
struct TYPE_6__ {TYPE_1__* ulw_next; } ;
struct TYPE_5__ {TYPE_2__* ulw_prev; } ;



__attribute__((used)) static void
FUNC_0(uu_list_walk_t *VAR_0)
{

 if (VAR_0->ulw_next != ((void*)0)) {
  VAR_0->ulw_next->ulw_prev = VAR_0->ulw_prev;
  VAR_0->ulw_prev->ulw_next = VAR_0->ulw_next;
  VAR_0->ulw_next = ((void*)0);
  VAR_0->ulw_prev = ((void*)0);
 }
 VAR_0->ulw_list = ((void*)0);
 VAR_0->ulw_next_result = ((void*)0);
}
