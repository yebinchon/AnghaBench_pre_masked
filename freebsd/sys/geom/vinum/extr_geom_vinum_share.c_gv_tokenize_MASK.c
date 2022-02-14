
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

int
FUNC_1(char *VAR_0, char *VAR_1[], int VAR_2)
{
 int VAR_3;
 char VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2;) {


  while (FUNC_0(*VAR_0))
   VAR_0++;


  if ((*VAR_0 == '\0') || (*VAR_0 == '\n') || (*VAR_0 == '#'))
   return VAR_3;

  VAR_4 = *VAR_0;
  VAR_1[VAR_3] = VAR_0;
  VAR_3++;


  if (VAR_3 == VAR_2)
   return VAR_3;


  if ((VAR_4 == '\'') || (VAR_4 == '"')) {
   for (;;) {
    VAR_0++;


    if ((*VAR_0 == VAR_4) && (VAR_0[-1] != '\\')) {
     VAR_0++;


     if (!FUNC_0(*VAR_0))
      return -1;


     *VAR_0++ = '\0';


    } else if ((*VAR_0 == '\0') || (*VAR_0 == '\n'))
     return -1;
   }


  } else {
   while ((*VAR_0 != '\0') &&
       (!FUNC_0(*VAR_0)) &&
       (*VAR_0 != '\n'))
    VAR_0++;


   if (*VAR_0 != '\0')
    *VAR_0++ = '\0';
  }
 }


 return VAR_2;
}
