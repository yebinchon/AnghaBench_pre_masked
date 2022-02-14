
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef scalar_t__ ldns_pkt_rcode ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,int *,int *,int ,int ,int ,int ,int,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static bool
FUNC_9(ldns_resolver *VAR_10, ldns_rdf *VAR_11, ldns_pkt **VAR_12, bool VAR_13) {
    ldns_status VAR_14;
    ldns_pkt_rcode VAR_15;
    int VAR_16, VAR_17;

    if (VAR_9) {
        FUNC_8("Trying \"");
        FUNC_7(VAR_11);
        FUNC_8("\"\n");
    }
    for (VAR_17 = FUNC_3(VAR_10), VAR_16 = 0; VAR_16 < VAR_17; VAR_16++) {
        VAR_14 = FUNC_4(VAR_12, VAR_10, VAR_11, VAR_8,
            VAR_7, VAR_6 ? VAR_2 : 0, VAR_5, VAR_16,
            VAR_13);
        if (VAR_14 != VAR_3) {
            *VAR_12 = ((void*)0);
            continue;
        }
        if (FUNC_2(*VAR_12) && !FUNC_6(VAR_10)) {
            if (VAR_9)
                FUNC_8(";; Truncated, retrying in TCP mode.\n");
            FUNC_5(VAR_10, 1);
            VAR_14 = FUNC_4(VAR_12, VAR_10, VAR_11, VAR_8,
                VAR_7, VAR_6 ? VAR_2 : 0, VAR_5, VAR_16,
                VAR_13);
            FUNC_5(VAR_10, 0);
            if (VAR_14 != VAR_3)
                continue;
        }
        VAR_15 = FUNC_1(*VAR_12);
        if (VAR_4 && VAR_15 == VAR_1 && VAR_17 > 1)
            continue;
        return VAR_15 == VAR_0;
    }
    if (*VAR_12 == ((void*)0)) {
        FUNC_8(";; connection timed out; no servers could be reached\n");
        FUNC_0(1);
    }
    return 0;
}
