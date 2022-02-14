
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int v ;
struct sockopt {scalar_t__ sopt_level; int sopt_dir; int sopt_name; } ;
struct socket {int dummy; } ;
struct TYPE_5__ {int mtu; int flush_timo; int encryption; int flow; } ;
typedef TYPE_1__ ng_l2cap_cfg_opt_val_t ;
typedef TYPE_2__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_6__ {int imtu; int omtu; int iflow; int oflow; int flush_timo; int need_encrypt; int pcb_mtx; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * VAR_7 ;
 TYPE_2__* FUNC_3 (struct socket*) ;
 int FUNC_4 (struct sockopt*,TYPE_1__*,int,int) ;
 int FUNC_5 (struct sockopt*,int*,int) ;

int
FUNC_6(struct socket *VAR_8, struct sockopt *VAR_9)
{
 ng_btsocket_l2cap_pcb_p VAR_10 = FUNC_3(VAR_8);
 int VAR_11 = 0;
 ng_l2cap_cfg_opt_val_t VAR_12;

 if (VAR_10 == ((void*)0))
  return (VAR_1);
 if (VAR_7 == ((void*)0))
  return (VAR_1);

 if (VAR_9->sopt_level != VAR_6)
  return (0);

 FUNC_1(&VAR_10->pcb_mtx);

 switch (VAR_9->sopt_dir) {
 case 135:
  switch (VAR_9->sopt_name) {
  case 130:
   VAR_11 = FUNC_5(VAR_9, &VAR_10->imtu,
      sizeof(VAR_10->imtu));
   break;

  case 128:
   VAR_11 = FUNC_5(VAR_9, &VAR_10->omtu,
      sizeof(VAR_10->omtu));
   break;

  case 131:
   VAR_11 = FUNC_5(VAR_9, &VAR_10->iflow,
      sizeof(VAR_10->iflow));
   break;

  case 129:
   VAR_11 = FUNC_5(VAR_9, &VAR_10->oflow,
      sizeof(VAR_10->oflow));
   break;

  case 132:
   VAR_11 = FUNC_5(VAR_9, &VAR_10->flush_timo,
      sizeof(VAR_10->flush_timo));
   break;
  case 133:
   VAR_11 = FUNC_5(VAR_9, &VAR_10->need_encrypt,
      sizeof(VAR_10->need_encrypt));
   break;


  default:
   VAR_11 = VAR_2;
   break;
  }
  break;

 case 134:
  if (VAR_10->state != VAR_3) {
   VAR_11 = VAR_0;
   break;
  }

  switch (VAR_9->sopt_name) {
  case 130:
   VAR_11 = FUNC_4(VAR_9, &VAR_12, sizeof(VAR_12), sizeof(VAR_12.mtu));
   if (VAR_11 == 0)
    VAR_10->imtu = VAR_12.mtu;
   break;

  case 129:
   VAR_11 = FUNC_4(VAR_9, &VAR_12, sizeof(VAR_12),sizeof(VAR_12.flow));
   if (VAR_11 == 0)
    FUNC_0(&VAR_12.flow, &VAR_10->oflow, sizeof(VAR_10->oflow));
   break;

  case 132:
   VAR_11 = FUNC_4(VAR_9, &VAR_12, sizeof(VAR_12),
      sizeof(VAR_12.flush_timo));
   if (VAR_11 == 0)
    VAR_10->flush_timo = VAR_12.flush_timo;
   break;
  case 133:
   if((VAR_10->state != VAR_4) &&
      (VAR_10->state != VAR_5)){
    VAR_11 = FUNC_4(VAR_9, &VAR_12, sizeof(VAR_12),
          sizeof(VAR_12.encryption));
    if(VAR_11 == 0)
     VAR_10->need_encrypt = (VAR_12.encryption)?1:0;
   }else{
    VAR_11 = VAR_1;
   }
   break;
  default:
   VAR_11 = VAR_2;
   break;
  }
  break;

 default:
  VAR_11 = VAR_1;
  break;
 }

 FUNC_2(&VAR_10->pcb_mtx);

 return (VAR_11);
}
