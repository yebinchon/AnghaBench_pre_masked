
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* base; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (char) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (scalar_t__*,char*) ;
 char* FUNC_7 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_8 (int *VAR_3, int *VAR_4)
{
  int VAR_5;
  int VAR_6 = 1;
  char *VAR_7 = ((void*)0);
  int VAR_8 = 0;


  for (;; VAR_2++)
    {
      VAR_5 = FUNC_5 (' ');
      if (VAR_5 == VAR_0)
 return 0;
      if (VAR_5 != '\n')
 break;
    }
  if (VAR_5 != '#')
    return 0;
  VAR_5 = FUNC_4 (&VAR_1, FUNC_5 (' '));
  if (FUNC_2 (&VAR_1) == 0 || FUNC_6 (VAR_1.base, "ifndef") != 0)
    return 0;


  *VAR_3 = VAR_2;
  VAR_5 = FUNC_4 (&VAR_1, FUNC_5 (VAR_5));
  if (FUNC_2 (&VAR_1) == 0 || VAR_5 == VAR_0)
    return 0;
  VAR_7 = FUNC_7 (VAR_1.base);

  (void) FUNC_1 (VAR_5);
  VAR_5 = FUNC_3 (&VAR_1, '\n');
  if (VAR_5 == VAR_0)
    return 0;
  VAR_2++;

  for (;;)
    {
      VAR_5 = FUNC_5 (' ');
      if (VAR_5 == VAR_0)
 return 0;
      if (VAR_5 == '\n')
 {
   VAR_2++;
   continue;
 }
      if (VAR_5 != '#')
 goto skip_to_eol;
      VAR_5 = FUNC_4 (&VAR_1, FUNC_5 (' '));
      if (FUNC_2 (&VAR_1) == 0)
 ;
      else if (!FUNC_6 (VAR_1.base, "ifndef")
   || !FUNC_6 (VAR_1.base, "ifdef") || !FUNC_6 (VAR_1.base, "if"))
 {
   VAR_6++;
 }
      else if (!FUNC_6 (VAR_1.base, "endif"))
 {
   VAR_6--;
   if (VAR_6 == 0)
     break;
 }
      else if (!FUNC_6 (VAR_1.base, "else"))
 {
   if (VAR_6 == 1)
     return 0;
 }
      else if (!FUNC_6 (VAR_1.base, "define"))
 {
   VAR_5 = FUNC_5 (VAR_5);
   VAR_5 = FUNC_4 (&VAR_1, VAR_5);
   if (VAR_1.base[0] > 0 && FUNC_6 (VAR_1.base, VAR_7) == 0)
     VAR_8 = 1;
 }
    skip_to_eol:
      for (;;)
 {
   if (VAR_5 == '\n' || VAR_5 == VAR_0)
     break;
   VAR_5 = FUNC_0 ();
 }
      if (VAR_5 == VAR_0)
 return 0;
      VAR_2++;
    }

  if (!VAR_8)
     return 0;
  *VAR_4 = VAR_2;

  for (;;)
    {
      VAR_5 = FUNC_5 (' ');
      if (VAR_5 == VAR_0)
 break;
      if (VAR_5 != '\n')
 return 0;
    }

  return 1;
}
