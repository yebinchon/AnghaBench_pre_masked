
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ldns_status ;
typedef int ldns_rr_class ;
typedef int ldns_rr ;
typedef int const ldns_rdf ;
typedef int ldns_pkt_section ;
typedef int ldns_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,int *) ;
 int const* FUNC_2 (int const*) ;
 int const* FUNC_3 (int ,int,scalar_t__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (int *,int const*,int) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static ldns_status
FUNC_11(ldns_pkt *VAR_6, ldns_pkt_section VAR_7,
    const ldns_rdf *VAR_8, ldns_rr_class VAR_9, uint32_t VAR_10) {
    ldns_rdf *VAR_11;
    ldns_rr *VAR_12;
    uint32_t VAR_13;

    if ((VAR_12 = FUNC_5(VAR_3)) == ((void*)0))
        return VAR_4;
    FUNC_7(VAR_12, VAR_9);
    FUNC_8(VAR_12, FUNC_2(VAR_8));
    FUNC_10(VAR_12, 0);

    VAR_13 = 0;
    if ((VAR_11 = FUNC_3(VAR_0, 1, &VAR_13)) == ((void*)0))
        goto memerr;
    FUNC_9(VAR_12, VAR_11, 0);
    FUNC_9(VAR_12, FUNC_2(VAR_11), 1);

    VAR_13 = FUNC_0(VAR_10);
    if ((VAR_11 = FUNC_3(VAR_1, 4, &VAR_13)) == ((void*)0))
        goto memerr;
    FUNC_9(VAR_12, VAR_11, 2);

    VAR_13 = 0;
    if ((VAR_11 = FUNC_3(VAR_2, 4, &VAR_13)) == ((void*)0))
        goto memerr;
    FUNC_9(VAR_12, VAR_11, 3);
    FUNC_9(VAR_12, FUNC_2(VAR_11), 4);
    FUNC_9(VAR_12, FUNC_2(VAR_11), 5);
    FUNC_9(VAR_12, FUNC_2(VAR_11), 6);

    if (FUNC_6(VAR_12, 1) == ((void*)0) || FUNC_6(VAR_12, 4) == ((void*)0) ||
        FUNC_6(VAR_12, 5) == ((void*)0) || FUNC_6(VAR_12, 6) == ((void*)0) ||
        !FUNC_1(VAR_6, VAR_7, VAR_12))
        goto memerr;
    return VAR_5;

memerr:
    FUNC_4(VAR_12);
    return VAR_4;
}
