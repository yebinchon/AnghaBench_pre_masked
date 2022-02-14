
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_list ;
typedef int ldns_rr ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int ** FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *,int *,int ,int ) ;
 int * FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,size_t) ;
 size_t FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_11 (int *,int *,int **,int,int) ;

__attribute__((used)) static bool
FUNC_12(ldns_resolver *VAR_10, ldns_rdf *VAR_11, bool VAR_12) {
    ldns_rr_list *VAR_13, **VAR_14;
    ldns_rdf *VAR_15, *VAR_16;
    ldns_pkt *VAR_17;
    ldns_rr *VAR_18;
    size_t VAR_19, VAR_20, VAR_21, VAR_22;

    if ((VAR_15 = FUNC_11(VAR_10, VAR_11, &VAR_17, VAR_12, 1)) == ((void*)0))
        return 0;

    VAR_13 = FUNC_3(VAR_17);
    VAR_22 = FUNC_9(VAR_13);
    VAR_14 = FUNC_0(VAR_22*sizeof(*VAR_14));
    for (VAR_21 = 0, VAR_19 = 0; VAR_19 < VAR_22; VAR_19++)
        if ((VAR_16 = FUNC_10(FUNC_8(VAR_13, VAR_19))) != ((void*)0))
            VAR_14[VAR_21++] = FUNC_2(VAR_10,
                VAR_16, VAR_2, 0);

    VAR_7 = 0;
    VAR_8 = 0;
    VAR_9 = VAR_5;
    for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
        VAR_22 = FUNC_9(VAR_14[VAR_19]);
        for (VAR_20 = 0; VAR_20 < VAR_22; VAR_20++) {
            FUNC_6(VAR_10);
            VAR_18 = FUNC_8(VAR_14[VAR_19], VAR_20);
            if ((FUNC_4(VAR_10) == VAR_0 &&
                FUNC_7(VAR_18) == VAR_4) ||
                (FUNC_4(VAR_10) == VAR_1 &&
                FUNC_7(VAR_18) == VAR_3))
                continue;
            if (FUNC_5(VAR_10, VAR_18) == VAR_6)

                FUNC_1(VAR_10, VAR_15);
        }
    }
    return 0;
}
