
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,char*,char*,unsigned short) ;
 int FUNC_8 (char*,...) ;
 char* FUNC_9 (char*) ;
 unsigned short FUNC_10 (char*,int ,int ,char const**) ;
 int FUNC_11 (char*,...) ;

int
FUNC_12(int VAR_5, char *VAR_6[])
{
 char *VAR_7, *VAR_8;
 unsigned short VAR_9;
 const char *VAR_10;
 ifconfig_handle_t *VAR_11;

 if (VAR_5 != 4) {
  FUNC_0(VAR_0, "Invalid number of arguments."
      " Should provide exactly three arguments: "
      "INTERFACE, PARENT_INTERFACE and VLAN_TAG.");
 }


 VAR_7 = FUNC_9(VAR_6[1]);
 VAR_8 = FUNC_9(VAR_6[2]);
 VAR_9 = FUNC_10(VAR_6[3], 0, VAR_4, &VAR_10);

 if (VAR_10 != ((void*)0)) {
  FUNC_0(1, "VLAN_TAG must be between 0 and %i.\n", VAR_4);
 }

 FUNC_8("Interface: %s\nNew VLAN tag: %i\n", VAR_7, VAR_9);

 VAR_11 = FUNC_6();
 if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_1, "Failed to open libifconfig handle.");
  return (-1);
 }

 if (FUNC_7(VAR_11, VAR_7, VAR_8, VAR_9) == 0) {
  FUNC_8("Successfully changed vlan tag.\n");
  FUNC_2(VAR_11);
  VAR_11 = ((void*)0);
  FUNC_1(VAR_7);
  FUNC_1(VAR_8);
  return (0);
 }

 switch (FUNC_4(VAR_11)) {
 case 128:
  FUNC_11("couldn't create socket. This shouldn't happen.\n");
  break;
 case 129:
  if (FUNC_5(VAR_11) == VAR_2) {
   FUNC_11("Target interface isn't a VLAN interface.\n");
  }
  if (FUNC_5(VAR_11) == VAR_3) {
   FUNC_11(
    "Couldn't change VLAN properties of interface.\n");
  }
  break;
 default:
  FUNC_11(
   "This is a thorough example accommodating for temporary"
   " 'not implemented yet' errors. That's likely what happened"
   " now. If not, your guess is as good as mine. ;)"
   " Error code: %d\n", FUNC_3(
    VAR_11));
  break;
 }

 FUNC_2(VAR_11);
 VAR_11 = ((void*)0);
 FUNC_1(VAR_7);
 FUNC_1(VAR_8);
 return (-1);
}
