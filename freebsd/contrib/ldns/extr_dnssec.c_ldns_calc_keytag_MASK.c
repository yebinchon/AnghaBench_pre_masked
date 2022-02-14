
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int ldns_rr ;
typedef int ldns_buffer ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int ,size_t) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *,int const*) ;

uint16_t
FUNC_7(const ldns_rr *VAR_3)
{
 uint16_t VAR_4;
 ldns_buffer *VAR_5;
 size_t VAR_6;

 if (!VAR_3) {
  return 0;
 }

 if (FUNC_5(VAR_3) != VAR_1 &&
     FUNC_5(VAR_3) != VAR_2
     ) {
  return 0;
 }


 VAR_5 = FUNC_2(VAR_0);
 if (!VAR_5) {
  return 0;
 }
 (void)FUNC_6(VAR_5, VAR_3);

 VAR_6= FUNC_3(VAR_5);

 VAR_4 = FUNC_4(FUNC_0(VAR_5), VAR_6);
 FUNC_1(VAR_5);
 return VAR_4;
}
