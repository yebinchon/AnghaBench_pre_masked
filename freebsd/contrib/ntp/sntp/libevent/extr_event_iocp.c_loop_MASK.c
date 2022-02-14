
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_iocp_port {long ms; scalar_t__ n_live_threads; int lock; int shutdownSemaphore; scalar_t__ shutdown; int port; } ;
typedef scalar_t__ ULONG_PTR ;
typedef int OVERLAPPED ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,scalar_t__*,int **,long) ;
 long VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *,scalar_t__,int ,int) ;

__attribute__((used)) static void
FUNC_6(void *VAR_2)
{
 struct event_iocp_port *VAR_3 = VAR_2;
 long VAR_4 = VAR_3->ms;
 HANDLE VAR_5 = VAR_3->port;

 if (VAR_4 <= 0)
  VAR_4 = VAR_0;

 while (1) {
  OVERLAPPED *VAR_6=((void*)0);
  ULONG_PTR VAR_7=0;
  DWORD VAR_8=0;
  int VAR_9 = FUNC_1(VAR_5, &VAR_8, &VAR_7,
   &VAR_6, VAR_4);
  FUNC_0(&VAR_3->lock);
  if (VAR_3->shutdown) {
   if (--VAR_3->n_live_threads == 0)
    FUNC_3(VAR_3->shutdownSemaphore, 1,
      ((void*)0));
   FUNC_2(&VAR_3->lock);
   return;
  }
  FUNC_2(&VAR_3->lock);

  if (VAR_7 != VAR_1 && VAR_6)
   FUNC_5(VAR_6, VAR_7, VAR_8, VAR_9);
  else if (!VAR_6)
   break;
 }
 FUNC_4("GetQueuedCompletionStatus exited with no event.");
 FUNC_0(&VAR_3->lock);
 if (--VAR_3->n_live_threads == 0)
  FUNC_3(VAR_3->shutdownSemaphore, 1, ((void*)0));
 FUNC_2(&VAR_3->lock);
}
