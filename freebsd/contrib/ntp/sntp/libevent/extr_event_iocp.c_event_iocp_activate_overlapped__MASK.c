
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_overlapped {int overlapped; } ;
struct event_iocp_port {int port; } ;
typedef int ev_uintptr_t ;
typedef int ev_uint32_t ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,int ,int *) ;

int
FUNC_1(
    struct event_iocp_port *VAR_0, struct event_overlapped *VAR_1,
    ev_uintptr_t VAR_2, ev_uint32_t VAR_3)
{
 BOOL VAR_4;

 VAR_4 = FUNC_0(VAR_0->port, VAR_3, VAR_2, &VAR_1->overlapped);
 return (VAR_4==0) ? -1 : 0;
}
