
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_buffer ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*,scalar_t__) ;

ldns_status
FUNC_4(ldns_buffer *VAR_0, const ldns_rr *VAR_1)
{
 uint16_t VAR_2;


 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_1); VAR_2++) {
  (void) FUNC_1(VAR_0, FUNC_3(VAR_1,VAR_2));
 }
 return FUNC_0(VAR_0);
}
