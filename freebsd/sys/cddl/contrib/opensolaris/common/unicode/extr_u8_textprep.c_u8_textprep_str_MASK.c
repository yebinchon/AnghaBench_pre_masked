
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uchar_t ;
typedef int u8_normalization_states_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char FUNC_0 (char) ;
 char FUNC_1 (char) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (char) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t FUNC_3 (size_t,char*,char**,char*,int,int,int,int,int,int*,int *) ;
 size_t FUNC_4 (size_t,char*,char*,int,int) ;
 int* VAR_19 ;

size_t
FUNC_5(char *VAR_20, size_t *VAR_21, char *VAR_22, size_t *VAR_23,
 int VAR_24, size_t VAR_25, int *VAR_26)
{
 int VAR_27;
 int VAR_28;
 uchar_t *VAR_29;
 uchar_t *VAR_30;
 uchar_t *VAR_31;
 uchar_t *VAR_32;
 boolean_t VAR_33;
 boolean_t VAR_34;
 boolean_t VAR_35;
 boolean_t VAR_36;
 boolean_t VAR_37;
 boolean_t VAR_38;
 boolean_t VAR_39;
 size_t VAR_40;
 size_t VAR_41;
 size_t VAR_42;
 uchar_t VAR_43[VAR_9 + 1];
 u8_normalization_states_t VAR_44;

 if (VAR_25 > VAR_18) {
  *VAR_26 = VAR_4;
  return ((size_t)-1);
 }

 VAR_27 = VAR_24 & (VAR_17 | VAR_16);
 if (VAR_27 == (VAR_17 | VAR_16)) {
  *VAR_26 = VAR_1;
  return ((size_t)-1);
 }

 VAR_27 = VAR_24 & (VAR_6 | VAR_7 | VAR_5);
 if (VAR_27 && VAR_27 != VAR_13 && VAR_27 != VAR_12 &&
     VAR_27 != VAR_15 && VAR_27 != VAR_14) {
  *VAR_26 = VAR_1;
  return ((size_t)-1);
 }

 if (VAR_20 == ((void*)0) || *VAR_21 == 0)
  return (0);

 if (VAR_22 == ((void*)0)) {
  *VAR_26 = VAR_0;
  return ((size_t)-1);
 }

 VAR_29 = (uchar_t *)VAR_20;
 VAR_31 = (uchar_t *)VAR_22;
 VAR_30 = VAR_29 + *VAR_21;
 VAR_32 = VAR_31 + *VAR_23;

 VAR_33 = !(VAR_24 & VAR_11);
 VAR_34 = !(VAR_24 & VAR_10);
 VAR_35 = VAR_24 & VAR_17;
 VAR_36 = VAR_24 & VAR_16;

 VAR_40 = 0;
 if (VAR_27 == 0) {
  while (VAR_29 < VAR_30) {
   if (*VAR_29 == '\0' && VAR_33)
    break;

   VAR_28 = VAR_19[*VAR_29];

   if (VAR_28 < 0) {
    if (VAR_34) {
     *VAR_26 = VAR_2;
     VAR_40 = (size_t)-1;
     break;
    }

    VAR_28 = 1;
    VAR_40++;
   }

   if (VAR_28 == 1) {
    if (VAR_31 >= VAR_32) {
     *VAR_26 = VAR_0;
     VAR_40 = (size_t)-1;
     break;
    }

    if (VAR_35)
     *VAR_31 = FUNC_1(*VAR_29);
    else if (VAR_36)
     *VAR_31 = FUNC_0(*VAR_29);
    else
     *VAR_31 = *VAR_29;
    VAR_29++;
    VAR_31++;
   } else if ((VAR_29 + VAR_28) > VAR_30) {
    if (VAR_34) {
     *VAR_26 = VAR_3;
     VAR_40 = (size_t)-1;
     break;
    }

    if ((VAR_32 - VAR_31) < (VAR_30 - VAR_29)) {
     *VAR_26 = VAR_0;
     VAR_40 = (size_t)-1;
     break;
    }





    VAR_40++;

    while (VAR_29 < VAR_30)
     *VAR_31++ = *VAR_29++;
   } else {
    if (VAR_35 || VAR_36) {
     VAR_41 = FUNC_4(VAR_25, VAR_43,
         VAR_29, VAR_28, VAR_35);

     if ((VAR_32 - VAR_31) < VAR_41) {
      *VAR_26 = VAR_0;
      VAR_40 = (size_t)-1;
      break;
     }

     VAR_29 += VAR_28;

     for (VAR_28 = 0; VAR_28 < VAR_41; VAR_28++)
      *VAR_31++ = VAR_43[VAR_28];
    } else {
     if ((VAR_32 - VAR_31) < VAR_28) {
      *VAR_26 = VAR_0;
      VAR_40 = (size_t)-1;
      break;
     }

     for (VAR_41 = 0; VAR_41 < VAR_28; VAR_41++)
      *VAR_31++ = *VAR_29++;
    }
   }
  }
 } else {
  VAR_37 = VAR_24 & VAR_6;
  VAR_38 = VAR_24 & VAR_7;
  VAR_39 = VAR_24 & VAR_5;

  while (VAR_29 < VAR_30) {
   if (*VAR_29 == '\0' && VAR_33)
    break;
   if (FUNC_2(*VAR_29) && ((VAR_29 + 1) >= VAR_30 ||
       ((VAR_29 + 1) < VAR_30 && FUNC_2(*(VAR_29 + 1))))) {
    if (VAR_31 >= VAR_32) {
     *VAR_26 = VAR_0;
     VAR_40 = (size_t)-1;
     break;
    }

    if (VAR_35)
     *VAR_31 = FUNC_1(*VAR_29);
    else if (VAR_36)
     *VAR_31 = FUNC_0(*VAR_29);
    else
     *VAR_31 = *VAR_29;
    VAR_29++;
    VAR_31++;
   } else {
    *VAR_26 = 0;
    VAR_44 = VAR_8;

    VAR_42 = FUNC_3(VAR_25, VAR_43,
        &VAR_29, VAR_30,
        VAR_35,
        VAR_36,
        VAR_37,
        VAR_38,
        VAR_39,
        VAR_26, &VAR_44);

    if (*VAR_26 && VAR_34) {
     VAR_40 = (size_t)-1;
     break;
    }

    if ((VAR_32 - VAR_31) < VAR_42) {
     *VAR_26 = VAR_0;
     VAR_40 = (size_t)-1;
     break;
    }

    for (VAR_41 = 0; VAR_41 < VAR_42; VAR_41++)
     *VAR_31++ = VAR_43[VAR_41];
   }
  }
 }

 *VAR_21 = VAR_30 - VAR_29;
 *VAR_23 = VAR_32 - VAR_31;

 return (VAR_40);
}
