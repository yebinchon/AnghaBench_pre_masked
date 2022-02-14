
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_class ;
typedef int ldns_buffer ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int const) ;

char *
FUNC_4(const ldns_rr_class VAR_1)
{
 ldns_buffer *VAR_2;
 char *VAR_3;

 VAR_2 = FUNC_2(10);
 if (!VAR_2) {
  return ((void*)0);
 }

 VAR_3 = ((void*)0);
 if (FUNC_3(VAR_2, VAR_1) == VAR_0) {
  VAR_3 = FUNC_0(VAR_2);
 }
 FUNC_1(VAR_2);
 return VAR_3;
}
