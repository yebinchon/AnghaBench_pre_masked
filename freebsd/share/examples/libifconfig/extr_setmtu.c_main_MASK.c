
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,char*,int) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char**,int) ;
 int FUNC_11 (char*,...) ;

int
FUNC_12(int VAR_3, char *VAR_4[])
{
 char *VAR_5, *VAR_6;
 int VAR_7;
 ifconfig_handle_t *VAR_8;

 if (VAR_3 != 3) {
  FUNC_0(VAR_0, "Invalid number of arguments."
      " First argument should be interface name, second argument"
      " should be the MTU to set.");
 }


 VAR_5 = FUNC_9(VAR_4[1]);
 VAR_7 = (int)FUNC_10(VAR_4[2], &VAR_6, 10);

 FUNC_8("Interface name: %s\n", VAR_5);
 FUNC_8("New MTU: %d", VAR_7);

 VAR_8 = FUNC_6();
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_1, "Failed to open libifconfig handle.");
  return (-1);
 }

 if (FUNC_7(VAR_8, VAR_5, VAR_7) == 0) {
  FUNC_8("Successfully changed MTU of %s to %d\n", VAR_5, VAR_7);
  FUNC_2(VAR_8);
  VAR_8 = ((void*)0);
  FUNC_1(VAR_5);
  return (0);
 }

 switch (FUNC_4(VAR_8)) {
 case 128:
  FUNC_11("couldn't create socket. This shouldn't happen.\n");
  break;
 case 129:
  if (FUNC_5(VAR_8) == VAR_2) {
   FUNC_11("Failed to set MTU (SIOCSIFMTU)\n");
  } else {
   FUNC_11(
    "Failed to set MTU due to error in unexpected ioctl() call %lu. Error code: %i.\n",
    FUNC_5(VAR_8),
    FUNC_3(VAR_8));
  }
  break;
 default:
  FUNC_11(
   "Should basically never end up here in this example.\n");
  break;
 }

 FUNC_2(VAR_8);
 VAR_8 = ((void*)0);
 FUNC_1(VAR_5);
 return (-1);
}
