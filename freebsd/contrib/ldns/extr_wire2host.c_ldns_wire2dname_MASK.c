
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef size_t uint16_t ;
typedef int ldns_status ;
typedef int ldns_rdf ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * FUNC_0 (int ,size_t,int*) ;
 size_t FUNC_1 (int*) ;
 int FUNC_2 (int*,int const*,int) ;

ldns_status
FUNC_3(ldns_rdf **VAR_11, const uint8_t *VAR_12, size_t VAR_13, size_t *VAR_14)
{
 uint8_t VAR_15;
 uint16_t VAR_16;
 uint8_t VAR_17[2];
 size_t VAR_18 = 0;
 size_t VAR_19 = 0;
 size_t VAR_20 = 0;
 uint8_t VAR_21[VAR_0];
 unsigned int VAR_22 = 0;

 if (VAR_14 == ((void*)0)) {
  return VAR_10;
 }
 if (*VAR_14 >= VAR_13) {
  return VAR_9;
 }
 VAR_15 = VAR_12[*VAR_14];
 while (VAR_15 > 0) {

  while (VAR_15 >= 192) {
   if (VAR_20 == 0) {
    VAR_20 = *VAR_14 + 2;
   }

   VAR_22++;


   if (*VAR_14 + 2 > VAR_13) {
    return VAR_9;
   }
   VAR_17[0] = VAR_12[*VAR_14] & 63;
   VAR_17[1] = VAR_12[*VAR_14 + 1];
   VAR_16 = FUNC_1(VAR_17);

   if (VAR_16 == 0) {
    return VAR_5;
   } else if (VAR_16 >= VAR_13) {
    return VAR_5;
   } else if (VAR_22 > VAR_2) {
    return VAR_5;
   }
   *VAR_14 = VAR_16;
   VAR_15 = VAR_12[*VAR_14];
  }
  if(VAR_15 == 0)
   break;
  if (VAR_15 > VAR_1) {
   return VAR_6;
  }
  if (*VAR_14 + 1 + VAR_15 > VAR_13) {
   return VAR_6;
  }


  if (VAR_18 + 1 > VAR_0) {
   return VAR_4;
  }
  VAR_21[VAR_18] = VAR_15;
  if (VAR_15 > 0) {
   VAR_18++;
  }
  *VAR_14 = *VAR_14 + 1;
  if (VAR_18 + VAR_15 > VAR_0) {
   return VAR_4;
  }
  FUNC_2(&VAR_21[VAR_18], &VAR_12[*VAR_14], VAR_15);
  VAR_19 += VAR_15 + 1;
  VAR_18 += VAR_15;
  *VAR_14 = *VAR_14 + VAR_15;

  if (*VAR_14 < VAR_13) {
   VAR_15 = VAR_12[*VAR_14];
  }
 }

 if (VAR_20 > 0) {
  *VAR_14 = VAR_20;
 } else {
  *VAR_14 = *VAR_14 + 1;
 }

 if (VAR_18 >= VAR_0) {
  return VAR_4;
 }

 VAR_21[VAR_18] = 0;
 VAR_18++;

 *VAR_11 = FUNC_0(VAR_3,
   (uint16_t) VAR_18, VAR_21);
 if (!*VAR_11) {
  return VAR_7;
 }
 return VAR_8;
}
