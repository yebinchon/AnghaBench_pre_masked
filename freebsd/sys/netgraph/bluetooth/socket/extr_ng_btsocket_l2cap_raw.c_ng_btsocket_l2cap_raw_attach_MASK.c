
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {scalar_t__ so_type; scalar_t__ so_pcb; } ;
typedef TYPE_1__* ng_btsocket_l2cap_raw_pcb_p ;
typedef scalar_t__ caddr_t ;
struct TYPE_5__ {int pcb_mtx; int flags; struct socket* so; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (struct thread*,int ) ;
 TYPE_1__* FUNC_6 (struct socket*) ;
 int FUNC_7 (struct socket*,int ,int ) ;

int
FUNC_8(struct socket *VAR_17, int VAR_18, struct thread *VAR_19)
{
 ng_btsocket_l2cap_raw_pcb_p VAR_20 = FUNC_6(VAR_17);
 int VAR_21;

 if (VAR_20 != ((void*)0))
  return (VAR_0);

 if (VAR_14 == ((void*)0))
  return (VAR_2);
 if (VAR_17->so_type != VAR_12)
  return (VAR_3);


 VAR_21 = FUNC_7(VAR_17, VAR_10,
   VAR_9);
 if (VAR_21 != 0)
  return (VAR_21);


        VAR_20 = FUNC_1(sizeof(*VAR_20),
  VAR_5, VAR_6|VAR_7);
        if (VAR_20 == ((void*)0))
                return (VAR_1);


 VAR_17->so_pcb = (caddr_t) VAR_20;
 VAR_20->so = VAR_17;

 if (FUNC_5(VAR_19, VAR_11) == 0)
  VAR_20->flags |= VAR_8;

 FUNC_2(&VAR_20->pcb_mtx, "btsocks_l2cap_raw_pcb_mtx", ((void*)0), VAR_4);


 FUNC_3(&VAR_16);
 FUNC_0(&VAR_15, VAR_20, VAR_13);
 FUNC_4(&VAR_16);

        return (0);
}
