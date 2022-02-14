
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char uint32_t ;
typedef char uint16_t ;
typedef char uchar_t ;
typedef scalar_t__ u8_normalization_states_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_2__ {char tbl_id; char base; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 char VAR_3 ;
 scalar_t__ FUNC_1 (char) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (char) ;
 char VAR_5 ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int FUNC_4 (char,char,char,char) ;
 int FUNC_5 (char*,int,int,int,char) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 char VAR_15 ;
 char** VAR_16 ;
 char*** VAR_17 ;
 TYPE_1__*** VAR_18 ;
 size_t*** VAR_19 ;
 size_t*** VAR_20 ;
 size_t** VAR_21 ;

__attribute__((used)) static size_t
FUNC_6(size_t VAR_22, uchar_t *VAR_23, uchar_t *VAR_24, int VAR_25,
 boolean_t VAR_26, u8_normalization_states_t *VAR_27)
{
 uint16_t VAR_28 = 0;
 uint16_t VAR_29 = 0;
 uint16_t VAR_30 = 0;
 uint16_t VAR_31;
 uint16_t VAR_32;
 uint16_t VAR_33 = 0;
 size_t VAR_34;
 size_t VAR_35;
 size_t VAR_36;
 uint32_t VAR_37;

 if (VAR_25 == 2) {
  VAR_30 = VAR_23[0] = VAR_24[0];
  VAR_33 = VAR_23[1] = VAR_24[1];
  VAR_23[2] = '\0';
 } else if (VAR_25 == 3) {

  FUNC_4(VAR_37, VAR_24[0], VAR_24[1], VAR_24[2]);






  if (FUNC_3(VAR_37)) {
   VAR_37 -= VAR_6;

   VAR_28 = VAR_3 + VAR_37 / VAR_8;
   VAR_29 = VAR_5 + (VAR_37 % VAR_8)
       / VAR_7;
   VAR_30 = VAR_37 % VAR_7;

   FUNC_5(VAR_23, 0, 1, 2, VAR_28);
   FUNC_5(VAR_23, 3, 4, 5, VAR_29);
   if (VAR_30) {
    VAR_30 += VAR_4;
    FUNC_5(VAR_23, 6, 7, 8, VAR_30);

    VAR_23[9] = '\0';
    *VAR_27 = VAR_11;
    return (9);
   }

   VAR_23[6] = '\0';
   *VAR_27 = VAR_10;
   return (6);
  }

  VAR_29 = VAR_23[0] = VAR_24[0];
  VAR_30 = VAR_23[1] = VAR_24[1];
  VAR_33 = VAR_23[2] = VAR_24[2];
  VAR_23[3] = '\0';





  if (FUNC_0(VAR_37)) {
   *VAR_27 = VAR_9;
   return (3);
  }

  if (FUNC_2(VAR_37)) {
   if (*VAR_27 == VAR_9)
    *VAR_27 = VAR_10;
   else
    *VAR_27 = VAR_13;
   return (3);
  }

  if (FUNC_1(VAR_37)) {
   if (*VAR_27 == VAR_10)
    *VAR_27 = VAR_11;
   else
    *VAR_27 = VAR_12;
   return (3);
  }
 } else if (VAR_25 == 4) {
  VAR_28 = VAR_23[0] = VAR_24[0];
  VAR_29 = VAR_23[1] = VAR_24[1];
  VAR_30 = VAR_23[2] = VAR_24[2];
  VAR_33 = VAR_23[3] = VAR_24[3];
  VAR_23[4] = '\0';
 } else {




  VAR_23[0] = VAR_24[0];
  VAR_23[1] = '\0';
  *VAR_27 = VAR_14;
  return (1);
 }





 *VAR_27 = VAR_14;


 VAR_28 = VAR_16[VAR_22][VAR_28];
 if (VAR_28 == VAR_15)
  return ((size_t)VAR_25);

 VAR_29 = VAR_17[VAR_22][VAR_28][VAR_29];
 if (VAR_29 == VAR_15)
  return ((size_t)VAR_25);

 VAR_31 = VAR_18[VAR_22][VAR_29][VAR_30].tbl_id;
 if (VAR_31 == VAR_15)
  return ((size_t)VAR_25);






 if (VAR_31 >= VAR_0) {
  VAR_31 -= VAR_0;
  VAR_34 = VAR_19[VAR_22][VAR_31][VAR_33];
  VAR_35 = VAR_19[VAR_22][VAR_31][VAR_33 + 1];
 } else {
  VAR_34 = VAR_20[VAR_22][VAR_31][VAR_33];
  VAR_35 = VAR_20[VAR_22][VAR_31][VAR_33 + 1];
 }


 if (VAR_34 >= VAR_35)
  return ((size_t)VAR_25);
 VAR_32 = VAR_18[VAR_22][VAR_29][VAR_30].base;


 VAR_28 = VAR_21[VAR_22][VAR_32 + VAR_34];






 if (VAR_26) {

  if (VAR_28 < VAR_1)
   return ((size_t)VAR_25);

  VAR_34++;

  if (VAR_28 == VAR_1) {
   VAR_35 = VAR_34 +
       VAR_21[VAR_22][VAR_32 + VAR_34];
   VAR_34++;
  }
 } else {




  if (VAR_28 == VAR_1) {
   VAR_34++;
   VAR_34 += VAR_21[VAR_22][VAR_32 + VAR_34];
  } else if (VAR_28 == VAR_2) {
   VAR_34++;
  }
 }

 for (VAR_36 = 0; VAR_34 < VAR_35; VAR_34++)
  VAR_23[VAR_36++] = VAR_21[VAR_22][VAR_32 + VAR_34];
 VAR_23[VAR_36] = '\0';

 return (VAR_36);
}
