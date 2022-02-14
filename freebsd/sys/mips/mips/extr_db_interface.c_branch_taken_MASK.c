
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int register_t ;
typedef scalar_t__ db_addr_t ;
struct TYPE_6__ {TYPE_2__* td_pcb; } ;
struct TYPE_4__ {int fsr; } ;
struct TYPE_5__ {TYPE_1__ pcb_regs; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__,int ,int ) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;

db_addr_t
FUNC_1(int VAR_2, db_addr_t VAR_3)
{
 db_addr_t VAR_4;
 register_t VAR_5;


 VAR_5 = (VAR_0) ? VAR_0->td_pcb->pcb_regs.fsr : 0;
 VAR_4 = (db_addr_t)FUNC_0(VAR_1, VAR_3, VAR_5, 0);
 return (VAR_4);
}
