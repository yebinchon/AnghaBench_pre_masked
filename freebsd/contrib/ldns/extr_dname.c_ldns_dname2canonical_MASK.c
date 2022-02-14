
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int ldns_rdf ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (int const*) ;

void
FUNC_4(const ldns_rdf *VAR_1)
{
 uint8_t *VAR_2;
 uint16_t VAR_3;

 if (FUNC_2(VAR_1) != VAR_0) {
  return;
 }

 VAR_2 = (uint8_t*)FUNC_1(VAR_1);
 for (VAR_3 = 0; VAR_3 < FUNC_3(VAR_1); VAR_3++, VAR_2++) {
  *VAR_2 = (uint8_t)FUNC_0((int)*VAR_2);
 }
}
