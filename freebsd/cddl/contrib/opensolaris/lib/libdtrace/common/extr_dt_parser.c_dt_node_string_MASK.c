
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_hdl_t ;
struct TYPE_6__ {char* dn_string; int dn_op; } ;
typedef TYPE_1__ dt_node_t ;
struct TYPE_7__ {int pcb_jmpbuf; int * pcb_hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (int ,int ) ;
 TYPE_2__* VAR_4 ;

dt_node_t *
FUNC_5(char *VAR_5)
{
 dtrace_hdl_t *VAR_6 = VAR_4->pcb_hdl;
 dt_node_t *VAR_7;

 if (VAR_5 == ((void*)0))
  FUNC_4(VAR_4->pcb_jmpbuf, VAR_3);

 VAR_7 = FUNC_2(VAR_1);
 VAR_7->dn_op = VAR_2;
 VAR_7->dn_string = VAR_5;
 FUNC_3(VAR_7, FUNC_0(VAR_6), FUNC_1(VAR_6), VAR_0);

 return (VAR_7);
}
