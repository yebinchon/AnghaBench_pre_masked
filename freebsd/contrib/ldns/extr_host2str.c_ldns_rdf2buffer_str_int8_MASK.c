
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (int *) ;
 scalar_t__* FUNC_2 (int const*) ;

ldns_status
FUNC_3(ldns_buffer *VAR_0, const ldns_rdf *VAR_1)
{
 uint8_t VAR_2 = FUNC_2(VAR_1)[0];
 FUNC_0(VAR_0, "%lu", (unsigned long) VAR_2);
 return FUNC_1(VAR_0);
}
