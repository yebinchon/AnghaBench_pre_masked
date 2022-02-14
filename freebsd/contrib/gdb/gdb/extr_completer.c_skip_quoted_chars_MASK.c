
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* (* la_word_break_characters ) () ;} ;


 TYPE_1__* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ FUNC_0 (char*,char) ;
 char* FUNC_1 () ;

char *
FUNC_2 (char *VAR_2, char *VAR_3, char *VAR_4)
{
  char VAR_5 = '\0';
  char *VAR_6;

  if (VAR_3 == ((void*)0))
    VAR_3 = VAR_1;

  if (VAR_4 == ((void*)0))
    VAR_4 = VAR_0->la_word_break_characters();

  for (VAR_6 = VAR_2; *VAR_6 != '\0'; VAR_6++)
    {
      if (VAR_5 != '\0')
 {

   if (*VAR_6 == VAR_5)
     {

       VAR_6++;
       break;
     }
 }
      else if (FUNC_0 (VAR_3, *VAR_6))
 {

   VAR_5 = *VAR_6;
 }
      else if (FUNC_0 (VAR_4, *VAR_6))
 {
   break;
 }
    }

  return (VAR_6);
}
