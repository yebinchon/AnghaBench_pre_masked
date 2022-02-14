
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_1 != 0; VAR_2 = 0) {
  if (VAR_2 != 0) {
   FUNC_1("virtio_console: Waiting for all detached TTY "
       "devices to have open fds closed.\n");
  }
  FUNC_0("vtcondra", VAR_0);
 }
}
