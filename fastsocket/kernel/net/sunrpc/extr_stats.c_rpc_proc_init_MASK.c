
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proc_net; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;

void
FUNC_2(void)
{
 FUNC_0("RPC:       registering /proc/net/rpc\n");
 if (!VAR_1)
  VAR_1 = FUNC_1("rpc", VAR_0.proc_net);
}
