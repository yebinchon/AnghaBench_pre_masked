
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int node_p ;
typedef TYPE_1__* ng_hci_unit_p ;
struct TYPE_4__ {int link_policy_mask; int packet_mask; int role_switch; int neighbors; int con_list; int cmdq; int cmd_timo; int buffer; int debug; int node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_1__*) ;
 TYPE_1__* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(node_p VAR_5)
{
 ng_hci_unit_p VAR_6 = ((void*)0);

 VAR_6 = FUNC_7(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);

 VAR_6->node = VAR_5;
 VAR_6->debug = VAR_4;

 VAR_6->link_policy_mask = 0xffff;
 VAR_6->packet_mask = 0xffff;
 VAR_6->role_switch = 1;
 FUNC_3(VAR_6->buffer, 1);
 FUNC_2(VAR_6->buffer, 1, 17, 1);
 FUNC_4(VAR_6->buffer, 1, 10, 1);


 FUNC_8(&VAR_6->cmd_timo);
 FUNC_1(&VAR_6->cmdq, VAR_3);


 FUNC_0(&VAR_6->con_list);
 FUNC_0(&VAR_6->neighbors);






 FUNC_5(VAR_5);
 FUNC_6(VAR_5, VAR_6);

 return (0);
}
