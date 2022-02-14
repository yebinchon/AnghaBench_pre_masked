
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rdf ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int const*) ;

char *
FUNC_4(const ldns_rdf *VAR_2)
{
 char *VAR_3 = ((void*)0);
 ldns_buffer *VAR_4 = FUNC_2(VAR_0);

 if (!VAR_4) {
  return ((void*)0);
 }
 if (FUNC_3(VAR_4, VAR_2) == VAR_1) {

  VAR_3 = FUNC_0(VAR_4);
 }
 FUNC_1(VAR_4);
 return VAR_3;
}
