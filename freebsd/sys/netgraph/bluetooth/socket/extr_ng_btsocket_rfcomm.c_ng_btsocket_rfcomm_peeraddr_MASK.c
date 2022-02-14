
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_rfcomm {int rfcomm_len; int rfcomm_family; int rfcomm_channel; int rfcomm_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef TYPE_1__* ng_btsocket_rfcomm_pcb_p ;
struct TYPE_3__ {int channel; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (struct socket*) ;
 struct sockaddr* FUNC_2 (struct sockaddr*,int ) ;

int
FUNC_3(struct socket *VAR_4, struct sockaddr **VAR_5)
{
 ng_btsocket_rfcomm_pcb_p VAR_6 = FUNC_1(VAR_4);
 struct sockaddr_rfcomm VAR_7;

 if (VAR_6 == ((void*)0))
  return (VAR_1);

 FUNC_0(&VAR_6->dst, &VAR_7.rfcomm_bdaddr, sizeof(VAR_7.rfcomm_bdaddr));
 VAR_7.rfcomm_channel = VAR_6->channel;
 VAR_7.rfcomm_len = sizeof(VAR_7);
 VAR_7.rfcomm_family = VAR_0;

 *VAR_5 = FUNC_2((struct sockaddr *) &VAR_7, VAR_3);

 return ((*VAR_5 == ((void*)0))? VAR_2 : 0);
}
