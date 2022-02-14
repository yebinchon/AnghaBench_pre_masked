
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rr_linked_rcount; } ;
typedef TYPE_1__ rrwlock_t ;
struct TYPE_7__ {TYPE_1__* rn_rrl; struct TYPE_7__* rn_next; } ;
typedef TYPE_2__ rrw_node_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static rrw_node_t *
FUNC_2(rrwlock_t *VAR_1)
{
 rrw_node_t *VAR_2;

 if (FUNC_1(&VAR_1->rr_linked_rcount) == 0)
  return (((void*)0));

 for (VAR_2 = FUNC_0(VAR_0); VAR_2 != ((void*)0); VAR_2 = VAR_2->rn_next) {
  if (VAR_2->rn_rrl == VAR_1)
   return (VAR_2);
 }
 return (((void*)0));
}
