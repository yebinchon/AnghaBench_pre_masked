
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ di_gen; int di_flags; } ;
typedef TYPE_2__ dt_ident_t ;
struct TYPE_7__ {TYPE_1__* pcb_hdl; } ;
struct TYPE_5__ {scalar_t__ dt_gen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;

int
FUNC_0(const dt_ident_t *VAR_4)
{
 return (VAR_4->di_gen == VAR_3->pcb_hdl->dt_gen &&
     (VAR_4->di_flags & (VAR_2|VAR_1|VAR_0)) == 0);
}
