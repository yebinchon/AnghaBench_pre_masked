
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifconfig_handle_t ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int * FUNC_4 () ;
 int VAR_0 ;

int
FUNC_5(int VAR_1, char *VAR_2[])
{
 ifconfig_handle_t *VAR_3;

 if (VAR_1 != 1) {
  FUNC_1(1, "Usage: example_status");
 }

 VAR_3 = FUNC_4();
 if (VAR_3 == ((void*)0)) {
  FUNC_1(1, "Failed to open libifconfig handle.");
 }

 if (FUNC_3(VAR_3, VAR_0, ((void*)0)) != 0) {
  FUNC_0(1, "Failed to get interfaces");
 }

 FUNC_2(VAR_3);
 VAR_3 = ((void*)0);
 return (-1);
}
