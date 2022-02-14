
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static void
FUNC_6(ldns_pkt *VAR_6, ldns_rr_type VAR_7) {
    int VAR_8, VAR_9, VAR_10;
    ldns_rr_list *VAR_11;
    ldns_rr *VAR_12;
    ldns_rr_type VAR_13;

    VAR_11 = FUNC_0(VAR_6);
    VAR_10 = FUNC_3(VAR_11);
    for (VAR_8 = VAR_9 = 0; VAR_8 < VAR_10; VAR_8++) {
        VAR_12 = FUNC_2(VAR_11, VAR_8);
        VAR_13 = FUNC_1(VAR_12);
        if (VAR_7 == VAR_2 ||
            VAR_7 == VAR_13 ||
            (VAR_7 == VAR_3 &&
                (VAR_13 == VAR_0 ||
                VAR_13 == VAR_1 ||
                VAR_13 == VAR_4 ||
                VAR_13 == VAR_5)))
            FUNC_4(VAR_11, VAR_12, VAR_9++);
    }
    FUNC_5(VAR_11, VAR_9);
}
