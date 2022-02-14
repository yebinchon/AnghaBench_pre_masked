
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct thread {int dummy; } ;
struct TYPE_8__ {scalar_t__ sb_hiwat; } ;
struct TYPE_7__ {scalar_t__ sb_hiwat; } ;
struct socket {scalar_t__ so_type; scalar_t__ so_pcb; TYPE_2__ so_rcv; TYPE_1__ so_snd; } ;
typedef TYPE_3__* ng_btsocket_rfcomm_pcb_p ;
typedef scalar_t__ caddr_t ;
struct TYPE_9__ {int lmodem; int rmodem; int pcb_mtx; int timo; int rx_cred; scalar_t__ tx_cred; int mtu; int flags; int state; struct socket* so; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int *,int *,int ) ;
 TYPE_3__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_3__* FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*,int ,int ) ;

int
FUNC_8(struct socket *VAR_22, int VAR_23, struct thread *VAR_24)
{
 ng_btsocket_rfcomm_pcb_p VAR_25 = FUNC_6(VAR_22);
 int VAR_26;


 if (VAR_22->so_type != VAR_18)
  return (VAR_4);







 if (VAR_25 != ((void*)0))
  return (VAR_1);


 if ((VAR_22->so_snd.sb_hiwat == 0) || (VAR_22->so_rcv.sb_hiwat == 0)) {
  VAR_26 = FUNC_7(VAR_22, VAR_12,
     VAR_11);
  if (VAR_26 != 0)
   return (VAR_26);
 }


        VAR_25 = FUNC_2(sizeof(*VAR_25),
  VAR_6, VAR_7 | VAR_8);
        if (VAR_25 == ((void*)0))
                return (VAR_2);


 VAR_22->so_pcb = (caddr_t) VAR_25;
 VAR_25->so = VAR_22;


 VAR_25->state = VAR_10;
 VAR_25->flags = VAR_9;

 VAR_25->lmodem =
 VAR_25->rmodem = (VAR_16 | VAR_17 | VAR_15);

 VAR_25->mtu = VAR_14;
 VAR_25->tx_cred = 0;
 VAR_25->rx_cred = VAR_13;

 FUNC_3(&VAR_25->pcb_mtx, "btsocks_rfcomm_pcb_mtx", ((void*)0), VAR_5);
 FUNC_1(&VAR_25->timo, &VAR_25->pcb_mtx, 0);


 FUNC_4(&VAR_21);
 FUNC_0(&VAR_20, VAR_25, VAR_19);
 FUNC_5(&VAR_21);

        return (0);
}
