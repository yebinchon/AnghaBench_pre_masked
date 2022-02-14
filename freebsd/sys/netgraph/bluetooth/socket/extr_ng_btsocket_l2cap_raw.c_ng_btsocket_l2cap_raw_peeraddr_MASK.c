
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_l2cap {int l2cap_len; int l2cap_bdaddr_type; scalar_t__ l2cap_cid; int l2cap_family; scalar_t__ l2cap_psm; int l2cap_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef TYPE_1__* ng_btsocket_l2cap_raw_pcb_p ;
struct TYPE_3__ {int pcb_mtx; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_5 ;
 TYPE_1__* FUNC_3 (struct socket*) ;
 struct sockaddr* FUNC_4 (struct sockaddr*,int ) ;

int
FUNC_5(struct socket *VAR_6, struct sockaddr **VAR_7)
{
 ng_btsocket_l2cap_raw_pcb_p VAR_8 = FUNC_3(VAR_6);
 struct sockaddr_l2cap VAR_9;

 if (VAR_8 == ((void*)0))
  return (VAR_2);
 if (VAR_5 == ((void*)0))
  return (VAR_2);

 FUNC_1(&VAR_8->pcb_mtx);
 FUNC_0(&VAR_8->dst, &VAR_9.l2cap_bdaddr, sizeof(VAR_9.l2cap_bdaddr));
 FUNC_2(&VAR_8->pcb_mtx);

 VAR_9.l2cap_psm = 0;
 VAR_9.l2cap_len = sizeof(VAR_9);
 VAR_9.l2cap_family = VAR_0;
 VAR_9.l2cap_cid = 0;
 VAR_9.l2cap_bdaddr_type = VAR_1;

 *VAR_7 = FUNC_4((struct sockaddr *) &VAR_9, VAR_4);

 return ((*VAR_7 == ((void*)0))? VAR_3 : 0);
}
