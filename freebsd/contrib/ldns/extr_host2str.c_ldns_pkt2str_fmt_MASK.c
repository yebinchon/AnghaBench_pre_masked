
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ldns_pkt ;
typedef int ldns_output_format ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int const*,int const*) ;

char *
FUNC_4(const ldns_output_format *VAR_2, const ldns_pkt *VAR_3)
{
 char *VAR_4 = ((void*)0);
 ldns_buffer *VAR_5 = FUNC_2(VAR_0);

 if (!VAR_5) {
  return ((void*)0);
 }
 if (FUNC_3(VAR_5, VAR_2, VAR_3)
          == VAR_1) {

  VAR_4 = FUNC_0(VAR_5);
 }

 FUNC_1(VAR_5);
 return VAR_4;
}
