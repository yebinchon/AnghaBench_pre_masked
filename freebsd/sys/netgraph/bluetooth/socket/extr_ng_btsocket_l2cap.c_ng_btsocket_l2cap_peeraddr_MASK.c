
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_l2cap {int l2cap_len; int l2cap_bdaddr_type; int l2cap_cid; int l2cap_family; int l2cap_psm; int l2cap_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef TYPE_1__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_3__ {int idtype; int dsttype; int psm; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int * VAR_6 ;
 TYPE_1__* FUNC_2 (struct socket*) ;
 struct sockaddr* FUNC_3 (struct sockaddr*,int ) ;

int
FUNC_4(struct socket *VAR_7, struct sockaddr **VAR_8)
{
 ng_btsocket_l2cap_pcb_p VAR_9 = FUNC_2(VAR_7);
 struct sockaddr_l2cap VAR_10;

 if (VAR_9 == ((void*)0))
  return (VAR_1);
 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_9->dst, &VAR_10.l2cap_bdaddr, sizeof(VAR_10.l2cap_bdaddr));
 VAR_10.l2cap_psm = FUNC_1(VAR_9->psm);
 VAR_10.l2cap_len = sizeof(VAR_10);
 VAR_10.l2cap_family = VAR_0;
 switch(VAR_9->idtype){
 case 129:
  VAR_10.l2cap_cid = VAR_4;
  break;
 case 128:
  VAR_10.l2cap_cid = VAR_5;
  break;
 default:
  VAR_10.l2cap_cid = 0;
  break;
 }
 VAR_10.l2cap_bdaddr_type = VAR_9->dsttype;
 *VAR_8 = FUNC_3((struct sockaddr *) &VAR_10, VAR_3);

 return ((*VAR_8 == ((void*)0))? VAR_2 : 0);
}
