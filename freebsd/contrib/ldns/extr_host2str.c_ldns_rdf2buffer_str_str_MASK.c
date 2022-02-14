
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__* FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;

ldns_status
FUNC_5(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{
        if(FUNC_4(VAR_2) < 1) {
                return VAR_0;
        }
        if((int)FUNC_4(VAR_2) < (int)FUNC_3(VAR_2)[0] + 1) {
                return VAR_0;
        }
 FUNC_0(VAR_1, "\"");
 FUNC_2(VAR_1,
   FUNC_3(VAR_2)[0], FUNC_3(VAR_2) + 1);
 FUNC_0(VAR_1, "\"");
 return FUNC_1(VAR_1);
}
