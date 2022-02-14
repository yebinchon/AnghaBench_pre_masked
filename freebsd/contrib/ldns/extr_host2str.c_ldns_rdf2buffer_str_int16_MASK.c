
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int ) ;

ldns_status
FUNC_4(ldns_buffer *VAR_0, const ldns_rdf *VAR_1)
{
 uint16_t VAR_2 = FUNC_3(FUNC_2(VAR_1));
 FUNC_0(VAR_0, "%lu", (unsigned long) VAR_2);
 return FUNC_1(VAR_0);
}
