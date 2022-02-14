
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ssh {char const* remote_ipaddr; int remote_port; int local_port; void* local_ipaddr; TYPE_1__* state; } ;
struct TYPE_2__ {int connection_in; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 char const* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct ssh*) ;
 void* FUNC_5 (char*) ;

const char *
FUNC_6(struct ssh *VAR_0)
{
 int VAR_1;


 if (VAR_0->remote_ipaddr == ((void*)0)) {
  if (FUNC_4(VAR_0)) {
   VAR_1 = VAR_0->state->connection_in;
   VAR_0->remote_ipaddr = FUNC_2(VAR_1);
   VAR_0->remote_port = FUNC_3(VAR_1);
   VAR_0->local_ipaddr = FUNC_0(VAR_1);
   VAR_0->local_port = FUNC_1(VAR_1);
  } else {
   VAR_0->remote_ipaddr = FUNC_5("UNKNOWN");
   VAR_0->remote_port = 65535;
   VAR_0->local_ipaddr = FUNC_5("UNKNOWN");
   VAR_0->local_port = 65535;
  }
 }
 return VAR_0->remote_ipaddr;
}
