
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ server_alive_count_max; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void)
{
 if (FUNC_3() > VAR_2.server_alive_count_max) {
  FUNC_2("Timeout, server %s not responding.", VAR_1);
  FUNC_0(255);
 }
 FUNC_7(VAR_0);
 FUNC_5("keepalive@openssh.com");
 FUNC_4(1);
 FUNC_6();

 FUNC_1(((void*)0), ((void*)0));
}
