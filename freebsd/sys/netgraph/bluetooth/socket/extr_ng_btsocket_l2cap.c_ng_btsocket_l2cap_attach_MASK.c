
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct thread {int dummy; } ;
struct TYPE_9__ {scalar_t__ sb_hiwat; } ;
struct TYPE_8__ {scalar_t__ sb_hiwat; } ;
struct socket {scalar_t__ so_type; scalar_t__ so_pcb; TYPE_2__ so_rcv; TYPE_1__ so_snd; } ;
typedef TYPE_3__* ng_btsocket_l2cap_pcb_p ;
typedef scalar_t__ caddr_t ;
struct TYPE_11__ {int flags; int token_rate; int token_bucket_size; int peak_bandwidth; int latency; int delay_variation; int service_type; } ;
struct TYPE_10__ {scalar_t__ token; int pcb_mtx; int timo; int link_timo; int flush_timo; int oflow; TYPE_6__ iflow; int omtu; int imtu; int state; struct socket* so; } ;


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
 int FUNC_1 (TYPE_6__*,int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 TYPE_3__* FUNC_3 (int,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,char*,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_19 ;
 int * VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 TYPE_3__* FUNC_8 (struct socket*) ;
 int FUNC_9 (struct socket*,int ,int ) ;

int
FUNC_10(struct socket *VAR_23, int VAR_24, struct thread *VAR_25)
{
 static u_int32_t VAR_26 = 0;
 ng_btsocket_l2cap_pcb_p VAR_27 = FUNC_8(VAR_23);
 int VAR_28;


 if (VAR_20 == ((void*)0))
  return (VAR_3);
 if (VAR_23->so_type != VAR_18)
  return (VAR_4);







 if (VAR_27 != ((void*)0))
  return (VAR_1);


 if ((VAR_23->so_snd.sb_hiwat == 0) || (VAR_23->so_rcv.sb_hiwat == 0)) {
  VAR_28 = FUNC_9(VAR_23, VAR_13,
     VAR_12);
  if (VAR_28 != 0)
   return (VAR_28);
 }


        VAR_27 = FUNC_3(sizeof(*VAR_27),
  VAR_8, VAR_9 | VAR_10);
        if (VAR_27 == ((void*)0))
                return (VAR_2);


 VAR_23->so_pcb = (caddr_t) VAR_27;
 VAR_27->so = VAR_23;
 VAR_27->state = VAR_11;


 VAR_27->imtu = VAR_27->omtu = VAR_17;


 VAR_27->iflow.flags = 0x0;
 VAR_27->iflow.service_type = VAR_14;
 VAR_27->iflow.token_rate = 0xffffffff;
 VAR_27->iflow.token_bucket_size = 0xffffffff;
 VAR_27->iflow.peak_bandwidth = 0x00000000;
 VAR_27->iflow.latency = 0xffffffff;
 VAR_27->iflow.delay_variation = 0xffffffff;

 FUNC_1(&VAR_27->iflow, &VAR_27->oflow, sizeof(VAR_27->oflow));

 VAR_27->flush_timo = VAR_15;
 VAR_27->link_timo = VAR_16;
 FUNC_5(&VAR_27->pcb_mtx, "btsocks_l2cap_pcb_mtx", ((void*)0),
  VAR_6|VAR_7);
 FUNC_2(&VAR_27->timo, &VAR_27->pcb_mtx, 0);
 if (VAR_25 != ((void*)0))
  FUNC_6(&VAR_22);
 else
  FUNC_4(&VAR_22, VAR_5);


 if (++ VAR_26 == 0)
  VAR_26 ++;

 VAR_27->token = VAR_26;

 FUNC_0(&VAR_21, VAR_27, VAR_19);

 if (VAR_25 != ((void*)0))
  FUNC_7(&VAR_22);

        return (0);
}
