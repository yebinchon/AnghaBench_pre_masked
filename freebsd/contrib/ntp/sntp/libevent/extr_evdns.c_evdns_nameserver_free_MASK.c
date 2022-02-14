
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nameserver {scalar_t__ socket; scalar_t__ state; int timeout_event; int * probe_request; int base; int event; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct nameserver*) ;

__attribute__((used)) static void
FUNC_5(struct nameserver *VAR_0)
{
 if (VAR_0->socket >= 0)
 FUNC_3(VAR_0->socket);
 (void) FUNC_2(&VAR_0->event);
 FUNC_1(&VAR_0->event);
 if (VAR_0->state == 0)
  (void) FUNC_2(&VAR_0->timeout_event);
 if (VAR_0->probe_request) {
  FUNC_0(VAR_0->base, VAR_0->probe_request);
  VAR_0->probe_request = ((void*)0);
 }
 FUNC_1(&VAR_0->timeout_event);
 FUNC_4(VAR_0);
}
