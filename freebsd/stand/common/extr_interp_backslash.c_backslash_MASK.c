
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;
 char* FUNC_2 (char const*) ;

char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 int VAR_2 = 0;
 int VAR_3 = 0;

 if ((VAR_1 = FUNC_2(VAR_0)) == ((void*)0))
  return ((void*)0);

 while (*VAR_0) {
  if (VAR_2) {
   VAR_2 = 0;
   switch (*VAR_0) {
   case '\\':
    VAR_1[VAR_3++] = '\\';
    VAR_0++;
    break;


   case '\'':
   case '"':
   case '$':
    VAR_1[VAR_3++] = '\\';
    VAR_1[VAR_3++] = *VAR_0++;
    break;

   case 'b':
    VAR_1[VAR_3++] = '\b';
    VAR_0++;
    break;

   case 'f':
    VAR_1[VAR_3++] = '\f';
    VAR_0++;
    break;

   case 'r':
    VAR_1[VAR_3++] = '\r';
    VAR_0++;
    break;

   case 'n':
    VAR_1[VAR_3++] = '\n';
    VAR_0++;
    break;

   case 's':
    VAR_1[VAR_3++] = ' ';
    VAR_0++;
    break;

   case 't':
    VAR_1[VAR_3++] = '\t';
    VAR_0++;
    break;

   case 'v':
    VAR_1[VAR_3++] = '\13';
    VAR_0++;
    break;

   case 'z':
    VAR_0++;
    break;

   case '0': case '1': case '2': case '3': case '4':
   case '5': case '6': case '7': case '8': case '9': {
    char VAR_4;


    if (*VAR_0 >= '0' && *VAR_0 <= '3' &&
        *(VAR_0 + 1) >= '0' && *(VAR_0 + 1) <= '7' &&
        *(VAR_0 + 2) >= '0' && *(VAR_0 + 2) <= '7') {

     VAR_4 = (FUNC_0(*VAR_0) << 6) + (FUNC_0(*(VAR_0 + 1)) << 3) +
         FUNC_0(*(VAR_0 + 2));



     VAR_1[VAR_3++] = VAR_4;
     VAR_0 += 3;
     break;
    }





    if (*VAR_0 == '0' &&
        (*(VAR_0 + 1) == 'x' || *(VAR_0 + 1) == 'X') &&
        FUNC_1(*(VAR_0 + 2))) {
     VAR_4 = FUNC_0(*(VAR_0 + 2));
     if (FUNC_1(*(VAR_0 + 3))) {
      VAR_4 = (VAR_4 << 4) + FUNC_0(*(VAR_0 + 3));
      VAR_0 += 4;
     }
     else
      VAR_0 += 3;

     VAR_1[VAR_3++] = VAR_4;
     break;
    }
   }
    break;

   default:
    VAR_1[VAR_3++] = *VAR_0++;
    break;
   }
  }
  else {
   if (*VAR_0 == '\\') {
    VAR_2 = 1;
    VAR_0++;
   }
   else
    VAR_1[VAR_3++] = *VAR_0++;
  }
 }

 if (VAR_2) {



  VAR_1[VAR_3++] = '\\';
 }
 VAR_1[VAR_3] = '\0';
 return VAR_1;
}
