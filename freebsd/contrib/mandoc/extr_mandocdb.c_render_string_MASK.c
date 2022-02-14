
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char const**,char const**,int*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,size_t) ;
 int FUNC_4 (char const*,int) ;
 char* FUNC_5 (char const*,int,size_t*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int * FUNC_7 (char*,char const) ;
 size_t FUNC_8 (int,char*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int
FUNC_9(char **VAR_2, size_t *VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6, *VAR_7;
 char *VAR_8;
 size_t VAR_9, VAR_10, VAR_11;
 char VAR_12[7], VAR_13[6];
 int VAR_14, VAR_15;

 VAR_13[0] = '\\';
 VAR_13[1] = '\t';
 VAR_13[2] = 128;
 VAR_13[3] = 129;
 VAR_13[4] = 130;
 VAR_13[5] = '\0';

 VAR_4 = VAR_5 = *VAR_2;
 VAR_9 = *VAR_3;
 VAR_8 = ((void*)0);
 VAR_10 = 0;

 while (VAR_5 < VAR_4 + *VAR_3) {



  if (FUNC_7(VAR_13, *VAR_5) == ((void*)0)) {
   if (VAR_8 != ((void*)0))
    VAR_8[VAR_10++] = *VAR_5;
   VAR_5++;
   continue;
  }






  if (VAR_8 == ((void*)0)) {
   VAR_8 = FUNC_2(VAR_9 + 1);
   VAR_10 = VAR_5 - VAR_4;
   FUNC_6(VAR_8, VAR_4, VAR_10);
  }



  switch (*VAR_5) {
  case '\\':
   break;
  case '\t':
  case 128:
   VAR_8[VAR_10++] = ' ';
   VAR_5++;
   continue;
  case 129:
   VAR_8[VAR_10++] = '-';

  case 130:
   VAR_5++;
   continue;
  default:
   FUNC_0();
  }







  VAR_5++;
  if (FUNC_1(&VAR_5, &VAR_7, &VAR_14) != VAR_0)
   continue;






  if (VAR_1) {
   VAR_15 = FUNC_4(VAR_7, VAR_14);
   if (VAR_15 <= 0)
    continue;
   VAR_11 = FUNC_8(VAR_15, VAR_12);
   if (VAR_11 == 0)
    continue;
   VAR_6 = VAR_12;
  } else {
   VAR_6 = FUNC_5(VAR_7, VAR_14, &VAR_11);
   if (VAR_6 == ((void*)0))
    continue;
   if (*VAR_6 == 128) {
    VAR_6 = " ";
    VAR_11 = 1;
   }
  }



  VAR_9 += VAR_11;
  VAR_8 = FUNC_3(VAR_8, VAR_9 + 1);
  FUNC_6(VAR_8 + VAR_10, VAR_6, VAR_11);
  VAR_10 += VAR_11;
 }
 if (VAR_8 != ((void*)0)) {
  *VAR_2 = VAR_8;
  *VAR_3 = VAR_10;
 }



 while (*VAR_3 > 0 && (*VAR_2)[*VAR_3 - 1] == ' ')
  --*VAR_3;
 if (VAR_8 != ((void*)0)) {
  (*VAR_2)[*VAR_3] = '\0';
  return 1;
 } else
  return 0;
}
