
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;

void
FUNC_7(FILE *VAR_1, ldns_rr *VAR_2) {
 if (!VAR_2 || (FUNC_2(VAR_2) != VAR_0)) {
  return;
 }

 FUNC_1(VAR_1, FUNC_3(VAR_2));
 FUNC_0(VAR_1, " %d", (int)FUNC_5(VAR_2));
 FUNC_6(VAR_1, VAR_2);



 FUNC_1(VAR_1, FUNC_4(VAR_2, 0)); FUNC_0(VAR_1, " ");

 FUNC_1(VAR_1, FUNC_4(VAR_2, 1)); FUNC_0(VAR_1, " ");

 FUNC_1(VAR_1, FUNC_4(VAR_2, 2)); FUNC_0(VAR_1, " (\n\t\t\t");

 FUNC_1(VAR_1, FUNC_4(VAR_2, 4)); FUNC_0(VAR_1, " ");

 FUNC_1(VAR_1, FUNC_4(VAR_2, 5)); FUNC_0(VAR_1, " ");

 FUNC_1(VAR_1, FUNC_4(VAR_2, 6)); FUNC_0(VAR_1, " ");

 FUNC_1(VAR_1, FUNC_4(VAR_2, 7)); FUNC_0(VAR_1, ")");
}
