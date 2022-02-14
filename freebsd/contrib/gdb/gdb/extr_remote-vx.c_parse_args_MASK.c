
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int arg_array_len; char** arg_array_val; } ;
typedef TYPE_1__ arg_array ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char,int) ;
 char* FUNC_2 (char*,int) ;
 char* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_0, arg_array *VAR_1)
{
  int VAR_2 = 0;
  int VAR_3 = 0;
  char *VAR_4;

  FUNC_1 ((char *) VAR_1, '\0', sizeof (arg_array));



  VAR_4 = VAR_0;
  while (*VAR_4 != '\0')
    {
      if (*(VAR_4 = FUNC_3 (VAR_4)) == '\0')
 break;
      VAR_4 = FUNC_0 (VAR_4);
      VAR_2++;
    }

  VAR_1->arg_array_len = VAR_2;
  VAR_1->arg_array_val = (char **) FUNC_4 ((VAR_2 + 1)
       * sizeof (char *));



  while (*(VAR_0 = FUNC_3 (VAR_0)))
    {
      VAR_4 = FUNC_0 (VAR_0);
      VAR_1->arg_array_val[VAR_3++] = FUNC_2 (VAR_0,
          VAR_4 - VAR_0);
      VAR_0 = VAR_4;
    }

  VAR_1->arg_array_val[VAR_2] = ((void*)0);
}
