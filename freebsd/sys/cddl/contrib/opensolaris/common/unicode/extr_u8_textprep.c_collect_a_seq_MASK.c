
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uchar_t ;
typedef scalar_t__ u8_normalization_states_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 size_t FUNC_1 (size_t) ;
 size_t VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,size_t,size_t,size_t) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (size_t,size_t) ;
 size_t VAR_11 ;
 size_t FUNC_6 (size_t,size_t*,int) ;
 size_t FUNC_7 (size_t,size_t*,size_t*,int,scalar_t__) ;
 int FUNC_8 (size_t,size_t*,size_t*,size_t*,size_t*,size_t,size_t**,size_t*) ;
 void* FUNC_9 (size_t,size_t*,size_t*,int,scalar_t__,scalar_t__*) ;
 int* VAR_12 ;

__attribute__((used)) static size_t
FUNC_10(size_t VAR_13, uchar_t *VAR_14, uchar_t **VAR_15, uchar_t *VAR_16,
 boolean_t VAR_17,
 boolean_t VAR_18,
 boolean_t VAR_19,
 boolean_t VAR_20,
 boolean_t VAR_21,
 int *VAR_22, u8_normalization_states_t *VAR_23)
{
 uchar_t *VAR_24;
 int VAR_25;
 int VAR_26;
 size_t VAR_27;
 size_t VAR_28;
 size_t VAR_29;
 size_t VAR_30;
 uchar_t VAR_31[VAR_4];
 uchar_t VAR_32[VAR_4];
 uchar_t VAR_33[VAR_4];
 uchar_t VAR_34[VAR_5];
 uchar_t VAR_35[VAR_10 + 1];
 uchar_t VAR_36;
 size_t VAR_37;
 size_t VAR_38;
 uint32_t VAR_39;





 VAR_24 = *VAR_15;





 if (VAR_24 >= VAR_16) {
  VAR_14[0] = '\0';

  return (0);
 }






 VAR_25 = VAR_12[*VAR_24];

 if (VAR_25 < 0) {
  *VAR_22 = VAR_0;

  VAR_14[0] = *VAR_24++;
  VAR_14[1] = '\0';

  *VAR_15 = VAR_24;

  return (1);
 }

 if (VAR_25 == 1) {
  if (VAR_17)
   VAR_14[0] = FUNC_1(*VAR_24);
  else if (VAR_18)
   VAR_14[0] = FUNC_0(*VAR_24);
  else
   VAR_14[0] = *VAR_24;
  VAR_24++;
  VAR_14[1] = '\0';
 } else if ((VAR_24 + VAR_25) > VAR_16) {
  *VAR_22 = VAR_1;

  for (VAR_27 = 0; VAR_24 < VAR_16; )
   VAR_14[VAR_27++] = *VAR_24++;
  VAR_14[VAR_27] = '\0';

  *VAR_15 = VAR_24;

  return (VAR_27);
 } else {
  if (VAR_17 || VAR_18) {
   VAR_27 = FUNC_7(VAR_13, VAR_14, VAR_24, VAR_25, VAR_17);
   VAR_24 += VAR_25;
   VAR_25 = VAR_27;
  } else {
   for (VAR_27 = 0; VAR_27 < VAR_25; )
    VAR_14[VAR_27++] = *VAR_24++;
   VAR_14[VAR_27] = '\0';
  }
 }







 if (VAR_19 || VAR_20) {
  if (VAR_25 == 1) {
   *VAR_23 = VAR_9;

   VAR_26 = 1;

   VAR_31[0] = 0;
   VAR_33[0] = 0;
   VAR_32[0] = 1;

   VAR_37 = 1;
  } else {
   VAR_26 = FUNC_9(VAR_13, VAR_14, VAR_14, VAR_25,
       VAR_19, VAR_23);

   VAR_37 = 0;

   for (VAR_27 = 0; VAR_27 < VAR_26; ) {
    VAR_25 = VAR_12[VAR_14[VAR_27]];

    VAR_31[VAR_37] = FUNC_6(VAR_13,
        VAR_14 + VAR_27, VAR_25);
    VAR_33[VAR_37] = VAR_27;
    VAR_32[VAR_37] = VAR_25;

    VAR_37++;
    VAR_27 += VAR_25;
   }







   if (*VAR_23 == VAR_9) {
    if (VAR_31[VAR_37 - 1])
     *VAR_23 = VAR_6;
   }
  }

  VAR_38 = VAR_37;

  while (VAR_24 < VAR_16) {
   VAR_25 = VAR_12[*VAR_24];
   if (VAR_25 <= 1) {
    break;
   } else if ((VAR_24 + VAR_25) > VAR_16) {
    break;
   } else {





    if (*VAR_24 == VAR_3) {
     FUNC_4(VAR_39,
         *VAR_24, *(VAR_24 + 1), *(VAR_24 + 2));

     if (FUNC_3(*VAR_23,
         VAR_39)) {
      VAR_27 = 0;
      *VAR_23 = VAR_7;
      goto COLLECT_A_HANGUL;
     }

     if (FUNC_2(*VAR_23,
         VAR_39)) {
      VAR_27 = 0;
      *VAR_23 = VAR_8;
      goto COLLECT_A_HANGUL;
     }
    }







    VAR_27 = FUNC_6(VAR_13, VAR_24, VAR_25);
    if (VAR_27 == VAR_2)
     break;







    if (*VAR_23 != VAR_9 &&
        *VAR_23 != VAR_6)
     break;

    *VAR_23 = VAR_6;
COLLECT_A_HANGUL:
    if (VAR_37 >= VAR_11) {
TURN_STREAM_SAFE:
     *VAR_23 = VAR_9;
     VAR_31[VAR_37] = 0;
     VAR_33[VAR_37] = VAR_26;
     VAR_32[VAR_37] = 2;
     VAR_37++;

     VAR_14[VAR_26++] = 0xCD;
     VAR_14[VAR_26++] = 0x8F;

     break;
    }





    if (*VAR_23 == VAR_6) {
     VAR_29 = VAR_37;
     VAR_30 = VAR_25;
     VAR_27 = FUNC_9(VAR_13, VAR_35, VAR_24, VAR_25,
         VAR_19, VAR_23);
     for (VAR_28 = 0; VAR_28 < VAR_27; ) {
      VAR_25 = VAR_12[VAR_35[VAR_28]];

      VAR_31[VAR_37] =
          FUNC_6(VAR_13,
          VAR_35 + VAR_28, VAR_25);
      VAR_33[VAR_37] = VAR_26 + VAR_28;
      VAR_32[VAR_37] = VAR_25;

      VAR_37++;
      if (VAR_37 >=
          VAR_11) {
       VAR_37 = VAR_29;
       goto TURN_STREAM_SAFE;
      }
      VAR_28 += VAR_25;
     }

     *VAR_23 = VAR_6;
     VAR_25 = VAR_27;
     VAR_24 += VAR_30;

     for (VAR_27 = 0; VAR_27 < VAR_25; VAR_27++)
      VAR_14[VAR_26++] = VAR_35[VAR_27];
    } else {
     VAR_31[VAR_37] = VAR_27;
     VAR_33[VAR_37] = VAR_26;
     VAR_32[VAR_37] = VAR_25;
     VAR_37++;

     for (VAR_27 = 0; VAR_27 < VAR_25; VAR_27++)
      VAR_14[VAR_26++] = *VAR_24++;
    }
    if (VAR_17 && VAR_25 >= 2 &&
        VAR_14[VAR_26 - 2] == 0xCD &&
        VAR_14[VAR_26 - 1] == 0x85) {
     VAR_14[VAR_26 - 2] = 0xCE;
     VAR_14[VAR_26 - 1] = 0x99;
    }
   }
  }
  VAR_37--;
  if (VAR_37 >= VAR_38) {
   for (VAR_27 = 0; VAR_27 < VAR_37; VAR_27++)
    for (VAR_28 = VAR_37; VAR_28 > VAR_27; VAR_28--)
     if (VAR_31[VAR_28] &&
         VAR_31[VAR_28 - 1] > VAR_31[VAR_28]) {
      FUNC_5(VAR_28 - 1, VAR_28);
     }
  }

  *VAR_15 = VAR_24;

  if (! VAR_21) {
   VAR_14[VAR_26] = '\0';
   return (VAR_26);
  }






  VAR_25 = FUNC_8(VAR_13, VAR_14, VAR_31, VAR_33, VAR_32, VAR_37,
      &VAR_24, VAR_16);
 }

 *VAR_15 = VAR_24;

 return ((size_t)VAR_25);
}
