
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rdf ;


 int VAR_0 ;
 char* FUNC_0 (int) ;
 int * FUNC_1 (char*) ;
 scalar_t__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char*,char*,...) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static ldns_rdf *
FUNC_5(ldns_rdf *VAR_1, const char *VAR_2) {
    char *VAR_3;
    int VAR_4, VAR_5;

    VAR_5 = FUNC_4(VAR_2);
    VAR_3 = FUNC_0(VAR_0*4 + VAR_5 + 1);
    for (VAR_5 = VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        VAR_5 += FUNC_3(&VAR_3[VAR_5], "%d.",
            (int)FUNC_2(VAR_1)[VAR_0 - VAR_4 - 1]);
    FUNC_3(&VAR_3[VAR_5], "%s", VAR_2);
    return FUNC_1(VAR_3);
}
