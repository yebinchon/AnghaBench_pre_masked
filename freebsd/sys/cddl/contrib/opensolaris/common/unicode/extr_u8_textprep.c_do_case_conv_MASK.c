
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef size_t uchar_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {size_t tbl_id; size_t base; } ;
struct TYPE_3__ {size_t tbl_id; size_t base; } ;


 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t*** VAR_2 ;
 size_t** VAR_3 ;
 TYPE_2__*** VAR_4 ;
 size_t*** VAR_5 ;
 size_t** VAR_6 ;
 TYPE_1__*** VAR_7 ;
 size_t*** VAR_8 ;
 size_t** VAR_9 ;

__attribute__((used)) static size_t
FUNC_2(int VAR_10, uchar_t *VAR_11, uchar_t *VAR_12, int VAR_13, boolean_t VAR_14)
{
 size_t VAR_15;
 uint16_t VAR_16 = 0;
 uint16_t VAR_17 = 0;
 uint16_t VAR_18 = 0;
 uint16_t VAR_19;
 uint16_t VAR_20;
 uint16_t VAR_21 = 0;
 size_t VAR_22;
 size_t VAR_23;






 if (VAR_13 == 2) {
  VAR_18 = VAR_11[0] = VAR_12[0];
  VAR_21 = VAR_11[1] = VAR_12[1];
 } else if (VAR_13 == 3) {
  VAR_17 = VAR_11[0] = VAR_12[0];
  VAR_18 = VAR_11[1] = VAR_12[1];
  VAR_21 = VAR_11[2] = VAR_12[2];
 } else if (VAR_13 == 4) {
  VAR_16 = VAR_11[0] = VAR_12[0];
  VAR_17 = VAR_11[1] = VAR_12[1];
  VAR_18 = VAR_11[2] = VAR_12[2];
  VAR_21 = VAR_11[3] = VAR_12[3];
 } else {

  if (VAR_14)
   *VAR_11 = FUNC_1(*VAR_12);
  else
   *VAR_11 = FUNC_0(*VAR_12);
  VAR_11[1] = '\0';

  return (1);
 }
 VAR_11[VAR_13] = '\0';




 VAR_16 = VAR_3[VAR_10][VAR_16];
 if (VAR_16 == VAR_1)
  return ((size_t)VAR_13);

 VAR_17 = VAR_2[VAR_10][VAR_16][VAR_17];
 if (VAR_17 == VAR_1)
  return ((size_t)VAR_13);

 if (VAR_14) {
  VAR_19 = VAR_7[VAR_10][VAR_17][VAR_18].tbl_id;
  if (VAR_19 == VAR_1)
   return ((size_t)VAR_13);

  VAR_22 = VAR_8[VAR_10][VAR_19][VAR_21];
  VAR_23 = VAR_8[VAR_10][VAR_19][VAR_21 + 1];


  if (VAR_22 >= VAR_23 || (VAR_23 - VAR_22) > VAR_0)
   return ((size_t)VAR_13);

  VAR_20 = VAR_7[VAR_10][VAR_17][VAR_18].base;

  for (VAR_15 = 0; VAR_22 < VAR_23; VAR_22++)
   VAR_11[VAR_15++] = VAR_9[VAR_10][VAR_20 + VAR_22];
 } else {
  VAR_19 = VAR_4[VAR_10][VAR_17][VAR_18].tbl_id;
  if (VAR_19 == VAR_1)
   return ((size_t)VAR_13);

  VAR_22 = VAR_5[VAR_10][VAR_19][VAR_21];
  VAR_23 = VAR_5[VAR_10][VAR_19][VAR_21 + 1];

  if (VAR_22 >= VAR_23 || (VAR_23 - VAR_22) > VAR_0)
   return ((size_t)VAR_13);

  VAR_20 = VAR_4[VAR_10][VAR_17][VAR_18].base;

  for (VAR_15 = 0; VAR_22 < VAR_23; VAR_22++)
   VAR_11[VAR_15++] = VAR_6[VAR_10][VAR_20 + VAR_22];
 }




 if (VAR_15 == 0)
  return ((size_t)VAR_13);

 VAR_11[VAR_15] = '\0';

 return (VAR_15);
}
