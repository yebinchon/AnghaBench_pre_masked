
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* part1; scalar_t__ live_cond; int validated; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char*,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_2 (int VAR_4, int VAR_5)
{
  const char *VAR_6 = VAR_3[VAR_4].part1;
  int VAR_7;




  if (VAR_5 >= 0 && VAR_5 <= 1)
    return 1;



  if (VAR_3[VAR_4].live_cond != 0)
    return VAR_3[VAR_4].live_cond > 0;


  switch (*VAR_6)
    {
    case 'O':
      for (VAR_7 = VAR_4 + 1; VAR_7 < VAR_2; VAR_7++)
 if (VAR_3[VAR_7].part1[0] == 'O')
   {
     VAR_3[VAR_4].validated = 1;
     VAR_3[VAR_4].live_cond = VAR_0;
     return 0;
   }
      break;

    case 'W': case 'f': case 'm':
      if (! FUNC_1 (VAR_6 + 1, "no-", 3))
 {

   for (VAR_7 = VAR_4 + 1; VAR_7 < VAR_2; VAR_7++)
     if (VAR_3[VAR_7].part1[0] == VAR_6[0]
  && ! FUNC_0 (&VAR_3[VAR_7].part1[1], &VAR_6[4]))
       {
  VAR_3[VAR_4].validated = 1;
  VAR_3[VAR_4].live_cond = VAR_0;
  return 0;
       }
 }
      else
 {

   for (VAR_7 = VAR_4 + 1; VAR_7 < VAR_2; VAR_7++)
     if (VAR_3[VAR_7].part1[0] == VAR_6[0]
  && VAR_3[VAR_7].part1[1] == 'n'
  && VAR_3[VAR_7].part1[2] == 'o'
  && VAR_3[VAR_7].part1[3] == '-'
  && !FUNC_0 (&VAR_3[VAR_7].part1[4], &VAR_6[1]))
       {
  VAR_3[VAR_4].validated = 1;
  VAR_3[VAR_4].live_cond = VAR_0;
  return 0;
       }
 }
      break;
    }


  VAR_3[VAR_4].live_cond = VAR_1;
  return 1;
}
