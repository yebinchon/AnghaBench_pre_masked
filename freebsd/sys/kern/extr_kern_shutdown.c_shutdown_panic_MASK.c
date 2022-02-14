
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, int VAR_3)
{
 int VAR_4;

 if (VAR_3 & VAR_0) {
  if (VAR_1 != 0) {
   if (VAR_1 != -1) {
    FUNC_3("Automatic reboot in %d seconds - "
           "press a key on the console to abort\n",
     VAR_1);
    for (VAR_4 = VAR_1 * 10;
         VAR_4 > 0; --VAR_4) {
     FUNC_0(1000 * 100);

     if (FUNC_1() != -1)
      break;
    }
    if (!VAR_4)
     return;
   }
  } else {
   return;
  }
  FUNC_3("--> Press a key on the console to reboot,\n");
  FUNC_3("--> or switch off the system now.\n");
  FUNC_2();
 }
}
