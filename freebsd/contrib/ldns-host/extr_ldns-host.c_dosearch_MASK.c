
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_resolver ;
typedef int ldns_rdf ;
typedef int ldns_pkt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,int *,int *) ;
 int * FUNC_2 (int *,int *,int **,int,int) ;

__attribute__((used)) static bool
FUNC_3(ldns_resolver *VAR_5, ldns_rdf *VAR_6, bool VAR_7) {
    ldns_pkt *VAR_8;
    ldns_rdf *VAR_9;

    VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_8, VAR_7, 1);
    FUNC_1(VAR_5, VAR_9 != ((void*)0) ? VAR_9 : VAR_6, VAR_8);
    return VAR_3 != VAR_2 ? (VAR_9 != ((void*)0)) :
        (VAR_9 != ((void*)0)) &&
        (VAR_4 = VAR_0, FUNC_0(VAR_5, VAR_9)) &&
        (VAR_4 = VAR_1, FUNC_0(VAR_5, VAR_9));
}
