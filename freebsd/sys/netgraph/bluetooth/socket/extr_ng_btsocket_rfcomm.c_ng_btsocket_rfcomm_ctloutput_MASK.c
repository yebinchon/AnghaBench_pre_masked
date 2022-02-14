
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sockopt {scalar_t__ sopt_level; int sopt_dir; int sopt_name; } ;
struct socket {int dummy; } ;
struct ng_btsocket_rfcomm_fc_info {int cfc; int reserved; int rx_cred; int tx_cred; int rmodem; int lmodem; } ;
typedef TYPE_1__* ng_btsocket_rfcomm_pcb_p ;
typedef int fcinfo ;
struct TYPE_3__ {int flags; int pcb_mtx; int rx_cred; int tx_cred; int rmodem; int lmodem; struct ng_btsocket_rfcomm_fc_info mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct sockopt*,struct ng_btsocket_rfcomm_fc_info*,int) ;

int
FUNC_4(struct socket *VAR_4, struct sockopt *VAR_5)
{
 ng_btsocket_rfcomm_pcb_p VAR_6 = FUNC_2(VAR_4);
 struct ng_btsocket_rfcomm_fc_info VAR_7;
 int VAR_8 = 0;

 if (VAR_6 == ((void*)0))
  return (VAR_0);
 if (VAR_5->sopt_level != VAR_3)
  return (0);

 FUNC_0(&VAR_6->pcb_mtx);

 switch (VAR_5->sopt_dir) {
 case 131:
  switch (VAR_5->sopt_name) {
  case 128:
   VAR_8 = FUNC_3(VAR_5, &VAR_6->mtu, sizeof(VAR_6->mtu));
   break;

  case 129:
   VAR_7.lmodem = VAR_6->lmodem;
   VAR_7.rmodem = VAR_6->rmodem;
   VAR_7.tx_cred = VAR_6->tx_cred;
   VAR_7.rx_cred = VAR_6->rx_cred;
   VAR_7.cfc = (VAR_6->flags & VAR_2)?
    1 : 0;
   VAR_7.reserved = 0;

   VAR_8 = FUNC_3(VAR_5, &VAR_7, sizeof(VAR_7));
   break;

  default:
   VAR_8 = VAR_1;
   break;
  }
  break;

 case 130:
  switch (VAR_5->sopt_name) {
  default:
   VAR_8 = VAR_1;
   break;
  }
  break;

 default:
  VAR_8 = VAR_0;
  break;
 }

 FUNC_1(&VAR_6->pcb_mtx);

 return (VAR_8);
}
