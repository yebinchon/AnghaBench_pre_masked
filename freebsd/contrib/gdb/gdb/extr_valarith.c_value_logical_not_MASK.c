
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct type*) ;
 char* FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 struct type* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct value*) ;

int
FUNC_7 (struct value *VAR_1)
{
  int VAR_2;
  char *VAR_3;
  struct type *VAR_4;

  FUNC_0 (VAR_1);
  VAR_4 = FUNC_5 (FUNC_4 (VAR_1));

  if (FUNC_1 (VAR_4) == VAR_0)
    return 0 == FUNC_6 (VAR_1);

  VAR_2 = FUNC_2 (VAR_4);
  VAR_3 = FUNC_3 (VAR_1);

  while (--VAR_2 >= 0)
    {
      if (*VAR_3++)
 break;
    }

  return VAR_2 < 0;
}
