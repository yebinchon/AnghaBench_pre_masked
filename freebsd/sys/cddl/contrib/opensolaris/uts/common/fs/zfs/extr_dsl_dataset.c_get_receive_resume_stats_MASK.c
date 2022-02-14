
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int dsl_dataset_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 char* FUNC_1 (int *) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5(dsl_dataset_t *VAR_1, nvlist_t *VAR_2)
{
 char *VAR_3 = FUNC_2(VAR_1);
 if (FUNC_3(VAR_3, "") != 0) {
  FUNC_0(VAR_2,
      VAR_0, VAR_3);
 } else {
  char *VAR_4 = FUNC_1(VAR_1);
  if (FUNC_3(VAR_4, "") != 0) {
   FUNC_0(VAR_2,
       VAR_0, VAR_4);
  }
  FUNC_4(VAR_4);
 }
 FUNC_4(VAR_3);
}
