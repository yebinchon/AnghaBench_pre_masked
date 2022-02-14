
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hapd_interfaces {size_t count; TYPE_3__** iface; } ;
struct TYPE_6__ {size_t num_bss; TYPE_2__** bss; } ;
struct TYPE_5__ {TYPE_1__* conf; } ;
struct TYPE_4__ {scalar_t__ tnc; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int FUNC_6(struct hapd_interfaces *VAR_2, int VAR_3,
         const char *VAR_4)
{
 if (VAR_3) {
  if (FUNC_2(VAR_4)) {
   FUNC_5(VAR_0, "daemon: %s", FUNC_3(VAR_1));
   return -1;
  }
  if (FUNC_1()) {
   FUNC_5(VAR_0, "eloop_sock_requeue: %s",
       FUNC_3(VAR_1));
   return -1;
  }
 }

 FUNC_0();

 return 0;
}
