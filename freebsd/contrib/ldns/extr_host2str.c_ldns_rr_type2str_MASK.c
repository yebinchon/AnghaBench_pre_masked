
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_rr_type ;
typedef int ldns_buffer ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int const) ;

char *
FUNC_4(const ldns_rr_type VAR_1)
{
 char *VAR_2;
 ldns_buffer *VAR_3;

 VAR_3 = FUNC_2(10);
 if (!VAR_3) {
  return ((void*)0);
 }

 VAR_2 = ((void*)0);
 if (FUNC_3(VAR_3, VAR_1) == VAR_0) {
  VAR_2 = FUNC_0(VAR_3);
 }

 FUNC_1(VAR_3);
 return VAR_2;
}
