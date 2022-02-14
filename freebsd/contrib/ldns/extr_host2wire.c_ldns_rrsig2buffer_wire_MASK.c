
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_status ;
typedef int ldns_rr ;
typedef int ldns_buffer ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*,int) ;

ldns_status
FUNC_5(ldns_buffer *VAR_2, const ldns_rr *VAR_3)
{
 uint16_t VAR_4;


 if (FUNC_2(VAR_3) != VAR_0) {
  return VAR_1;
 }



 for (VAR_4 = 0; VAR_4 < FUNC_3(VAR_3) - 1; VAR_4++) {
  (void) FUNC_1(VAR_2,
    FUNC_4(VAR_3, VAR_4));
 }

 return FUNC_0(VAR_2);
}
