
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
typedef int ldns_rdf ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (int *,int *,size_t) ;

__attribute__((used)) static bool
FUNC_3(ldns_rr_type VAR_0, ldns_rr *VAR_1, ldns_rdf *VAR_2, size_t VAR_3)
{
        ldns_rdf *VAR_4;
        if (!VAR_1 || FUNC_1(VAR_1) != VAR_0) {
                return 0;
        }
        VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
  FUNC_0(VAR_4);
        return 1;
}
