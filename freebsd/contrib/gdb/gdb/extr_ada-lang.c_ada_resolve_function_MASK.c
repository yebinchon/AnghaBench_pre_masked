
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 int FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct symbol*,struct value**,int) ;
 struct type* VAR_0 ;
 struct type* FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (int ,struct type*) ;
 int FUNC_5 (struct symbol**,struct block**,int,int) ;

int
FUNC_6 (struct symbol *VAR_1[], struct block *VAR_2[],
        int VAR_3, struct value **VAR_4, int VAR_5,
        const char *VAR_6, struct type *VAR_7)
{
  int VAR_8;
  int VAR_9;
  struct type *VAR_10;
  struct type *VAR_11;

  VAR_11 = VAR_7;
  if (VAR_7 == ((void*)0))
    VAR_10 = VAR_0;
  else
    VAR_10 = ((void*)0);

  VAR_9 = 0;
  while (1)
    {
      for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8 += 1)
 {
   struct type *VAR_12 = FUNC_2 (FUNC_0 (VAR_1[VAR_8]));

   if (FUNC_1 (VAR_1[VAR_8], VAR_4, VAR_5)
       && FUNC_4 (FUNC_0 (VAR_1[VAR_8]), VAR_11))
     {
       VAR_1[VAR_9] = VAR_1[VAR_8];
       if (VAR_2 != ((void*)0))
  VAR_2[VAR_9] = VAR_2[VAR_8];
       VAR_9 += 1;
     }
 }
      if (VAR_9 > 0 || VAR_11 == VAR_10)
 break;
      else
 VAR_11 = VAR_10;
    }

  if (VAR_9 == 0)
    return -1;
  else if (VAR_9 > 1)
    {
      FUNC_3 ("Multiple matches for %s\n", VAR_6);
      FUNC_5 (VAR_1, VAR_2, VAR_9, 1);
      return 0;
    }
  return 0;
}
