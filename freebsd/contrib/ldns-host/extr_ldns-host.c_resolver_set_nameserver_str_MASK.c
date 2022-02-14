
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_resolver ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int * FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;

__attribute__((used)) static void
FUNC_5(ldns_resolver *VAR_1, const char *VAR_2) {
    ldns_rdf *VAR_3;

    FUNC_3(VAR_1);
    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3) {
        if (FUNC_2(VAR_1, VAR_3) != VAR_0)
            FUNC_0(1, "couldn't push a nameserver address");
    } else
        FUNC_4(VAR_1, VAR_2);
}
