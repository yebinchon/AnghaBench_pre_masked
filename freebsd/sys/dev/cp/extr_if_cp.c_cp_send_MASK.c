
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_short ;
typedef int u_char ;
struct mbuf {int m_next; } ;
struct TYPE_9__ {char* name; int timeout; TYPE_2__* ifp; TYPE_3__* chan; int queue; int hi_queue; int running; } ;
typedef TYPE_1__ drv_t ;
struct TYPE_11__ {size_t te; scalar_t__ type; int ** tbuf; scalar_t__ lloop; int tn; } ;
struct TYPE_10__ {int if_drv_flags; } ;


 int FUNC_0 (TYPE_2__*,struct mbuf*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,int,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct mbuf*,int ,int,int *) ;
 int FUNC_7 (struct mbuf*) ;
 int FUNC_8 (struct mbuf*,int *) ;
 scalar_t__ FUNC_9 (struct mbuf*,int ) ;
 int FUNC_10 (char*,char*,int) ;
 struct mbuf* FUNC_11 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_12 (drv_t *VAR_4)
{
 struct mbuf *VAR_5;
 u_short VAR_6;

 FUNC_1 (VAR_4, ("cp_send, tn=%d te=%d\n", VAR_4->chan->tn, VAR_4->chan->te));


 if (! VAR_4->running)
  return;


 if (! (VAR_4->chan->lloop || VAR_4->chan->type != VAR_2 ||
  FUNC_3 (VAR_4->chan)))
  return;

 while (FUNC_5 (VAR_4->chan)) {






  VAR_5 = FUNC_11 (VAR_4->ifp);

  if (! VAR_5)
   return;

  FUNC_0 (VAR_4->ifp, VAR_5);

  VAR_6 = FUNC_8 (VAR_5, ((void*)0));
  if (VAR_6 >= VAR_0)
   FUNC_10 ("%s: too long packet: %d bytes: ",
    VAR_4->name, VAR_6);
  else if (! VAR_5->m_next)
   FUNC_4 (VAR_4->chan, (u_char*) FUNC_9 (VAR_5, VAR_3), VAR_6, 0);
  else {
   u_char *VAR_7 = VAR_4->chan->tbuf[VAR_4->chan->te];
   FUNC_6 (VAR_5, 0, VAR_6, VAR_7);
   FUNC_4 (VAR_4->chan, VAR_7, VAR_6, 0);
  }
  FUNC_7 (VAR_5);

  VAR_4->timeout = 10;
 }

 VAR_4->ifp->if_drv_flags |= VAR_1;

}
