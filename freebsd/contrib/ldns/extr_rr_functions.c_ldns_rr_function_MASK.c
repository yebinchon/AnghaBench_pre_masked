
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 scalar_t__ FUNC_0 (int const*) ;
 int * FUNC_1 (int const*,size_t) ;

__attribute__((used)) static ldns_rdf *
FUNC_2(ldns_rr_type VAR_0, const ldns_rr *VAR_1, size_t VAR_2)
{
        if (!VAR_1 || FUNC_0(VAR_1) != VAR_0) {
                return ((void*)0);
        }
        return FUNC_1(VAR_1, VAR_2);
}
