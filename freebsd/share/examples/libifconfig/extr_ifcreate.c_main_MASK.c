
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
 scalar_t__ FUNC_3 (int *,char*,char**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (char*,char*) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;

int
FUNC_11(int VAR_3, char *VAR_4[])
{
 char *VAR_5, *VAR_6;
 ifconfig_handle_t *VAR_7;

 if (VAR_3 != 2) {
  FUNC_0(VAR_0, "Invalid number of arguments."
      " Only one argument is accepted, and it should be the name"
      " of the interface to be created.");
 }


 VAR_5 = FUNC_9(VAR_4[1]);

 FUNC_8("Requested interface name: %s\n", VAR_5);

 VAR_7 = FUNC_7();
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_1, "Failed to open libifconfig handle.");
  return (-1);
 }

 if (FUNC_3(VAR_7, VAR_5, &VAR_6) == 0) {
  FUNC_8("Successfully created interface '%s'\n", VAR_6);
  FUNC_2(VAR_7);
  VAR_7 = ((void*)0);
  FUNC_1(VAR_5);
  FUNC_1(VAR_6);
  return (0);
 }

 switch (FUNC_5(VAR_7)) {
 case 128:
  FUNC_10("couldn't create socket. This shouldn't happen.\n");
  break;
 case 129:
  if (FUNC_6(VAR_7) == VAR_2) {
   FUNC_10(
    "Failed to create interface (SIOCIFCREATE2)\n");
  }
  break;
 default:
  FUNC_10(
   "This is a thorough example accommodating for temporary"
   " 'not implemented yet' errors. That's likely what happened"
   " now. If not, your guess is as good as mine. ;)"
   " Error code: %d\n", FUNC_4(
    VAR_7));
  break;
 }

 FUNC_2(VAR_7);
 VAR_7 = ((void*)0);
 FUNC_1(VAR_5);
 FUNC_1(VAR_6);
 return (-1);
}
