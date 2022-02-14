
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {scalar_t__ so_type; scalar_t__ so_pcb; } ;
typedef TYPE_2__* ng_btsocket_hci_raw_pcb_p ;
typedef scalar_t__ caddr_t ;
struct TYPE_6__ {int event_mask; } ;
struct TYPE_7__ {int pcb_mtx; TYPE_1__ filter; int flags; struct socket* so; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ,scalar_t__) ;
 TYPE_2__* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_6 (struct thread*,int ) ;
 TYPE_2__* FUNC_7 (struct socket*) ;
 int FUNC_8 (struct socket*,int ,int ) ;

int
FUNC_9(struct socket *VAR_20, int VAR_21, struct thread *VAR_22)
{
 ng_btsocket_hci_raw_pcb_p VAR_23 = FUNC_7(VAR_20);
 int VAR_24 = 0;

 if (VAR_23 != ((void*)0))
  return (VAR_1);

 if (VAR_17 == ((void*)0))
  return (VAR_3);
 if (VAR_21 != VAR_0)
  return (VAR_3);
 if (VAR_20->so_type != VAR_15)
  return (VAR_4);

 VAR_24 = FUNC_8(VAR_20, VAR_11,
    VAR_10);
 if (VAR_24 != 0)
  return (VAR_24);

 VAR_23 = FUNC_2(sizeof(*VAR_23),
  VAR_6, VAR_7|VAR_8);
 if (VAR_23 == ((void*)0))
  return (VAR_2);

 VAR_20->so_pcb = (caddr_t) VAR_23;
 VAR_23->so = VAR_20;

 if (FUNC_6(VAR_22, VAR_14) == 0)
  VAR_23->flags |= VAR_9;






 FUNC_1(VAR_23->filter.event_mask, VAR_12 - 1);
 FUNC_1(VAR_23->filter.event_mask, VAR_13 - 1);

 FUNC_3(&VAR_23->pcb_mtx, "btsocks_hci_raw_pcb_mtx", ((void*)0), VAR_5);

 FUNC_4(&VAR_19);
 FUNC_0(&VAR_18, VAR_23, VAR_16);
 FUNC_5(&VAR_19);

 return (0);
}
