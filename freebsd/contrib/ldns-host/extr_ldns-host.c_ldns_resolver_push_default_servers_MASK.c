
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_resolver ;
typedef int ldns_rdf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int **,char*) ;
 int FUNC_3 (int **,char*) ;

__attribute__((used)) static ldns_status
FUNC_4(ldns_resolver *VAR_1) {
    ldns_status VAR_2;
    ldns_rdf *VAR_3;

    if ((VAR_2 = FUNC_2(&VAR_3, "127.0.0.1")) != VAR_0 ||
        (VAR_2 = FUNC_1(VAR_1, VAR_3)) != VAR_0)
        return FUNC_0(VAR_3), VAR_2;
    FUNC_0(VAR_3);
    if ((VAR_2 = FUNC_3(&VAR_3, "::1")) != VAR_0 ||
        (VAR_2 = FUNC_1(VAR_1, VAR_3)) != VAR_0)
        return FUNC_0(VAR_3), VAR_2;
    FUNC_0(VAR_3);
    return VAR_0;
}
