
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
typedef scalar_t__ ldns_status ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr_class ;
typedef int ldns_resolver ;
typedef int const ldns_rdf ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int const*,int ,int ) ;
 int * FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct timeval) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int *) ;
 int const** FUNC_8 (int *) ;
 size_t* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int **,int *,int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int const**) ;
 int FUNC_13 (int *,size_t*) ;
 scalar_t__ FUNC_14 (int **,int *) ;
 scalar_t__ FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static ldns_status
FUNC_17(ldns_pkt **VAR_4, ldns_resolver *VAR_5,
    const ldns_rdf *VAR_6, ldns_rr_type VAR_7, ldns_rr_class VAR_8,
    uint16_t VAR_9, uint32_t VAR_10, int VAR_11,
    bool VAR_12) {
    ldns_status VAR_13 = VAR_3;
    ldns_pkt *VAR_14;
    struct timeval VAR_15;

    int VAR_16 = FUNC_7(VAR_5);
    ldns_rdf **VAR_17 = FUNC_8(VAR_5);
    size_t *VAR_18 = FUNC_9(VAR_5);

    FUNC_12(VAR_5, &VAR_17[VAR_11]);
    FUNC_13(VAR_5, &VAR_18[VAR_11]);
    FUNC_11(VAR_5, 1);







    VAR_14 = FUNC_2(FUNC_6(VAR_6), VAR_7, VAR_8, VAR_9);
    if (VAR_14 == ((void*)0)) {
        VAR_13 = VAR_2;
        goto done;
    }
    VAR_15.tv_sec = FUNC_16(((void*)0));
    VAR_15.tv_usec = 0;
    FUNC_5(VAR_14, VAR_15);
    FUNC_4(VAR_14);

    if (VAR_7 == VAR_0) {
        VAR_13 = FUNC_1(VAR_14,
            VAR_1, VAR_6, VAR_8, VAR_10);
        if (VAR_13 != VAR_3) goto done;
    }
    if (VAR_12) {
        VAR_13 = FUNC_10(VAR_4, VAR_5, VAR_14);
    } else {
        VAR_13 = FUNC_15(VAR_5, VAR_14, 0);
        if (VAR_13 != VAR_3) goto done;
        VAR_13 = FUNC_14(VAR_4, VAR_5);
        if (VAR_13 != VAR_3) goto done;
        FUNC_3(*VAR_4, FUNC_6(VAR_17[0]));
    }

done:
    FUNC_0(VAR_14);

    FUNC_12(VAR_5, VAR_17);
    FUNC_13(VAR_5, VAR_18);
    FUNC_11(VAR_5, VAR_16);
    return VAR_13;
}
