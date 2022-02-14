
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
typedef TYPE_3__* ng_btsocket_sco_pcb_p ;
typedef scalar_t__ caddr_t ;
struct TYPE_9__ {int pcb_mtx; int timo; int state; struct socket* so; } ;


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
 scalar_t__ VAR_14 ;
 int FUNC_1 (int *,int) ;
 TYPE_3__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,char*,int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_15 ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 TYPE_3__* FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*,int ,int ) ;

int
FUNC_9(struct socket *VAR_19, int VAR_20, struct thread *VAR_21)
{
 ng_btsocket_sco_pcb_p VAR_22 = FUNC_7(VAR_19);
 int VAR_23;


 if (VAR_16 == ((void*)0))
  return (VAR_3);
 if (VAR_19->so_type != VAR_14)
  return (VAR_4);







 if (VAR_22 != ((void*)0))
  return (VAR_1);


 if ((VAR_19->so_snd.sb_hiwat == 0) || (VAR_19->so_rcv.sb_hiwat == 0)) {
  VAR_23 = FUNC_8(VAR_19, VAR_13,
     VAR_12);
  if (VAR_23 != 0)
   return (VAR_23);
 }


        VAR_22 = FUNC_2(sizeof(*VAR_22),
  VAR_8, VAR_9 | VAR_10);
        if (VAR_22 == ((void*)0))
                return (VAR_2);


 VAR_19->so_pcb = (caddr_t) VAR_22;
 VAR_22->so = VAR_19;
 VAR_22->state = VAR_11;

 FUNC_1(&VAR_22->timo, 1);
 FUNC_4(&VAR_22->pcb_mtx, "btsocks_sco_pcb_mtx", ((void*)0),
  VAR_6|VAR_7);
 if (VAR_21 != ((void*)0))
  FUNC_5(&VAR_18);
 else
  FUNC_3(&VAR_18, VAR_5);

 FUNC_0(&VAR_17, VAR_22, VAR_15);

 if (VAR_21 != ((void*)0))
  FUNC_6(&VAR_18);

        return (0);
}
