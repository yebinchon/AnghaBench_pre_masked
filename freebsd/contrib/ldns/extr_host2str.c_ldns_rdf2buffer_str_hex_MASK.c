
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*) ;
 size_t FUNC_3 (int const*) ;

ldns_status
FUNC_4(ldns_buffer *VAR_0, const ldns_rdf *VAR_1)
{
 size_t VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_1); VAR_2++) {
  FUNC_0(VAR_0, "%02x", FUNC_2(VAR_1)[VAR_2]);
 }

 return FUNC_1(VAR_0);
}
