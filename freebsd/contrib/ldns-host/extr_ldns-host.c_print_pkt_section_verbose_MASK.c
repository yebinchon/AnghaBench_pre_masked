
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_0, ldns_rr_list *VAR_1) {
    int VAR_2, VAR_3 = FUNC_1(VAR_1);

    if (VAR_3 == 0)
        return;
    FUNC_3(";; %s SECTION:\n", VAR_0);
    for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
        FUNC_2(FUNC_0(VAR_1, VAR_2));
    FUNC_3("\n");
}
