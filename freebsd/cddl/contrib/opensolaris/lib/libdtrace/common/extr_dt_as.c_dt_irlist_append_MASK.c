
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ di_label; scalar_t__ di_instr; struct TYPE_5__* di_next; } ;
typedef TYPE_1__ dt_irnode_t ;
struct TYPE_6__ {int dl_len; TYPE_1__* dl_last; TYPE_1__* dl_list; } ;
typedef TYPE_2__ dt_irlist_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_0(dt_irlist_t *VAR_2, dt_irnode_t *VAR_3)
{
 if (VAR_2->dl_last != ((void*)0))
  VAR_2->dl_last->di_next = VAR_3;
 else
  VAR_2->dl_list = VAR_3;

 VAR_2->dl_last = VAR_3;

 if (VAR_3->di_label == VAR_1 || VAR_3->di_instr != VAR_0)
  VAR_2->dl_len++;
}
