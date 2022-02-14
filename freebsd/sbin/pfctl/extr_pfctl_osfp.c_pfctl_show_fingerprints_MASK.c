
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int *,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,int *) ;

void
FUNC_5(int VAR_3)
{
 if (FUNC_0(&VAR_1) != ((void*)0)) {
  if (VAR_3 & VAR_0) {
   FUNC_1("OS FINGERPRINTS:");
   FUNC_3("%u fingerprints loaded\n", VAR_2);
  } else {
   FUNC_3("Class\tVersion\tSubtype(subversion)\n");
   FUNC_3("-----\t-------\t-------------------\n");
   FUNC_4(VAR_3, &VAR_1);
   FUNC_2(VAR_3, &VAR_1, "");
  }
 }
}
