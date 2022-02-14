
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
 int FUNC_2 (struct value*) ;
 struct type* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct value*) ;
 scalar_t__ FUNC_7 (struct value*) ;
 scalar_t__ FUNC_8 (struct value*) ;
 struct value* FUNC_9 (struct value*,struct value*,int ) ;
 scalar_t__ FUNC_10 (struct value*,struct value*) ;

int
FUNC_11 (struct value *VAR_6, struct value *VAR_7)
{
  enum type_code VAR_8;
  enum type_code VAR_9;
  struct type *VAR_10, *VAR_11;

  FUNC_0 (VAR_6);
  FUNC_0 (VAR_7);

  VAR_10 = FUNC_3 (FUNC_2 (VAR_6));
  VAR_11 = FUNC_3 (FUNC_2 (VAR_7));
  VAR_8 = FUNC_1 (VAR_10);
  VAR_9 = FUNC_1 (VAR_11);

  if ((VAR_8 == VAR_3 || VAR_8 == VAR_1) &&
      (VAR_9 == VAR_3 || VAR_9 == VAR_1))
    return FUNC_5 (FUNC_8 (FUNC_9 (VAR_6, VAR_7,
             VAR_0)));
  else if ((VAR_8 == VAR_2 || VAR_8 == VAR_3 || VAR_8 == VAR_1)
    && (VAR_9 == VAR_2 || VAR_9 == VAR_3 || VAR_9 == VAR_1))
    return FUNC_7 (VAR_6) < FUNC_7 (VAR_7);
  else if (VAR_8 == VAR_4 && VAR_9 == VAR_4)
    return FUNC_6 (VAR_6) < FUNC_6 (VAR_7);



  else if (VAR_8 == VAR_4 && (VAR_9 == VAR_3 || VAR_9 == VAR_1))
    return FUNC_6 (VAR_6) < (CORE_ADDR) FUNC_8 (VAR_7);
  else if (VAR_9 == VAR_4 && (VAR_8 == VAR_3 || VAR_8 == VAR_1))
    return (CORE_ADDR) FUNC_8 (VAR_6) < FUNC_6 (VAR_7);
  else if (VAR_8 == VAR_5 && VAR_9 == VAR_5)
    return FUNC_10 (VAR_6, VAR_7) < 0;
  else
    {
      FUNC_4 ("Invalid type combination in ordering comparison.");
      return 0;
    }
}
