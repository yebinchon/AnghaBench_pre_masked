
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* di_next; } ;
typedef TYPE_1__ dt_irnode_t ;
struct TYPE_6__ {TYPE_1__* dl_list; } ;
typedef TYPE_2__ dt_irlist_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(dt_irlist_t *VAR_0)
{
 dt_irnode_t *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->dl_list; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->di_next;
  FUNC_0(VAR_1);
 }
}
