
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char*,int) ;
 int FUNC_1 (int *,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const*) ;

ldns_status
FUNC_4(ldns_buffer *VAR_2, const ldns_rdf *VAR_3)
{
 char VAR_4[VAR_1];

 if (FUNC_0(VAR_0, FUNC_3(VAR_3), VAR_4, VAR_1)) {
  FUNC_1(VAR_2, "%s", VAR_4);
 }
 return FUNC_2(VAR_2);
}
