
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_resolver ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 () ;
 scalar_t__ FUNC_1 (int **,int *) ;

__attribute__((used)) static ldns_status
FUNC_2(ldns_resolver **VAR_2) {
    if (FUNC_1(VAR_2, ((void*)0)) == VAR_1 ||
        (*VAR_2 = FUNC_0()) != ((void*)0))
        return VAR_1;
    return VAR_0;
}
