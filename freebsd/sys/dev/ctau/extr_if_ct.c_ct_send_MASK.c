
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct mbuf {int m_next; } ;
struct TYPE_10__ {int timeout; TYPE_2__* ifp; TYPE_3__* chan; int queue; int hi_queue; int running; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_12__ {size_t te; int ** tbuf; int tn; } ;
struct TYPE_11__ {int if_drv_flags; } ;


 int FUNC_0 (TYPE_2__*,struct mbuf*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int *,int ,int ) ;
 int FUNC_7 (struct mbuf*,int ,int ,int *) ;
 int FUNC_8 (struct mbuf*) ;
 int FUNC_9 (struct mbuf*,int *) ;
 scalar_t__ FUNC_10 (struct mbuf*,int ) ;
 struct mbuf* FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12 (drv_t *VAR_2)
{
 struct mbuf *VAR_3;
 u_short VAR_4;

 FUNC_1 (VAR_2, ("ct_send, tn=%d\n", VAR_2->chan->tn));


 if (! VAR_2->running)
  return;


 if (! FUNC_4 (VAR_2->chan) && !FUNC_5 (VAR_2->chan))
  return;

 while (FUNC_3 (VAR_2->chan)) {






  VAR_3 = FUNC_11 (VAR_2->ifp);

  if (! VAR_3)
   return;

  FUNC_0 (VAR_2->ifp, VAR_3);

  VAR_4 = FUNC_9 (VAR_3, ((void*)0));
  if (! VAR_3->m_next)
   FUNC_6 (VAR_2->chan, (u_char*)FUNC_10 (VAR_3, VAR_1),
    VAR_4, 0);
  else {
   FUNC_7 (VAR_3, 0, VAR_4, VAR_2->chan->tbuf[VAR_2->chan->te]);
   FUNC_6 (VAR_2->chan, VAR_2->chan->tbuf[VAR_2->chan->te],
    VAR_4, 0);
  }
  FUNC_8 (VAR_3);



  VAR_2->timeout = 10;
 }

 VAR_2->ifp->if_drv_flags |= VAR_0;

}
