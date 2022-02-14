
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, int VAR_3)
{

 if (VAR_3 & VAR_0) {
  FUNC_2("\n");
  FUNC_2("The operating system has halted.\n");
  FUNC_2("Please press any key to reboot.\n\n");

  FUNC_3(VAR_1);

  switch (FUNC_0()) {
  case -1:
   FUNC_1();

  default:
   break;
  }
 }
}
