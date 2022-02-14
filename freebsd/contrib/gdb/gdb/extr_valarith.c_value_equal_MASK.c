
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int FUNC_0 (struct value*) ;
 int FUNC_1 (struct type*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct type*) ;
 char* FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 struct type* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (struct value*) ;
 scalar_t__ FUNC_9 (struct value*) ;
 scalar_t__ FUNC_10 (struct value*) ;
 struct value* FUNC_11 (struct value*,struct value*,int ) ;
 scalar_t__ FUNC_12 (struct value*,struct value*) ;

int
FUNC_13 (struct value *VAR_6, struct value *VAR_7)
{
  int VAR_8;
  char *VAR_9, *VAR_10;
  struct type *VAR_11, *VAR_12;
  enum type_code VAR_13;
  enum type_code VAR_14;

  FUNC_0 (VAR_6);
  FUNC_0 (VAR_7);

  VAR_11 = FUNC_5 (FUNC_4 (VAR_6));
  VAR_12 = FUNC_5 (FUNC_4 (VAR_7));
  VAR_13 = FUNC_1 (VAR_11);
  VAR_14 = FUNC_1 (VAR_12);

  if ((VAR_13 == VAR_3 || VAR_13 == VAR_1) &&
      (VAR_14 == VAR_3 || VAR_14 == VAR_1))
    return FUNC_7 (FUNC_10 (FUNC_11 (VAR_6, VAR_7,
             VAR_0)));
  else if ((VAR_13 == VAR_2 || VAR_13 == VAR_3 || VAR_13 == VAR_1)
    && (VAR_14 == VAR_2 || VAR_14 == VAR_3 || VAR_14 == VAR_1))
    return FUNC_9 (VAR_6) == FUNC_9 (VAR_7);



  else if (VAR_13 == VAR_4 && (VAR_14 == VAR_3 || VAR_14 == VAR_1))
    return FUNC_8 (VAR_6) == (CORE_ADDR) FUNC_10 (VAR_7);
  else if (VAR_14 == VAR_4 && (VAR_13 == VAR_3 || VAR_13 == VAR_1))
    return (CORE_ADDR) FUNC_10 (VAR_6) == FUNC_8 (VAR_7);

  else if (VAR_13 == VAR_14
    && ((VAR_8 = (int) FUNC_2 (VAR_11))
        == (int) FUNC_2 (VAR_12)))
    {
      VAR_9 = FUNC_3 (VAR_6);
      VAR_10 = FUNC_3 (VAR_7);
      while (--VAR_8 >= 0)
 {
   if (*VAR_9++ != *VAR_10++)
     break;
 }
      return VAR_8 < 0;
    }
  else if (VAR_13 == VAR_5 && VAR_14 == VAR_5)
    {
      return FUNC_12 (VAR_6, VAR_7) == 0;
    }
  else
    {
      FUNC_6 ("Invalid type combination in equality test.");
      return 0;
    }
}
