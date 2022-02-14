
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ldns_status ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int **,char const*) ;
 size_t FUNC_1 (char const*) ;

ldns_status
FUNC_2(ldns_rdf **VAR_1, const char *VAR_2)
{
    size_t VAR_3, VAR_4;
    char* VAR_5 = (char*) VAR_2;
 ldns_status VAR_6;


 VAR_3 = FUNC_1(VAR_2);
 for (VAR_4=0; VAR_4 < VAR_3; VAR_4++) {
  if (VAR_5[VAR_4] == '.')
   VAR_5[VAR_4] = ' ';
 }
 VAR_6 = FUNC_0(VAR_1, VAR_2);
    if (VAR_6 != VAR_0) {
  ;
 }
 return VAR_6;
}
