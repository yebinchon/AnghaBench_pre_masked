
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 int * FUNC_0 (int *) ;
 int ** FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,int **,int) ;
 int * FUNC_4 (int *,int *) ;

__attribute__((used)) static ldns_rdf *
FUNC_5(ldns_resolver *VAR_0, ldns_rdf *VAR_1, ldns_pkt **VAR_2,
    bool VAR_3, bool VAR_4) {
    ldns_rdf *VAR_5, **VAR_6;
    int VAR_7, VAR_8;

    if (VAR_3 && FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4))
        return VAR_1;

    if ((VAR_5 = FUNC_0(VAR_0)) != ((void*)0)) {
        VAR_5 = FUNC_4(VAR_1, VAR_5);
        if (FUNC_3(VAR_0, VAR_5, VAR_2, VAR_4))
            return VAR_5;
    }

    VAR_6 = FUNC_1(VAR_0);
    VAR_8 = FUNC_2(VAR_0);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        VAR_5 = FUNC_4(VAR_1, VAR_6[VAR_7]);
        if (FUNC_3(VAR_0, VAR_5, VAR_2, VAR_4))
            return VAR_5;
    }

    if (!VAR_3 && FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4))
        return VAR_1;

    return ((void*)0);
}
