
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct socket {int * so_pcb; } ;
typedef TYPE_1__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_8__ {int flags; scalar_t__ state; int pcb_mtx; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (struct socket*) ;
 int FUNC_10 (struct socket*) ;

void
FUNC_11(struct socket *VAR_7)
{
 ng_btsocket_l2cap_pcb_p VAR_8 = FUNC_9(VAR_7);

 FUNC_0(VAR_8 != ((void*)0), ("ng_btsocket_l2cap_detach: pcb == NULL"));

 if (VAR_5 == ((void*)0))
  return;

 FUNC_5(&VAR_6);
 FUNC_5(&VAR_8->pcb_mtx);


 if (VAR_8->flags & VAR_3)
  FUNC_8(VAR_8);

 if (VAR_8->state != VAR_1 &&
     VAR_8->state != VAR_2)

  FUNC_7(0, VAR_8);

 VAR_8->state = VAR_1;

 FUNC_1(VAR_8, VAR_4);

 FUNC_6(&VAR_8->pcb_mtx);
 FUNC_6(&VAR_6);

 FUNC_4(&VAR_8->pcb_mtx);
 FUNC_2(VAR_8, sizeof(*VAR_8));
 FUNC_3(VAR_8, VAR_0);

 FUNC_10(VAR_7);
 VAR_7->so_pcb = ((void*)0);
}
