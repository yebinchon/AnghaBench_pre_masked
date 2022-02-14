
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sockaddr_sco {int sco_len; int sco_family; int sco_bdaddr; } ;
struct sockaddr {int dummy; } ;
typedef int sa ;
typedef TYPE_1__* ng_btsocket_sco_pcb_p ;
struct TYPE_3__ {int pcb_mtx; int dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_4 ;
 TYPE_1__* FUNC_3 (struct socket*) ;
 struct sockaddr* FUNC_4 (struct sockaddr*,int ) ;

int
FUNC_5(struct socket *VAR_5, struct sockaddr **VAR_6)
{
 ng_btsocket_sco_pcb_p VAR_7 = FUNC_3(VAR_5);
 struct sockaddr_sco VAR_8;

 if (VAR_7 == ((void*)0))
  return (VAR_1);
 if (VAR_4 == ((void*)0))
  return (VAR_1);

 FUNC_1(&VAR_7->pcb_mtx);
 FUNC_0(&VAR_7->dst, &VAR_8.sco_bdaddr, sizeof(VAR_8.sco_bdaddr));
 FUNC_2(&VAR_7->pcb_mtx);

 VAR_8.sco_len = sizeof(VAR_8);
 VAR_8.sco_family = VAR_0;

 *VAR_6 = FUNC_4((struct sockaddr *) &VAR_8, VAR_3);

 return ((*VAR_6 == ((void*)0))? VAR_2 : 0);
}
