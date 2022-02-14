
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_iocp_port {int shutdown; int n_live_threads; int lock; int shutdownSemaphore; } ;
typedef long DWORD ;


 int FUNC_0 (int *) ;
 long VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,long) ;
 int FUNC_3 (struct event_iocp_port*) ;
 int FUNC_4 (struct event_iocp_port*) ;

int
FUNC_5(struct event_iocp_port *VAR_1, long VAR_2)
{
 DWORD VAR_3 = VAR_0;
 int VAR_4;

 FUNC_0(&VAR_1->lock);
 VAR_1->shutdown = 1;
 FUNC_1(&VAR_1->lock);
 FUNC_3(VAR_1);

 if (VAR_2 >= 0)
  VAR_3 = VAR_2;

 FUNC_2(VAR_1->shutdownSemaphore, VAR_3);
 FUNC_0(&VAR_1->lock);
 VAR_4 = VAR_1->n_live_threads;
 FUNC_1(&VAR_1->lock);
 if (VAR_4 == 0) {
  FUNC_4(VAR_1);
  return 0;
 } else {
  return -1;
 }
}
