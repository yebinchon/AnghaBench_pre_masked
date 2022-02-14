
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* ng_btsocket_rfcomm_session_p ;
typedef TYPE_2__* ng_btsocket_rfcomm_pcb_p ;
struct TYPE_12__ {int src; } ;
struct TYPE_11__ {scalar_t__ state; int pcb_mtx; int src; int mtu; } ;
struct TYPE_10__ {int l2so; int mtu; int dlcs; int session_mtx; } ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_3 ;
 TYPE_3__* FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(ng_btsocket_rfcomm_session_p VAR_4)
{
 ng_btsocket_rfcomm_pcb_p VAR_5 = ((void*)0), VAR_6 = ((void*)0);
 int VAR_7;

 FUNC_3(&VAR_4->session_mtx, VAR_0);
 for (VAR_5 = FUNC_0(&VAR_4->dlcs); VAR_5 != ((void*)0); ) {
  FUNC_4(&VAR_5->pcb_mtx);
  VAR_6 = FUNC_1(VAR_5, VAR_3);

  if (VAR_5->state == VAR_2) {
   VAR_5->mtu = VAR_4->mtu;
   FUNC_2(&FUNC_8(VAR_4->l2so)->src, &VAR_5->src,
    sizeof(VAR_5->src));

   VAR_7 = FUNC_7(VAR_5);
   if (VAR_7 == 0)
    VAR_5->state = VAR_1;
   else
    FUNC_6(VAR_5, VAR_7);
  }

  FUNC_5(&VAR_5->pcb_mtx);
  VAR_5 = VAR_6;
 }
}
