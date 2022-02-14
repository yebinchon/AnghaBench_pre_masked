
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
typedef int LONGEST ;


 int FUNC_0 (char*,size_t,int) ;
 int FUNC_1 (struct value*) ;
 struct value* FUNC_2 (char*,struct value*,int ,int ) ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char*) ;
 int FUNC_6 (struct value*) ;

__attribute__((used)) static int
FUNC_7 (char *VAR_0, int VAR_1, struct value *VAR_2, LONGEST * VAR_3,
      int *VAR_4)
{
  static char *VAR_5 = ((void*)0);
  static size_t VAR_6 = 0;
  char *VAR_7;
  char *VAR_8;
  struct value *VAR_9;

  if (VAR_2 == ((void*)0) || VAR_0 == ((void*)0) || VAR_0[VAR_1] == '\0')
    return 0;

  VAR_8 = FUNC_5 (VAR_0 + VAR_1, "__");
  if (VAR_8 == ((void*)0))
    {
      VAR_7 = VAR_0 + VAR_1;
      VAR_1 += FUNC_3 (VAR_7);
    }
  else
    {
      FUNC_0 (VAR_5, VAR_6, VAR_8 - (VAR_0 + VAR_1) + 1);
      VAR_7 = VAR_5;
      FUNC_4 (VAR_5, VAR_0 + VAR_1, VAR_8 - (VAR_0 + VAR_1));
      VAR_7[VAR_8 - (VAR_0 + VAR_1)] = '\0';
      VAR_1 = VAR_8 - VAR_0;
    }

  VAR_9 = FUNC_2 (VAR_7, VAR_2, 0, FUNC_1 (VAR_2));
  if (VAR_9 == ((void*)0))
    return 0;

  *VAR_3 = FUNC_6 (VAR_9);
  if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_1;
  return 1;
}
