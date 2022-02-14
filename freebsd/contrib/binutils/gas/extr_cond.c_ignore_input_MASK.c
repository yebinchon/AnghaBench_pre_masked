
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ ignoring; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,char*,int) ;

int
FUNC_1 (void)
{
  char *VAR_4;

  VAR_4 = VAR_3;

  if (VAR_0 || VAR_2)
    {
      if (VAR_4[-1] != '.')
 --VAR_4;
    }
  else
    {
      if (VAR_4[-1] != '.')
 return (VAR_1 != ((void*)0)) && (VAR_1->ignoring);
    }


  if (((VAR_4[0] == 'i'
 || VAR_4[0] == 'I')
       && (!FUNC_0 (VAR_4, "if", 2)
    || !FUNC_0 (VAR_4, "ifdef", 5)
    || !FUNC_0 (VAR_4, "ifndef", 6)))
      || ((VAR_4[0] == 'e'
    || VAR_4[0] == 'E')
   && (!FUNC_0 (VAR_4, "else", 4)
       || !FUNC_0 (VAR_4, "endif", 5)
       || !FUNC_0 (VAR_4, "endc", 4))))
    return 0;

  return (VAR_1 != ((void*)0)) && (VAR_1->ignoring);
}
