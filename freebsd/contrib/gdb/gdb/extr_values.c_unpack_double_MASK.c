
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef double ULONGEST ;
typedef double DOUBLEST ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*) ;
 int VAR_0 ;
 int FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 double FUNC_4 (char const*,struct type*) ;
 int FUNC_5 (struct type*) ;
 int FUNC_6 (int ,char const*) ;
 double FUNC_7 (struct type*,char const*) ;

DOUBLEST
FUNC_8 (struct type *VAR_1, const char *VAR_2, int *VAR_3)
{
  enum type_code VAR_4;
  int VAR_5;
  int VAR_6;

  *VAR_3 = 0;
  FUNC_0 (VAR_1);
  VAR_4 = FUNC_1 (VAR_1);
  VAR_5 = FUNC_2 (VAR_1);
  VAR_6 = FUNC_3 (VAR_1);
  if (VAR_4 == VAR_0)
    {
      if (!FUNC_6 (FUNC_5 (VAR_1), VAR_2))
 {
   *VAR_3 = 1;
   return 0.0;
 }

      return FUNC_4 (VAR_2, VAR_1);
    }
  else if (VAR_6)
    {

      return (ULONGEST) FUNC_7 (VAR_1, VAR_2);
    }
  else
    {

      return FUNC_7 (VAR_1, VAR_2);
    }
}
