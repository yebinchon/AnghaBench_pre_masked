
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uchar_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__*,int ,int,int,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ FUNC_5 (scalar_t__*,size_t) ;
 scalar_t__* FUNC_6 (size_t,scalar_t__*,size_t) ;
 size_t* VAR_15 ;

__attribute__((used)) static size_t
FUNC_7(size_t VAR_16, uchar_t *VAR_17, uchar_t *VAR_18, uchar_t *VAR_19,
 uchar_t *VAR_20, size_t VAR_21, uchar_t **VAR_22, uchar_t *VAR_23)
{
 uchar_t VAR_24[VAR_12 + 1];
 uchar_t VAR_25[VAR_11];
 uint8_t VAR_26[VAR_10];
 size_t VAR_27;
 uchar_t *VAR_28;
 uchar_t *VAR_29;
 uchar_t *VAR_30;
 size_t VAR_31;
 size_t VAR_32;
 size_t VAR_33;
 size_t VAR_34;
 size_t VAR_35;
 size_t VAR_36;
 size_t VAR_37;
 size_t VAR_38;
 uint32_t VAR_39;
 uint32_t VAR_40;
 boolean_t VAR_41 = VAR_1;







 if (VAR_21 >= VAR_10)
  VAR_21 = VAR_14;

 for (VAR_31 = VAR_35 = 0; VAR_31 <= VAR_21; VAR_31++) {





  if (VAR_31 >= VAR_21 || VAR_18[VAR_31] != VAR_2) {
SAVE_THE_CHAR:
   VAR_28 = VAR_17 + VAR_19[VAR_31];
   VAR_38 = VAR_20[VAR_31];
   for (VAR_34 = 0; VAR_34 < VAR_38; VAR_34++)
    VAR_24[VAR_35++] = *VAR_28++;
   continue;
  }





  if (VAR_17[VAR_19[VAR_31]] == VAR_3) {
   FUNC_3(VAR_39, VAR_17[VAR_19[VAR_31]],
       VAR_17[VAR_19[VAR_31] + 1], VAR_17[VAR_19[VAR_31] + 2]);
   FUNC_3(VAR_40, VAR_17[VAR_19[VAR_31] + 3],
       VAR_17[VAR_19[VAR_31] + 4], VAR_17[VAR_19[VAR_31] + 5]);

   if (FUNC_0(VAR_39) && FUNC_2(VAR_40)) {
    VAR_39 -= VAR_4;
    VAR_40 -= VAR_6;
    VAR_39 = VAR_7 +
        (VAR_39 * VAR_9 + VAR_40) *
        VAR_8;

    VAR_31 += 2;
    if (VAR_31 <= VAR_21) {
     FUNC_3(VAR_40,
         VAR_17[VAR_19[VAR_31]], VAR_17[VAR_19[VAR_31] + 1],
         VAR_17[VAR_19[VAR_31] + 2]);

     if (FUNC_1(VAR_40)) {
      VAR_39 += VAR_40 -
          VAR_5;
      VAR_31++;
     }
    }

    FUNC_4(VAR_24 + VAR_35, 0, 1, 2, VAR_39);
    VAR_31--;
    VAR_35 += 3;
    continue;
   }
  }





  VAR_28 = FUNC_6(VAR_16, VAR_17 + VAR_19[VAR_31], VAR_20[VAR_31]);
  if (VAR_28 == ((void*)0))
   goto SAVE_THE_CHAR;







  VAR_29 = VAR_28;
  VAR_32 = VAR_31;
  VAR_37 = VAR_35;
  VAR_27 = 0;

TRY_THE_NEXT_MARK:
  VAR_30 = VAR_17 + VAR_19[++VAR_31];
  VAR_38 = VAR_20[VAR_31];
  VAR_41 = VAR_1;

  for (VAR_36 = *VAR_28++; VAR_36 > 0; VAR_36--) {
   for (VAR_34 = 0; VAR_34 < VAR_38; VAR_28++, VAR_34++)
    if (*VAR_28 != VAR_30[VAR_34])
     break;


   if (VAR_34 >= VAR_38 && *VAR_28 == VAR_13) {
    VAR_41 = VAR_0;

    VAR_35 = VAR_37;

    while (*++VAR_28 != VAR_13)
     VAR_24[VAR_35++] = *VAR_28;

    break;
   }


   if (*VAR_28 != VAR_13)
    while (*++VAR_28 != VAR_13)
     ;
   while (*++VAR_28 != VAR_13)
    ;
   VAR_28++;
  }
  if (VAR_41) {
   if (VAR_18[VAR_31] == VAR_2) {
    VAR_31--;
    goto SAVE_THE_CHAR;
   }

   VAR_26[VAR_27++] = VAR_31;
  }

  if (VAR_37 == VAR_35) {
   while (VAR_31 < VAR_21) {
    if (FUNC_5(VAR_18, VAR_31 + 1))
     VAR_26[VAR_27++] = ++VAR_31;
    else
     break;
   }
   if (VAR_31 < VAR_21) {
    VAR_28 = VAR_29;
    goto TRY_THE_NEXT_MARK;
   }
  } else if (VAR_31 < VAR_21) {
   VAR_28 = FUNC_6(VAR_16, VAR_24 + VAR_37,
       VAR_35 - VAR_37);
   if (VAR_28 != ((void*)0)) {
    VAR_29 = VAR_28;
    goto TRY_THE_NEXT_MARK;
   }
  }
  if (VAR_37 == VAR_35) {
   VAR_28 = VAR_17 + VAR_19[VAR_32];
   VAR_38 = VAR_20[VAR_32];
   for (VAR_33 = 0; VAR_33 < VAR_38; VAR_33++)
    VAR_24[VAR_35++] = *VAR_28++;
  }

  for (VAR_34 = 0; VAR_34 < VAR_27; VAR_34++) {
   VAR_28 = VAR_17 + VAR_19[VAR_26[VAR_34]];
   VAR_38 = VAR_20[VAR_26[VAR_34]];
   for (VAR_33 = 0; VAR_33 < VAR_38; VAR_33++)
    VAR_24[VAR_35++] = *VAR_28++;
  }
 }







 if (VAR_18[VAR_21] == VAR_2) {
  VAR_28 = *VAR_22;
  VAR_37 = VAR_35 - VAR_20[VAR_21];

  while (VAR_28 < VAR_23) {
   VAR_38 = VAR_15[*VAR_28];
   if (VAR_38 <= 1 || (VAR_28 + VAR_38) > VAR_23)
    break;

   VAR_29 = VAR_28;

   for (VAR_31 = 0; VAR_31 < VAR_38; VAR_31++)
    VAR_25[VAR_31] = *VAR_28++;

   VAR_30 = FUNC_6(VAR_16, VAR_24 + VAR_37,
       VAR_35 - VAR_37);
   if (VAR_30 == ((void*)0)) {
    VAR_28 = VAR_29;
    break;
   }

   VAR_41 = VAR_1;

   for (VAR_36 = *VAR_30++; VAR_36 > 0; VAR_36--) {
    for (VAR_34 = 0; VAR_34 < VAR_38; VAR_30++, VAR_34++)
     if (*VAR_30 != VAR_25[VAR_34])
      break;

    if (VAR_34 >= VAR_38 && *VAR_30 == VAR_13) {
     VAR_41 = VAR_0;

     VAR_35 = VAR_37;

     while (*++VAR_30 != VAR_13) {





      if (VAR_35 >=
          VAR_12) {
       VAR_28 = VAR_29;
       goto SAFE_RETURN;
      }
      VAR_24[VAR_35++] = *VAR_30;
     }

     break;
    }

    if (*VAR_30 != VAR_13)
     while (*++VAR_30 != VAR_13)
      ;
    while (*++VAR_30 != VAR_13)
     ;
    VAR_30++;
   }

   if (VAR_41) {
    VAR_28 = VAR_29;
    break;
   }
  }
SAFE_RETURN:
  *VAR_22 = VAR_28;
 }







 for (VAR_31 = 0; VAR_31 < VAR_35; VAR_31++)
  VAR_17[VAR_31] = VAR_24[VAR_31];
 VAR_17[VAR_35] = '\0';

 return (VAR_35);
}
