
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

ldns_status
FUNC_4(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{
 if (FUNC_3(VAR_2) != 8) {
  return VAR_0;
 }
 FUNC_0(VAR_1,"%.2x-%.2x-%.2x-%.2x-%.2x-%.2x-%.2x-%.2x",
    FUNC_2(VAR_2)[0], FUNC_2(VAR_2)[1],
    FUNC_2(VAR_2)[2], FUNC_2(VAR_2)[3],
    FUNC_2(VAR_2)[4], FUNC_2(VAR_2)[5],
    FUNC_2(VAR_2)[6], FUNC_2(VAR_2)[7]);
 return FUNC_1(VAR_1);
}
