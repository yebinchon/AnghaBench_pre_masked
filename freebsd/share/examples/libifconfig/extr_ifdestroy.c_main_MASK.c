
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
 scalar_t__ FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

int
FUNC_10(int VAR_3, char *VAR_4[])
{
 char *VAR_5;
 ifconfig_handle_t *VAR_6;

 if (VAR_3 != 2) {
  FUNC_0(VAR_0, "Invalid number of arguments."
      " Only one argument is accepted, and it should be the name"
      " of the interface to be destroyed.");
 }


 VAR_5 = FUNC_8(VAR_4[1]);

 FUNC_7("Interface name: %s\n", VAR_5);

 VAR_6 = FUNC_6();
 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_1, "Failed to open libifconfig handle.");
  return (-1);
 }

 if (FUNC_3(VAR_6, VAR_5) == 0) {
  FUNC_7("Successfully destroyed interface '%s'.", VAR_5);
  FUNC_2(VAR_6);
  VAR_6 = ((void*)0);
  FUNC_1(VAR_5);
  return (0);
 }

 switch (FUNC_4(VAR_6)) {
 case 128:
  FUNC_9("couldn't create socket. This shouldn't happen.\n");
  break;
 case 129:
  if (FUNC_5(VAR_6) == VAR_2) {
   FUNC_9(
    "Failed to destroy interface (SIOCIFDESTROY)\n");
  }
  break;
 default:
  FUNC_9(
   "Should basically never end up here in this example.\n");
  break;
 }

 FUNC_2(VAR_6);
 VAR_6 = ((void*)0);
 FUNC_1(VAR_5);
 return (-1);
}
