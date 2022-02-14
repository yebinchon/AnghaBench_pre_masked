
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char const* mangled; char const* demangled; } ;


 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char*,size_t,int) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (char*,char*,char const*) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,char*) ;

char *
FUNC_11 (const char *VAR_1)
{
  int VAR_2, VAR_3;
  int VAR_4;
  const char *VAR_5;
  char *VAR_6;
  int VAR_7;
  static char *VAR_8 = ((void*)0);
  static size_t VAR_9 = 0;

  if (FUNC_1 (VAR_1, "_ada_", 5))
    VAR_1 += 5;

  if (VAR_1[0] == '_' || VAR_1[0] == '<')
    goto Suppress;

  VAR_5 = FUNC_10 (VAR_1, "___");
  if (VAR_5 == ((void*)0))
    VAR_4 = FUNC_9 (VAR_1);
  else
    {
      if (VAR_5[3] == 'X')
 VAR_4 = VAR_5 - VAR_1;
      else
 goto Suppress;
    }
  if (VAR_4 > 3 && FUNC_0 (VAR_1 + VAR_4 - 3, "TKB"))
    VAR_4 -= 3;
  if (VAR_4 > 1 && FUNC_0 (VAR_1 + VAR_4 - 1, "B"))
    VAR_4 -= 1;


  FUNC_2 (VAR_8, VAR_9, 2 * VAR_4 + 1);
  VAR_6 = VAR_8;

  if (FUNC_5 (VAR_1[VAR_4 - 1]))
    {
      for (VAR_2 = VAR_4 - 2; VAR_2 >= 0 && FUNC_5 (VAR_1[VAR_2]); VAR_2 -= 1)
 ;
      if (VAR_2 > 1 && VAR_1[VAR_2] == '_' && VAR_1[VAR_2 - 1] == '_')
 VAR_4 = VAR_2 - 1;
      else if (VAR_1[VAR_2] == '$')
 VAR_4 = VAR_2;
    }

  for (VAR_2 = 0, VAR_3 = 0; VAR_2 < VAR_4 && !FUNC_4 (VAR_1[VAR_2]); VAR_2 += 1, VAR_3 += 1)
    VAR_6[VAR_3] = VAR_1[VAR_2];

  VAR_7 = 1;
  while (VAR_2 < VAR_4)
    {
      if (VAR_7 && VAR_1[VAR_2] == 'O')
 {
   int VAR_10;
   for (VAR_10 = 0; VAR_0[VAR_10].mangled != ((void*)0); VAR_10 += 1)
     {
       int VAR_11 = FUNC_9 (VAR_0[VAR_10].mangled);
       if (FUNC_1
    (VAR_0[VAR_10].mangled + 1, VAR_1 + VAR_2 + 1,
     VAR_11 - 1) && !FUNC_3 (VAR_1[VAR_2 + VAR_11]))
  {
    FUNC_8 (VAR_6 + VAR_3, VAR_0[VAR_10].demangled);
    VAR_7 = 0;
    VAR_2 += VAR_11;
    VAR_3 += FUNC_9 (VAR_0[VAR_10].demangled);
    break;
  }
     }
   if (VAR_0[VAR_10].mangled != ((void*)0))
     continue;
 }
      VAR_7 = 0;

      if (VAR_2 < VAR_4 - 4 && FUNC_1 (VAR_1 + VAR_2, "TK__", 4))
 VAR_2 += 2;
      if (VAR_1[VAR_2] == 'X' && VAR_2 != 0 && FUNC_3 (VAR_1[VAR_2 - 1]))
 {
   do
     VAR_2 += 1;
   while (VAR_2 < VAR_4 && (VAR_1[VAR_2] == 'b' || VAR_1[VAR_2] == 'n'));
   if (VAR_2 < VAR_4)
     goto Suppress;
 }
      else if (VAR_2 < VAR_4 - 2 && VAR_1[VAR_2] == '_' && VAR_1[VAR_2 + 1] == '_')
 {
   VAR_6[VAR_3] = '.';
   VAR_7 = 1;
   VAR_2 += 2;
   VAR_3 += 1;
 }
      else
 {
   VAR_6[VAR_3] = VAR_1[VAR_2];
   VAR_2 += 1;
   VAR_3 += 1;
 }
    }
  VAR_6[VAR_3] = '\000';

  for (VAR_2 = 0; VAR_6[VAR_2] != '\0'; VAR_2 += 1)
    if (FUNC_6 (VAR_6[VAR_2]) || VAR_6[VAR_2] == ' ')
      goto Suppress;

  return VAR_6;

Suppress:
  FUNC_2 (VAR_8, VAR_9, FUNC_9 (VAR_1) + 3);
  VAR_6 = VAR_8;
  if (VAR_1[0] == '<')
    FUNC_8 (VAR_6, VAR_1);
  else
    FUNC_7 (VAR_6, "<%s>", VAR_1);
  return VAR_6;

}
