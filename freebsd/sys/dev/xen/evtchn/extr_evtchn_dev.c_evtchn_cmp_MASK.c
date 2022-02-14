
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int port; } ;



__attribute__((used)) static int
FUNC_0(struct user_evtchn *VAR_0, struct user_evtchn *VAR_1)
{

 return (VAR_0->port - VAR_1->port);
}
