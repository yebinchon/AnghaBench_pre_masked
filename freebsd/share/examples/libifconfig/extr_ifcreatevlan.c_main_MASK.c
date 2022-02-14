
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifconfig_handle_t ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,char**,char*,unsigned short) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 () ;
 int FUNC_8 (char*,char*,...) ;
 char* FUNC_9 (char*) ;
 unsigned short FUNC_10 (char*,int ,int ,char const**) ;
 int FUNC_11 (char*,...) ;

int
FUNC_12(int VAR_4, char *VAR_5[])
{
 char *VAR_6, *VAR_7;
 unsigned short VAR_8;
 const char *VAR_9;
 ifconfig_handle_t *VAR_10;

 if (VAR_4 != 3) {
  FUNC_0(VAR_0, "Invalid number of arguments."
      " Should provide exactly two arguments: "
      "PARENT_INTERFACE and VLAN_TAG.");
 }


 VAR_6 = FUNC_9(VAR_5[1]);
 VAR_8 = FUNC_10(VAR_5[2], 0, VAR_3, &VAR_9);

 if (VAR_9 != ((void*)0)) {
  FUNC_0(1, "VLAN_TAG must be between 0 and %i.\n", VAR_3);
 }

 FUNC_8("Parent interface: %s\nVLAN tag: %i\n", VAR_6, VAR_8);

 VAR_10 = FUNC_7();
 if (VAR_10 == ((void*)0)) {
  FUNC_0(VAR_1, "Failed to open libifconfig handle.");
  return (-1);
 }

 if (FUNC_3(VAR_10, "vlan", &VAR_7,
     VAR_6, VAR_8) == 0) {
  FUNC_8("Successfully created interface '%s'\n", VAR_7);
  FUNC_2(VAR_10);
  VAR_10 = ((void*)0);
  FUNC_1(VAR_6);
  FUNC_1(VAR_7);
  return (0);
 }

 switch (FUNC_5(VAR_10)) {
 case 128:
  FUNC_11("couldn't create socket. This shouldn't happen.\n");
  break;
 case 129:
  if (FUNC_6(VAR_10) == VAR_2) {
   FUNC_11(
    "Failed to create interface (SIOCIFCREATE2)\n");
  }
  break;
 default:
  FUNC_11(
   "This is a thorough example accommodating for temporary"
   " 'not implemented yet' errors. That's likely what happened"
   " now. If not, your guess is as good as mine. ;)"
   " Error code: %d\n", FUNC_4(
    VAR_10));
  break;
 }

 FUNC_2(VAR_10);
 VAR_10 = ((void*)0);
 FUNC_1(VAR_6);
 FUNC_1(VAR_7);
 return (-1);
}
