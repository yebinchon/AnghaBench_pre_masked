
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int tmp ;
struct sockopt {scalar_t__ sopt_level; int sopt_dir; int sopt_name; } ;
struct socket {int dummy; } ;
typedef TYPE_2__* ng_btsocket_sco_pcb_p ;
struct TYPE_5__ {int con_handle; int pcb_mtx; TYPE_1__* rt; int state; } ;
struct TYPE_4__ {int pkt_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_5 ;
 TYPE_2__* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct sockopt*,int*,int) ;

int
FUNC_4(struct socket *VAR_6, struct sockopt *VAR_7)
{
 ng_btsocket_sco_pcb_p VAR_8 = FUNC_2(VAR_6);
        int VAR_9, VAR_10;

 if (VAR_5 == ((void*)0))
  return (VAR_0);
 if (VAR_8 == ((void*)0))
  return (VAR_0);

 if (VAR_7->sopt_level != VAR_4)
  return (0);

 FUNC_0(&VAR_8->pcb_mtx);

 switch (VAR_7->sopt_dir) {
 case 131:
  if (VAR_8->state != VAR_3) {
   VAR_9 = VAR_2;
   break;
  }

  switch (VAR_7->sopt_name) {
  case 128:
   VAR_10 = VAR_8->rt->pkt_size;
   VAR_9 = FUNC_3(VAR_7, &VAR_10, sizeof(VAR_10));
   break;

  case 129:
   VAR_10 = VAR_8->con_handle;
   VAR_9 = FUNC_3(VAR_7, &VAR_10, sizeof(VAR_10));
   break;

  default:
   VAR_9 = VAR_0;
   break;
  }
  break;

 case 130:
  VAR_9 = VAR_1;
  break;

 default:
  VAR_9 = VAR_0;
  break;
 }

 FUNC_1(&VAR_8->pcb_mtx);

 return (VAR_9);
}
