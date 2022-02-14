
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ng_l2cap_p ;
typedef TYPE_2__* ng_l2cap_con_p ;
typedef int bdaddr_p ;
struct TYPE_8__ {int linktype; int cmd_list; scalar_t__ ident; int con_timo; int remote; int con_handle; scalar_t__ encryption; int state; TYPE_1__* l2cap; } ;
struct TYPE_7__ {int con_list; } ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int) ;
 TYPE_2__* FUNC_3 (int,int ,int) ;
 int VAR_5 ;
 int FUNC_4 (int *) ;

ng_l2cap_con_p
FUNC_5(ng_l2cap_p VAR_6, bdaddr_p VAR_7, int VAR_8)
{
 static int VAR_9 = 0x0f00;
 ng_l2cap_con_p VAR_10 = ((void*)0);


 VAR_10 = FUNC_3(sizeof(*VAR_10), VAR_0,
  VAR_1|VAR_2);
 if (VAR_10 == ((void*)0))
  return (((void*)0));

 VAR_10->l2cap = VAR_6;
 VAR_10->state = VAR_3;
 VAR_10->encryption = 0;
 VAR_10->con_handle = VAR_9 ++;
 if (VAR_9 > 0x0fff)
  VAR_9 = 0x0f00;

 FUNC_2(VAR_7, &VAR_10->remote, sizeof(VAR_10->remote));
 VAR_10->linktype = VAR_8;
 FUNC_4(&VAR_10->con_timo);

 VAR_10->ident = VAR_4 - 1;
 FUNC_1(&VAR_10->cmd_list);


 FUNC_0(&VAR_6->con_list, VAR_10, VAR_5);

 return (VAR_10);
}
