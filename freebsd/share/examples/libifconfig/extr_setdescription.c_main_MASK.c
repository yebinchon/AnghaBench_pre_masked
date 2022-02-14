
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,char*,char**) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,char*,char*) ;
 int FUNC_10 (char*,...) ;
 char* FUNC_11 (char*) ;

int
FUNC_12(int VAR_2, char *VAR_3[])
{
 char *VAR_4, *VAR_5, *VAR_6;
 ifconfig_handle_t *VAR_7;

 if (VAR_2 != 3) {
  FUNC_1(VAR_0, "Invalid number of arguments."
      " First argument should be interface name, second argument"
      " should be the description to set.");
 }


 VAR_4 = FUNC_11(VAR_3[1]);
 VAR_5 = FUNC_11(VAR_3[2]);
 VAR_6 = ((void*)0);

 FUNC_10("Interface name: %s\n", VAR_4);

 VAR_7 = FUNC_8();
 if (VAR_7 == ((void*)0)) {
  FUNC_1(VAR_1, "Failed to open libifconfig handle.");
  return (-1);
 }

 if (FUNC_7(VAR_7, VAR_4, &VAR_6) == 0) {
  FUNC_10("Old description: %s\n", VAR_6);
 }

 FUNC_10("New description: %s\n\n", VAR_5);

 if (FUNC_9(VAR_7, VAR_4, VAR_5) == 0) {
  FUNC_10("New description successfully set.\n");
 } else {
  switch (FUNC_5(VAR_7)) {
  case 128:
   FUNC_0(FUNC_4(VAR_7), "Socket error");
   break;
  case 129:
   FUNC_0(FUNC_4(
        VAR_7), "IOCTL(%lu) error",
       FUNC_6(VAR_7));
   break;
  default:
   FUNC_0(FUNC_4(VAR_7), "Other error");
   break;
  }
 }

 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 VAR_4 = ((void*)0);
 VAR_5 = ((void*)0);
 VAR_6 = ((void*)0);

 FUNC_3(VAR_7);
 return (0);
}
