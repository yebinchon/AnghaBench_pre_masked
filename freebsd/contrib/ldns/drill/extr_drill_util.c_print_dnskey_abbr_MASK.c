
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;

void
FUNC_10(FILE *VAR_1, ldns_rr *VAR_2)
{
        if (!VAR_2 || (FUNC_5(VAR_2) != VAR_0)) {
                return;
        }

        FUNC_3(VAR_1, FUNC_6(VAR_2));
        FUNC_0(VAR_1, " %d", (int)FUNC_8(VAR_2));
 FUNC_9(VAR_1, VAR_2);



        FUNC_3(VAR_1, FUNC_7(VAR_2, 0)); FUNC_0(VAR_1, " ");

        FUNC_3(VAR_1, FUNC_7(VAR_2, 1)); FUNC_0(VAR_1, " ");

        FUNC_3(VAR_1, FUNC_7(VAR_2, 2));

 if (FUNC_2(FUNC_7(VAR_2, 0)) == 256) {
  FUNC_0(VAR_1, " ;{id = %u (zsk), size = %db}", (unsigned int)FUNC_1(VAR_2),
    (int)FUNC_4(VAR_2));
  return;
 }
 if (FUNC_2(FUNC_7(VAR_2, 0)) == 257) {
  FUNC_0(VAR_1, " ;{id = %u (ksk), size = %db}", (unsigned int)FUNC_1(VAR_2),
    (int)FUNC_4(VAR_2));
  return;
 }
 FUNC_0(VAR_1, " ;{id = %u, size = %db}", (unsigned int)FUNC_1(VAR_2),
   (int)FUNC_4(VAR_2));
}
