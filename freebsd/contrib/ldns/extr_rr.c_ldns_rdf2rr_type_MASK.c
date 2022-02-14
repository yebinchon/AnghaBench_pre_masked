
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;

ldns_rr_type
FUNC_2(const ldns_rdf *VAR_1)
{
        ldns_rr_type VAR_2;

        if (!VAR_1) {
                return 0;
        }

        if (FUNC_1(VAR_1) != VAR_0) {
                return 0;
        }

        VAR_2 = (ldns_rr_type) FUNC_0(VAR_1);
        return VAR_2;
}
