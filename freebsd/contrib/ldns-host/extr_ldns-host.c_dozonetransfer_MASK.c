
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ldns_rr_type ;
typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,size_t) ;
 size_t FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int **,int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (char*) ;
 int FUNC_16 (int *,int *,int *) ;
 int * FUNC_17 (int *,int *,int **,int,int) ;

__attribute__((used)) static bool
FUNC_18(ldns_resolver *VAR_10, ldns_rdf *VAR_11, bool VAR_12) {
    ldns_pkt *VAR_13, *VAR_14;
    ldns_rdf *VAR_15;
    ldns_rr_type VAR_16;
    ldns_rr_list *VAR_17;
    ldns_rr *VAR_18;
    size_t VAR_19, VAR_20 = 0;
    uint32_t VAR_21 = 0;

    VAR_16 = VAR_9;
    VAR_9 = (VAR_8 == VAR_5) ? VAR_1 : VAR_2;
    VAR_15 = FUNC_17(VAR_10, VAR_11, &VAR_13, VAR_12, 0);

    for (;;) {
        VAR_17 = FUNC_8(FUNC_0(VAR_13));
        FUNC_2(VAR_13, VAR_16);
        FUNC_16(VAR_10, VAR_15 != ((void*)0) ? VAR_15 : VAR_11, VAR_13);
        if ((VAR_15 == ((void*)0)) ||
                (FUNC_4(VAR_13) != VAR_0)) {
            FUNC_15("; Transfer failed.\n");
            FUNC_13(VAR_10);
            return 0;
        }
        for (VAR_19 = 0; VAR_19 < FUNC_11(VAR_17); VAR_19++) {
            VAR_18 = FUNC_10(VAR_17, VAR_19);
            if (VAR_20 == 0) {
                if (FUNC_7(VAR_18) != VAR_3) {
                    FUNC_15("; Transfer failed. "
                           "Didn't start with SOA answer.\n");
                    FUNC_13(VAR_10);
                    return 0;
                }
                VAR_21 = FUNC_12(VAR_18);
                if ((VAR_8 == VAR_6) && (VAR_21 <= VAR_7)) {
                    FUNC_13(VAR_10);
                    return 1;
                }
            }
            if (FUNC_7(VAR_18) == VAR_3) {
                VAR_20 = VAR_20 < 2 ? VAR_20 + 1 : 1;
                if ((VAR_20 == 2) &&
                        (FUNC_12(VAR_18) == VAR_21)) {
                    FUNC_13(VAR_10);
                    return 1;
                }
            }
        }
        if (FUNC_14(&VAR_14, VAR_10) != VAR_4) {
            FUNC_15("; Transfer failed.\n");
            return 0;
        }
        FUNC_5(VAR_14,
                FUNC_6(FUNC_1(VAR_13)));
        FUNC_3(VAR_13);
        FUNC_9(VAR_17);
        VAR_13 = VAR_14;
    }
}
