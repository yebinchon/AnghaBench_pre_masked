
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* value; int * name; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,unsigned int) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 int FUNC_5 (char*,char const*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char const*,char*) ;

__attribute__((used)) static void
FUNC_8 (const char *VAR_1, const char *VAR_2)
{
  unsigned int VAR_3, VAR_4, VAR_5;
  const char *VAR_6, *VAR_7, *VAR_8;
  char *VAR_9, *VAR_10;

  if (VAR_0[0].name == ((void*)0))
    return;

  for (VAR_3 = 0; VAR_3 < FUNC_0 (VAR_0); VAR_3++)
    if (FUNC_4 (VAR_0[VAR_3].name, VAR_1) == 0)
      break;
  if (VAR_3 == FUNC_0 (VAR_0))
    return;

  VAR_8 = VAR_0[VAR_3].value;
  VAR_5 = FUNC_6 (VAR_8);


  VAR_4 = 0;
  VAR_6 = VAR_2;
  while ((VAR_6 = FUNC_7 (VAR_6, "%(VALUE)")) != ((void*)0))
    {
      VAR_6 ++;
      VAR_4 ++;
    }


  VAR_9 = FUNC_1 (FUNC_6 (VAR_2) + 1
       + VAR_4 * (VAR_5 - FUNC_6 ("%(VALUE)")));
  VAR_10 = VAR_9;
  VAR_7 = VAR_2;
  while ((VAR_6 = FUNC_7 (VAR_7, "%(VALUE)")) != ((void*)0))
    {
      FUNC_3 (VAR_10, VAR_7, VAR_6 - VAR_7);
      VAR_10 = VAR_10 + (VAR_6 - VAR_7);
      FUNC_3 (VAR_10, VAR_8, VAR_5);
      VAR_10 += VAR_5;
      VAR_7 = VAR_6 + FUNC_6 ("%(VALUE)");
    }
  FUNC_5 (VAR_10, VAR_7);

  FUNC_2 (VAR_9);
}
