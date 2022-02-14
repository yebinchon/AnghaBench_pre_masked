
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_buffer ;
typedef int ldns_algorithm ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

char *
FUNC_4(ldns_algorithm VAR_1)
{
 char *VAR_2;
 ldns_buffer *VAR_3;

 VAR_3 = FUNC_3(10);
 if (!VAR_3) {
  return ((void*)0);
 }

 VAR_2 = ((void*)0);
 if (FUNC_0(VAR_3, VAR_1)
     == VAR_0) {
  VAR_2 = FUNC_1(VAR_3);
 }

 FUNC_2(VAR_3);
 return VAR_2;
}
