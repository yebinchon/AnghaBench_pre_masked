
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ forward_agent; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(void)
{
 int VAR_2;

 if (VAR_1.forward_agent) {

  if ((VAR_2 = FUNC_2(((void*)0))) != 0) {
   VAR_1.forward_agent = 0;
   if (VAR_2 != VAR_0)
    FUNC_0("ssh_get_authentication_socket: %s",
        FUNC_1(VAR_2));
  }
 }
}
