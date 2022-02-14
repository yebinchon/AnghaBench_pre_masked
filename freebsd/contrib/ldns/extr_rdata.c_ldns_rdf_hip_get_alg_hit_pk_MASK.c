
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 size_t FUNC_2 (int *) ;
 size_t FUNC_3 (int*) ;

ldns_status
FUNC_4(ldns_rdf *VAR_5, uint8_t* VAR_6,
                            uint8_t *VAR_7, uint8_t** VAR_8,
                            uint16_t *VAR_9, uint8_t** VAR_10)
{
 uint8_t *VAR_11;
 size_t VAR_12;

 if (! VAR_5 || ! VAR_6 || ! VAR_8 || ! VAR_7 || ! VAR_10 || ! VAR_9) {
  return VAR_1;
 } else if (FUNC_1(VAR_5) != VAR_0) {
  return VAR_2;
 } else if ((VAR_12 = FUNC_2(VAR_5)) < 6) {
  return VAR_4;
 }
 VAR_11 = FUNC_0(VAR_5);
 *VAR_7 = VAR_11[0];
 *VAR_6 = VAR_11[1];
 *VAR_9 = FUNC_3(VAR_11 + 2);
 *VAR_8 = VAR_11 + 4;
 *VAR_10 = VAR_11 + 4 + *VAR_7;
 if (*VAR_7 == 0 || *VAR_9 == 0 ||
   VAR_12 < (size_t) *VAR_7 + *VAR_9 + 4) {
  return VAR_4;
 }
 return VAR_3;
}
