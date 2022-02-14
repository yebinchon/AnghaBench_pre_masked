
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct mbuf {int m_next; } ;
struct TYPE_6__ {int timeout; TYPE_2__* ifp; int chan; int lo_queue; int hi_queue; int running; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_7__ {int if_drv_flags; } ;


 int FUNC_0 (TYPE_2__*,struct mbuf*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *,int ,int ) ;
 int FUNC_7 (struct mbuf*,int ,int ,int *) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct mbuf*,int *) ;
 scalar_t__ FUNC_10 (struct mbuf*,int ) ;
 struct mbuf* FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12 (drv_t *VAR_3)
{
 struct mbuf *VAR_4;
 u_short VAR_5;

 FUNC_1 (VAR_3, ("cx_send\n"));


 if (! VAR_3->running)
  return;


 if (! FUNC_4 (VAR_3->chan) && ! FUNC_5(VAR_3->chan))
  return;

 if (FUNC_3 (VAR_3->chan)) {






  VAR_4 = FUNC_11 (VAR_3->ifp);

  if (! VAR_4)
   return;

  FUNC_0 (VAR_3->ifp, VAR_4);

  VAR_5 = FUNC_9 (VAR_4, ((void*)0));
  if (! VAR_4->m_next)
   FUNC_6 (VAR_3->chan, (u_char*)FUNC_10 (VAR_4, VAR_2),
    VAR_5, 0);
  else {
   u_char VAR_6 [VAR_0];
   FUNC_7 (VAR_4, 0, VAR_5, VAR_6);
   FUNC_6 (VAR_3->chan, VAR_6, VAR_5, 0);
  }
  FUNC_8 (VAR_4);


  VAR_3->timeout = 10;
 }

 VAR_3->ifp->if_drv_flags |= VAR_1;

}
