
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* dn_link; int dn_line; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_6__ {TYPE_1__* pcb_list; int pcb_jmpbuf; int pcb_hdl; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static dt_node_t *
FUNC_2(int VAR_3)
{
 dt_node_t *VAR_4 = FUNC_0(VAR_2->pcb_hdl, VAR_3);

 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_2->pcb_jmpbuf, VAR_0);

 VAR_4->dn_line = VAR_1;
 VAR_4->dn_link = VAR_2->pcb_list;
 VAR_2->pcb_list = VAR_4;

 return (VAR_4);
}
