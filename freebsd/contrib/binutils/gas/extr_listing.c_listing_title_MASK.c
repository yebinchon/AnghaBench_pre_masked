
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* edict_arg; int edict; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 char* VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (char*,char*,unsigned int) ;
 char* FUNC_5 (unsigned int) ;

void
FUNC_6 (int VAR_6)
{
  int VAR_7;
  char *VAR_8;
  char *VAR_9;
  unsigned int VAR_10;

  FUNC_0 ();
  if (*VAR_2 != '\"')
    VAR_7 = 0;
  else
    {
      VAR_7 = 1;
      ++VAR_2;
    }

  VAR_8 = VAR_2;

  while (*VAR_2)
    {
      if (VAR_7
   ? *VAR_2 == '\"'
   : VAR_3[(unsigned char) *VAR_2])
 {
   if (VAR_4)
     {
       VAR_10 = VAR_2 - VAR_8;
       VAR_9 = FUNC_5 (VAR_10 + 1);
       FUNC_4 (VAR_9, VAR_8, VAR_10);
       VAR_9[VAR_10] = 0;
       VAR_5->edict = VAR_6 ? VAR_0 : VAR_1;
       VAR_5->edict_arg = VAR_9;
     }
   if (VAR_7)
     VAR_2++;
   FUNC_3 ();
   return;
 }
      else if (*VAR_2 == '\n')
 {
   FUNC_2 (FUNC_1("new line in title"));
   FUNC_3 ();
   return;
 }
      else
 {
   VAR_2++;
 }
    }
}
