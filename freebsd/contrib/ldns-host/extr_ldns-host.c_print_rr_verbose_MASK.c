
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12(ldns_rr *VAR_0) {
    bool VAR_1 = FUNC_2(VAR_0);
    int VAR_2 = FUNC_4(VAR_0);
    int VAR_3, VAR_4;


    VAR_4 = VAR_1 ? FUNC_11(";") : 0;
    VAR_4 = FUNC_8(FUNC_3(VAR_0));
    if (!VAR_1) {
        VAR_4 += FUNC_7(VAR_4, 24);
        VAR_4 += FUNC_11("%d", FUNC_6(VAR_0));
    }
    VAR_4 += FUNC_7(VAR_4, 32);
    VAR_4 += FUNC_9(FUNC_0(VAR_0));
    VAR_4 += FUNC_7(VAR_4, 40);
    VAR_4 += FUNC_10(FUNC_1(VAR_0));
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_3 == 0) FUNC_7(VAR_4, 48);
        else FUNC_11(" ");
        FUNC_8(FUNC_5(VAR_0, VAR_3));
    }
    FUNC_11("\n");
}
