
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int * FUNC_1 (int ,int,scalar_t__*) ;
 scalar_t__ FUNC_2 (char const*,char const**) ;

ldns_status
FUNC_3(ldns_rdf **VAR_4,const char *VAR_5)
{
        uint32_t VAR_6;
        const char *VAR_7;


        VAR_6 = FUNC_2(VAR_5, &VAR_7);

        if (*VAR_7 != 0) {
  return VAR_1;
        } else {
                VAR_6 = (uint32_t) FUNC_0(VAR_6);
  *VAR_4 = FUNC_1(
   VAR_0, sizeof(uint32_t), &VAR_6);
        }
 return *VAR_4?VAR_3:VAR_2;
}
