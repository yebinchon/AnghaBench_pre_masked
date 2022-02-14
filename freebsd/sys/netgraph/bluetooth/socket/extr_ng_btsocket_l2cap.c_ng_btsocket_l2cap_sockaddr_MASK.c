
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_l2cap {int l2cap_len; int l2cap_bdaddr_type; scalar_t__ l2cap_cid; int l2cap_family; int l2cap_psm; int l2cap_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef TYPE_1__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_3__ {int srctype; int psm; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int * VAR_4 ;
 TYPE_1__* FUNC_2 (struct socket*) ;
 struct sockaddr* FUNC_3 (struct sockaddr*,int ) ;

int
FUNC_4(struct socket *VAR_5, struct sockaddr **VAR_6)
{
 ng_btsocket_l2cap_pcb_p VAR_7 = FUNC_2(VAR_5);
 struct sockaddr_l2cap VAR_8;

 if (VAR_7 == ((void*)0))
  return (VAR_1);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_7->src, &VAR_8.l2cap_bdaddr, sizeof(VAR_8.l2cap_bdaddr));
 VAR_8.l2cap_psm = FUNC_1(VAR_7->psm);
 VAR_8.l2cap_len = sizeof(VAR_8);
 VAR_8.l2cap_family = VAR_0;
 VAR_8.l2cap_cid = 0;
 VAR_8.l2cap_bdaddr_type = VAR_7->srctype;

 *VAR_6 = FUNC_3((struct sockaddr *) &VAR_8, VAR_3);

 return ((*VAR_6 == ((void*)0))? VAR_2 : 0);
}
