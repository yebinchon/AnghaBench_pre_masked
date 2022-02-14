
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (int *,size_t*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char) ;
 int FUNC_5 (char*,char*,size_t) ;
 char* FUNC_6 (char*,size_t) ;
 int * FUNC_7 (char*,char) ;
 size_t FUNC_8 (char*) ;

char *
FUNC_9(FILE *VAR_5, size_t *VAR_6, size_t *VAR_7, const char VAR_8[3], int VAR_9)
{
 static const char VAR_10[3] = { '\\', '\\', '#' };

 size_t VAR_11, VAR_12;
 char *VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16;
 char VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_12 = 0;
 VAR_13 = ((void*)0);
 VAR_16 = 1;

 if (VAR_8 == ((void*)0))
  VAR_8 = VAR_10;

 VAR_17 = VAR_8[0];
 VAR_18 = VAR_8[1];
 VAR_20 = VAR_8[2];




 VAR_19 = '\n';

 FUNC_0(VAR_5);

 while (VAR_16) {
  VAR_16 = 0;

  if (VAR_7)
   (*VAR_7)++;

  if ((VAR_14 = FUNC_2(VAR_5, &VAR_11)) == ((void*)0))
   break;

  if (VAR_11 && VAR_20) {
   for (VAR_15 = VAR_14; VAR_15 < VAR_14 + VAR_11; VAR_15++)
    if (*VAR_15 == VAR_20 && !FUNC_4(VAR_14, VAR_15, VAR_17)) {
     VAR_11 = VAR_15 - VAR_14;
     VAR_16 = VAR_11 == 0 && VAR_13 == ((void*)0);
     break;
    }
  }

  if (VAR_11 && VAR_19) {
   VAR_15 = &VAR_14[VAR_11 - 1];

   if (*VAR_15 == VAR_19)
    VAR_11--;
  }

  if (VAR_11 && VAR_18) {
   VAR_15 = &VAR_14[VAR_11 - 1];

   if (*VAR_15 == VAR_18 && !FUNC_4(VAR_14, VAR_15, VAR_17)) {
    VAR_11--;
    VAR_16 = 1;
   }
  }

  if (VAR_11 == 0) {




   if (VAR_16 || VAR_13 != ((void*)0))
    continue;
  }

  if ((VAR_15 = FUNC_6(VAR_13, VAR_12 + VAR_11 + 1)) == ((void*)0)) {
   FUNC_1(VAR_5);
   FUNC_3(VAR_13);
   return ((void*)0);
  }
  VAR_13 = VAR_15;

  (void) FUNC_5(VAR_13 + VAR_12, VAR_14, VAR_11);
  VAR_12 += VAR_11;
  VAR_13[VAR_12] = '\0';
 }

 FUNC_1(VAR_5);

 if ((VAR_9 & VAR_0) != 0 && VAR_17 && VAR_13 != ((void*)0) &&
     FUNC_7(VAR_13, VAR_17) != ((void*)0)) {
  VAR_14 = VAR_15 = VAR_13;
  while (VAR_15[0] != '\0') {
   int VAR_21;

   while (VAR_15[0] != '\0' && VAR_15[0] != VAR_17)
    *VAR_14++ = *VAR_15++;
   if (VAR_15[0] == '\0' || VAR_15[1] == '\0')
    break;

   VAR_21 = 0;
   if (VAR_15[1] == VAR_20)
    VAR_21 += (VAR_9 & VAR_1);
   if (VAR_15[1] == VAR_18)
    VAR_21 += (VAR_9 & VAR_2);
   if (VAR_15[1] == VAR_17)
    VAR_21 += (VAR_9 & VAR_3);
   if (VAR_15[1] != VAR_20 && VAR_15[1] != VAR_18 && VAR_15[1] != VAR_17)
    VAR_21 = (VAR_9 & VAR_4);

   if (VAR_21)
    VAR_15++;
   else
    *VAR_14++ = *VAR_15++;
   *VAR_14++ = *VAR_15++;
  }
  *VAR_14 = '\0';
  VAR_12 = FUNC_8(VAR_13);
 }

 if (VAR_6)
  *VAR_6 = VAR_12;
 return VAR_13;
}
