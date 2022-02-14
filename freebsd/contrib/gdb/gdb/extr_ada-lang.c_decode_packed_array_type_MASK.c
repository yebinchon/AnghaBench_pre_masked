
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 struct type* FUNC_2 (struct symbol*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ,struct symbol***,struct block***) ;
 char* FUNC_5 (struct type*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 struct type* FUNC_7 (struct type*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char const*,int) ;
 struct type* FUNC_10 (struct type*,long*) ;
 int FUNC_11 (char*,char*,long*) ;
 scalar_t__ FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,char*) ;
 int FUNC_14 (char*) ;

__attribute__((used)) static struct type *
FUNC_15 (struct type *VAR_3)
{
  struct symbol **VAR_4;
  struct block **VAR_5;
  const char *VAR_6 = FUNC_5 (FUNC_7 (VAR_3));
  char *VAR_7 = (char *) FUNC_6 (FUNC_12 (VAR_6) + 1);
  char *VAR_8 = FUNC_13 (VAR_6, "___XP");
  struct type *VAR_9;
  long VAR_10;
  int VAR_11, VAR_12;

  FUNC_9 (VAR_7, VAR_6, VAR_8 - VAR_6);
  VAR_7[VAR_8 - VAR_6] = '\000';



  VAR_12 = FUNC_4 (VAR_7, FUNC_8 (((void*)0)),
         VAR_2, &VAR_4, &VAR_5);
  for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11 += 1)
    if (VAR_4[VAR_11] != ((void*)0) && FUNC_1 (VAR_4[VAR_11]) == VAR_0
 && FUNC_0 (VAR_7, FUNC_5 (FUNC_2 (VAR_4[VAR_11]))))
      break;
  if (VAR_11 >= VAR_12)
    {
      FUNC_14 ("could not find bounds information on packed array");
      return ((void*)0);
    }
  VAR_9 = FUNC_2 (VAR_4[VAR_11]);

  if (FUNC_3 (VAR_9) != VAR_1)
    {
      FUNC_14 ("could not understand bounds information on packed array");
      return ((void*)0);
    }

  if (FUNC_11 (VAR_8 + sizeof ("___XP") - 1, "%ld", &VAR_10) != 1)
    {
      FUNC_14 ("could not understand bit size information on packed array");
      return ((void*)0);
    }

  return FUNC_10 (VAR_9, &VAR_10);
}
