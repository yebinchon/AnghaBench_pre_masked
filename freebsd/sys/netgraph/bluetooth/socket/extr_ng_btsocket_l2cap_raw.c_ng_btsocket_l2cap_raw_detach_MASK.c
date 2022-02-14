
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct socket {int * so_pcb; } ;
typedef TYPE_1__* ng_btsocket_l2cap_raw_pcb_p ;
struct TYPE_6__ {int pcb_mtx; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_7 (struct socket*) ;

void
FUNC_8(struct socket *VAR_4)
{
 ng_btsocket_l2cap_raw_pcb_p VAR_5 = FUNC_7(VAR_4);

 FUNC_0(VAR_5 != ((void*)0), ("nt_btsocket_l2cap_raw_detach: pcb == NULL"));
 if (VAR_2 == ((void*)0))
  return;

 FUNC_5(&VAR_3);
 FUNC_5(&VAR_5->pcb_mtx);

 FUNC_1(VAR_5, VAR_1);

 FUNC_6(&VAR_5->pcb_mtx);
 FUNC_6(&VAR_3);

 FUNC_4(&VAR_5->pcb_mtx);

 FUNC_2(VAR_5, sizeof(*VAR_5));
 FUNC_3(VAR_5, VAR_0);

 VAR_4->so_pcb = ((void*)0);
}
