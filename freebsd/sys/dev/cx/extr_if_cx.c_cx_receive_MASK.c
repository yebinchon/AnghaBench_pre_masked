
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rcvif; } ;
struct mbuf {TYPE_2__ m_pkthdr; } ;
struct TYPE_10__ {int queue; scalar_t__ ifp; int hook; int running; int intr_action; int aqueue; TYPE_1__* tty; } ;
typedef TYPE_3__ drv_t ;
struct TYPE_11__ {scalar_t__ mode; int debug; int ierrs; TYPE_3__* sys; } ;
typedef TYPE_4__ cx_chan_t ;
typedef int async_q ;
struct TYPE_8__ {int t_state; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,struct mbuf*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int,int ,struct mbuf*) ;
 int VAR_7 ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int VAR_8 ;
 int FUNC_7 (scalar_t__,int ,int) ;
 int FUNC_8 (struct mbuf*,int ) ;
 struct mbuf* FUNC_9 (char*,int) ;
 int FUNC_10 (int ,int ) ;

__attribute__((used)) static void FUNC_11 (cx_chan_t *VAR_9, char *VAR_10, int VAR_11)
{
 drv_t *VAR_12 = VAR_9->sys;
 struct mbuf *VAR_13;
 char *VAR_14 = VAR_10;




 if (!VAR_12)
  return;

 if (VAR_9->mode == VAR_6 && VAR_12->tty) {
  if (VAR_12->tty->t_state & VAR_7) {
   async_q *VAR_15 = &VAR_12->aqueue;
   int VAR_16 = VAR_0 - 1 - FUNC_0 (VAR_15);

   if (VAR_11 <= 0 && !VAR_16)
    return;

   if (VAR_11 > VAR_16) {
    VAR_9->ierrs++;
    FUNC_6 (VAR_9, VAR_1);
    VAR_11 = VAR_16 - 1;
   }

   while (VAR_11--) {
    FUNC_1 (VAR_15, *(unsigned char *)VAR_14);
    VAR_14++;
   }

   VAR_12->intr_action |= VAR_2;
   VAR_5 = 1;
   FUNC_10 (VAR_8, 0);
  }
  return;
 }
 if (! VAR_12->running)
  return;

 VAR_13 = FUNC_9 (VAR_10, VAR_11);
 if (! VAR_13) {
  FUNC_3 (VAR_12, ("no memory for packet\n"));

  FUNC_7(VAR_12->ifp, VAR_4, 1);

  return;
 }
 if (VAR_9->debug > 1)
  FUNC_8 (VAR_13, 0);




 FUNC_7(VAR_12->ifp, VAR_3, 1);
 VAR_13->m_pkthdr.rcvif = VAR_12->ifp;


 FUNC_2(VAR_12->ifp, VAR_13);
 FUNC_4 (&VAR_12->queue, VAR_13);

}
