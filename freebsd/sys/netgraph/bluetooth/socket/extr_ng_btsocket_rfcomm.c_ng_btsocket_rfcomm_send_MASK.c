
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct mbuf {int dummy; } ;
struct TYPE_5__ {scalar_t__ state; int flags; int pcb_mtx; TYPE_1__* so; } ;
typedef TYPE_2__ ng_btsocket_rfcomm_pcb_t ;
struct TYPE_4__ {int so_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,struct mbuf*,int) ;
 TYPE_2__* FUNC_5 (struct socket*) ;

int
FUNC_6(struct socket *VAR_4, int VAR_5, struct mbuf *VAR_6,
  struct sockaddr *VAR_7, struct mbuf *VAR_8, struct thread *VAR_9)
{
 ng_btsocket_rfcomm_pcb_t *VAR_10 = FUNC_5(VAR_4);
 int VAR_11 = 0;


 if (VAR_10 == ((void*)0) || VAR_6 == ((void*)0) || VAR_8 != ((void*)0)) {
  VAR_11 = VAR_0;
  goto drop;
 }

 FUNC_1(&VAR_10->pcb_mtx);


 if (VAR_10->state != VAR_2) {
  FUNC_2(&VAR_10->pcb_mtx);
  VAR_11 = VAR_1;
  goto drop;
 }


 FUNC_4(&VAR_10->so->so_snd, VAR_6, VAR_5);
 VAR_6 = ((void*)0);

 if (!(VAR_10->flags & VAR_3)) {
  VAR_10->flags |= VAR_3;
  VAR_11 = FUNC_3();
 }

 FUNC_2(&VAR_10->pcb_mtx);
drop:
 FUNC_0(VAR_6);
 FUNC_0(VAR_8);

 return (VAR_11);
}
