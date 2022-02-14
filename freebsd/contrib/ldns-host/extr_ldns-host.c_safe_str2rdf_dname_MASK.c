
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rdf ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char const*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int **,char const*) ;

__attribute__((used)) static ldns_rdf*
FUNC_3(const char *VAR_1) {
    ldns_rdf *VAR_2;
    ldns_status VAR_3;

    if ((VAR_3 = FUNC_2(&VAR_2, VAR_1)) != VAR_0) {
        FUNC_0(1, "'%s' is not a legal name (%s)",
            VAR_1, FUNC_1(VAR_3));
    }
    return VAR_2;
}
