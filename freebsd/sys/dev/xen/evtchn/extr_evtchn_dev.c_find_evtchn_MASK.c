
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int port; } ;
struct per_user_data {int evtchns; } ;
typedef int evtchn_port_t ;


 struct user_evtchn* FUNC_0 (int ,int *,struct user_evtchn*) ;
 int VAR_0 ;

__attribute__((used)) static struct user_evtchn *
FUNC_1(struct per_user_data *VAR_1, evtchn_port_t VAR_2)
{
 struct user_evtchn VAR_3 = {
  .port = VAR_2,
 };

 return (FUNC_0(VAR_0, &VAR_1->evtchns, &VAR_3));
}
