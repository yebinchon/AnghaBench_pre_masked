
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;
typedef int ldns_buffer ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,scalar_t__*,size_t) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__* FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;
 size_t FUNC_7 (int const*) ;

ldns_status
FUNC_8(ldns_buffer *VAR_1, const ldns_rdf *VAR_2)
{
 size_t VAR_3;
 uint8_t *VAR_4;

 if (FUNC_6(VAR_2) == VAR_0) {
  if (FUNC_1(VAR_1, FUNC_7(VAR_2))) {
   VAR_4 = FUNC_5(VAR_2);
   for (VAR_3 = 0; VAR_3 < FUNC_7(VAR_2); VAR_3++) {
    FUNC_4(VAR_1,
        (uint8_t) FUNC_0((int)VAR_4[VAR_3]));
   }
  }
 } else {

  if (FUNC_1(VAR_1, FUNC_7(VAR_2))) {
   FUNC_3(VAR_1,
         FUNC_5(VAR_2),
         FUNC_7(VAR_2));
  }
 }
 return FUNC_2(VAR_1);
}
