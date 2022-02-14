
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_iocp_port {int n_threads; int port; } ;
typedef scalar_t__ evutil_socket_t ;
typedef int ev_uintptr_t ;
typedef int HANDLE ;


 int FUNC_0 (int ,int ,int ,int ) ;

int
FUNC_1(struct event_iocp_port *VAR_0, evutil_socket_t VAR_1,
    ev_uintptr_t VAR_2)
{
 HANDLE VAR_3;
 VAR_3 = FUNC_0((HANDLE)VAR_1, VAR_0->port, VAR_2, VAR_0->n_threads);
 if (!VAR_3)
  return -1;
 return 0;
}
