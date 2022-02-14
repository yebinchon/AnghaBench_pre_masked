
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_iocp_port {struct event_iocp_port* threads; int shutdownSemaphore; int port; int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct event_iocp_port*) ;

__attribute__((used)) static void
FUNC_3(struct event_iocp_port *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0->port);
 FUNC_0(VAR_0->shutdownSemaphore);
 FUNC_2(VAR_0->threads);
 FUNC_2(VAR_0);
}
