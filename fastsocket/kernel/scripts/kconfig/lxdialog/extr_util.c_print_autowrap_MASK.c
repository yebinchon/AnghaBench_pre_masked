
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,int) ;

void FUNC_6(WINDOW * VAR_1, const char *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;
 char VAR_13[VAR_0 + 1], *VAR_14, *VAR_15, *VAR_16;

 FUNC_2(VAR_13, VAR_2);

 VAR_10 = FUNC_3(VAR_13);




 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (VAR_13[VAR_9] == '\n')
   VAR_13[VAR_9] = ' ';
 }

 if (VAR_10 <= VAR_3 - VAR_5 * 2) {
  FUNC_5(VAR_1, VAR_4, (VAR_3 - VAR_10) / 2);
  FUNC_4(VAR_1, VAR_13);
 } else {
  VAR_7 = VAR_5;
  VAR_8 = VAR_4;
  VAR_6 = 1;
  VAR_14 = VAR_13;
  while (VAR_14 && *VAR_14) {
   VAR_15 = FUNC_1(VAR_14, ' ');
   if (VAR_15)
    *VAR_15++ = 0;




   VAR_11 = VAR_3 - VAR_7;
   VAR_12 = FUNC_3(VAR_14);
   if (VAR_12 > VAR_11 ||
       (VAR_6 && VAR_12 < 4 && VAR_15
        && VAR_12 + 1 + FUNC_3(VAR_15) > VAR_11
        && (!(VAR_16 = FUNC_1(VAR_15, ' '))
     || VAR_12 + 1 + (VAR_16 - VAR_15) > VAR_11))) {
    VAR_8++;
    VAR_7 = VAR_5;
   }
   FUNC_5(VAR_1, VAR_8, VAR_7);
   FUNC_4(VAR_1, VAR_14);
   FUNC_0(VAR_1, VAR_8, VAR_7);
   VAR_7++;
   if (VAR_15 && *VAR_15 == ' ') {
    VAR_7++;
    while (*++VAR_15 == ' ') ;
    VAR_6 = 1;
   } else
    VAR_6 = 0;
   VAR_14 = VAR_15;
  }
 }
}
