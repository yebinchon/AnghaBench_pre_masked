
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;


 int FUNC_0 (char) ;
 int FUNC_1 (char) ;
 int FUNC_2 (char*,int ,int) ;

void FUNC_3(char *VAR_0)
{
 uint8_t VAR_1;
 char *VAR_2;
 char *VAR_3;
 char VAR_4[4];


 VAR_3 = VAR_2 = VAR_0;


 while (*VAR_3 != '\0') {
  if (*VAR_2 != '\\') {
   *VAR_3 = *VAR_2;
   VAR_3++;
   VAR_2++;
   continue;
  }


  switch (*++VAR_2) {
  case 'a': *VAR_3 = '\a'; break;
  case 'b': *VAR_3 = '\b'; break;
  case 'f': *VAR_3 = '\f'; break;
  case 'n': *VAR_3 = '\n'; break;
  case 'r': *VAR_3 = '\r'; break;
  case 't': *VAR_3 = '\t'; break;
  case 'v': *VAR_3 = '\v'; break;
  case 'x':
   VAR_4[2] = '\0';


   VAR_4[0] = FUNC_1(*(VAR_2+1)) ? *++VAR_2 : '\0';
   if (VAR_4[0] != '\0')
    VAR_4[1] = FUNC_1(*(VAR_2+1)) ? *++VAR_2 : '\0';


   VAR_1 = (uint8_t)FUNC_2(VAR_4, 0, 16);


   *VAR_3 = (VAR_1 != 0 || VAR_4[0] == '0') ? VAR_1 : *++VAR_2;
   break;
  case '0':
   VAR_4[3] = '\0';


   VAR_4[0] = (FUNC_0(*(VAR_2+1)) && *(VAR_2+1) < '8') ?
       *++VAR_2 : '\0';
   if (VAR_4[0] != '\0')
    VAR_4[1] = (FUNC_0(*(VAR_2+1)) && *(VAR_2+1) < '8') ?
        *++VAR_2 : '\0';
   if (VAR_4[1] != '\0')
    VAR_4[2] = (FUNC_0(*(VAR_2+1)) && *(VAR_2+1) < '8') ?
        *++VAR_2 : '\0';


   VAR_1 = (uint8_t)FUNC_2(VAR_4, 0, 8);


   *VAR_3 = VAR_1;
   break;
  default:
   if (FUNC_0(*VAR_2) && *VAR_2 < '8') {
    VAR_4[0] = *VAR_2;
    VAR_4[1] = '\0';
    *VAR_3 = (uint8_t)FUNC_2(VAR_4, 0, 8);
   } else
    *VAR_3 = *VAR_2;
  }


  VAR_3++;
  VAR_2++;
 }
}
