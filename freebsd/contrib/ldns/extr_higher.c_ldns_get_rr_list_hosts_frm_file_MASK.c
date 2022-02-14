
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int * FUNC_2 (int *) ;

ldns_rr_list *
FUNC_3(char *VAR_1)
{
 ldns_rr_list *VAR_2;
 FILE *VAR_3;

 if (!VAR_1) {
                VAR_3 = FUNC_1(VAR_0, "r");

        } else {
                VAR_3 = FUNC_1(VAR_1, "r");
        }
        if (!VAR_3) {
                return ((void*)0);
        }

 VAR_2 = FUNC_2(VAR_3);
 FUNC_0(VAR_3);
 return VAR_2;
}
