
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 char* FUNC_0 (struct type*,int) ;
 int FUNC_1 (struct type*,int ,struct ui_file*) ;
 int FUNC_2 (char const*,int,int *,int*) ;
 int FUNC_3 (struct ui_file*,char*) ;

__attribute__((used)) static void
FUNC_4 (struct type *VAR_0, int VAR_1, struct ui_file *VAR_2,
        struct type *VAR_3)
{
  int VAR_4;
  int VAR_5;
  const char *VAR_6 = FUNC_0 (VAR_0, VAR_1);

  VAR_4 = 0;


  if (VAR_6[0] == 'V')
    {
      if (!FUNC_2 (VAR_6, 1, ((void*)0), &VAR_5))
 goto Huh;
    }
  else
    VAR_5 = 0;

  while (1)
    {
      switch (VAR_6[VAR_5])
 {
 default:
   return;
 case 'S':
 case 'R':
 case 'O':
   if (VAR_4)
     FUNC_3 (VAR_2, " | ");
   VAR_4 = 1;
   break;
 }

      switch (VAR_6[VAR_5])
 {
 case 'S':
   {
     LONGEST VAR_7;
     if (!FUNC_2 (VAR_6, VAR_5 + 1, &VAR_7, &VAR_5))
       goto Huh;
     FUNC_1 (VAR_3, VAR_7, VAR_2);
     break;
   }
 case 'R':
   {
     LONGEST VAR_8, VAR_9;
     if (!FUNC_2 (VAR_6, VAR_5 + 1, &VAR_8, &VAR_5)
  || VAR_6[VAR_5] != 'T' || !FUNC_2 (VAR_6, VAR_5 + 1, &VAR_9, &VAR_5))
       goto Huh;
     FUNC_1 (VAR_3, VAR_8, VAR_2);
     FUNC_3 (VAR_2, " .. ");
     FUNC_1 (VAR_3, VAR_9, VAR_2);
     break;
   }
 case 'O':
   FUNC_3 (VAR_2, "others");
   VAR_5 += 1;
   break;
 }
    }

Huh:
  FUNC_3 (VAR_2, "??");

}
