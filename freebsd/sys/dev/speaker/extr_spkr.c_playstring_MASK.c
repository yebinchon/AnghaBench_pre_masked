
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int) ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (char*,char,char) ;
 char FUNC_5 (char) ;
 int VAR_20 ;
 int VAR_21 ;

__attribute__((used)) static void
FUNC_6(char *VAR_22, size_t VAR_23)
{
 int VAR_24, VAR_25, VAR_26 = VAR_9 * VAR_0;



 for (; VAR_23--; VAR_22++) {
  int VAR_27, VAR_28, VAR_29;
  char VAR_30 = FUNC_5(*VAR_22);





  switch (VAR_30) {
  case 'A':
  case 'B':
  case 'C':
  case 'D':
  case 'E':
  case 'F':
  case 'G':

   VAR_24 = VAR_15[VAR_30 - 'A'] + VAR_16 * VAR_9;


   if (VAR_22[1] == '#' || VAR_22[1] == '+') {
    ++VAR_24;
    ++VAR_22;
    VAR_23--;
   } else if (VAR_22[1] == '-') {
    --VAR_24;
    ++VAR_22;
    VAR_23--;
   }






   if (VAR_18 && !VAR_17) {
    if (FUNC_1(VAR_24-VAR_26) > FUNC_1(VAR_24+VAR_9 -
     VAR_26)) {
     ++VAR_16;
     VAR_24 += VAR_9;
    }

    if (FUNC_1(VAR_24-VAR_26) > FUNC_1((VAR_24-VAR_9) -
     VAR_26)) {
     --VAR_16;
     VAR_24 -= VAR_9;
    }
   }
   VAR_17 = VAR_3;
   VAR_26 = VAR_24;


   for(VAR_28=0; isdigit(VAR_22[1]) && VAR_23 > 0; ) {VAR_28 = VAR_28 * 10 + (*++VAR_22 - '0'); VAR_23--;};
   if (VAR_28 <= 0 || VAR_28 > VAR_7)
    VAR_28 = VAR_20;


   for (VAR_27 = 0; VAR_22[1] == '.'; VAR_22++) {
    VAR_23--;
    VAR_27++;
   }


   VAR_25 = VAR_14;
   if (VAR_22[1] == '_') {
    VAR_14 = VAR_4;
    ++VAR_22;
    VAR_23--;
   }


   FUNC_3(VAR_24, VAR_28, VAR_27);

   VAR_14 = VAR_25;
   break;
  case 'O':
   if (VAR_22[1] == 'N' || VAR_22[1] == 'n') {
    VAR_17 = VAR_18 = VAR_3;
    ++VAR_22;
    VAR_23--;
   } else if (VAR_22[1] == 'L' || VAR_22[1] == 'l') {
    VAR_18 = VAR_12;
    ++VAR_22;
    VAR_23--;
   } else {
    for(VAR_16=0; FUNC_0(VAR_22[1]) && VAR_23 > 0; ) {VAR_16 = VAR_16 * 10 + (*++VAR_22 - '0'); VAR_23--;};
    if (VAR_16 >= FUNC_2(VAR_19) / VAR_9)
     VAR_16 = VAR_0;
    VAR_17 = VAR_12;
   }
   break;
  case '>':
   if (VAR_16 < FUNC_2(VAR_19) / VAR_9 - 1)
    VAR_16++;
   VAR_17 = VAR_12;
   break;
  case '<':
   if (VAR_16 > 0)
    VAR_16--;
   VAR_17 = VAR_12;
   break;
  case 'N':
   for(VAR_24=0; FUNC_0(VAR_22[1]) && VAR_23 > 0; ) {VAR_24 = VAR_24 * 10 + (*++VAR_22 - '0'); VAR_23--;};
   for (VAR_27 = 0; VAR_22[1] == '.'; VAR_22++) {
    VAR_23--;
    VAR_27++;
   }
   VAR_25 = VAR_14;
   if (VAR_22[1] == '_') {
    VAR_14 = VAR_4;
    ++VAR_22;
    VAR_23--;
   }
   FUNC_3(VAR_24 - 1, VAR_20, VAR_27);
   VAR_14 = VAR_25;
   break;
  case 'L':
   for(VAR_20=0; FUNC_0(VAR_22[1]) && VAR_23 > 0; ) {VAR_20 = VAR_20 * 10 + (*++VAR_22 - '0'); VAR_23--;};
   if (VAR_20 <= 0 || VAR_20 > VAR_7)
    VAR_20 = VAR_2;
   break;
  case 'P':
  case '~':

   for(VAR_28=0; FUNC_0(VAR_22[1]) && VAR_23 > 0; ) {VAR_28 = VAR_28 * 10 + (*++VAR_22 - '0'); VAR_23--;};
   if (VAR_28 <= 0 || VAR_28 > VAR_7)
    VAR_28 = VAR_20;
   for (VAR_27 = 0; VAR_22[1] == '.'; VAR_22++) {
    VAR_23--;
    VAR_27++;
   }
   FUNC_3(-1, VAR_28, VAR_27);
   break;
  case 'T':
   for(VAR_29=0; FUNC_0(VAR_22[1]) && VAR_23 > 0; ) {VAR_29 = VAR_29 * 10 + (*++VAR_22 - '0'); VAR_23--;};
   if (VAR_29 < VAR_6 || VAR_29 > VAR_5)
    VAR_29 = VAR_1;
   VAR_21 = (100 * VAR_10 * VAR_13) / VAR_29;
   break;
  case 'M':
   if (VAR_22[1] == 'N' || VAR_22[1] == 'n') {
    VAR_14 = VAR_8;
    ++VAR_22;
    VAR_23--;
   } else if (VAR_22[1] == 'L' || VAR_22[1] == 'l') {
    VAR_14 = VAR_4;
    ++VAR_22;
    VAR_23--;
   } else if (VAR_22[1] == 'S' || VAR_22[1] == 's') {
    VAR_14 = VAR_11;
    ++VAR_22;
    VAR_23--;
   }
   break;
  }
 }
}
