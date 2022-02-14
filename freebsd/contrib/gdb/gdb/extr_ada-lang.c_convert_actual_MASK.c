
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int CORE_ADDR ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct type*) ;
 struct type* FUNC_2 (struct type*) ;
 scalar_t__ FUNC_3 (struct value*) ;
 scalar_t__ FUNC_4 (struct value*) ;
 scalar_t__ FUNC_5 (struct value*) ;
 struct type* FUNC_6 (struct value*) ;
 scalar_t__ FUNC_7 (struct type*) ;
 struct value* FUNC_8 (struct value*) ;
 struct value* FUNC_9 (struct type*) ;
 struct type* FUNC_10 (struct type*) ;
 struct value* FUNC_11 (struct value*) ;
 scalar_t__ VAR_2 ;
 struct value* FUNC_12 (struct type*,struct value*,int *) ;
 int FUNC_13 (char*,char*,int ) ;
 struct value* FUNC_14 (struct value*,int *) ;
 struct value* FUNC_15 (struct value*) ;

__attribute__((used)) static struct value *
FUNC_16 (struct value *VAR_3, struct type *VAR_4,
  CORE_ADDR *VAR_5)
{
  struct type *VAR_6 = FUNC_10 (FUNC_6 (VAR_3));
  struct type *VAR_7 = FUNC_10 (VAR_4);
  struct type *VAR_8 =
    FUNC_0 (VAR_7) == VAR_1
    ? FUNC_10 (FUNC_2 (VAR_7)) : VAR_7;
  struct type *VAR_9 =
    FUNC_0 (VAR_6) == VAR_1
    ? FUNC_10 (FUNC_2 (VAR_6)) : VAR_6;

  if (FUNC_7 (VAR_8)
      && FUNC_0 (VAR_9) == VAR_0)
    return FUNC_12 (VAR_7, VAR_3, VAR_5);
  else if (FUNC_0 (VAR_7) == VAR_1)
    {
      if (FUNC_0 (VAR_8) == VAR_0
   && FUNC_7 (VAR_9))
 return FUNC_11 (VAR_3);
      else if (FUNC_0 (VAR_6) != VAR_1)
 {
   if (FUNC_5 (VAR_3) != VAR_2)
     {
       struct value *VAR_10;
       VAR_6 = FUNC_10 (FUNC_6 (VAR_3));
       VAR_10 = FUNC_9 (VAR_6);
       FUNC_13 ((char *) FUNC_4 (VAR_10),
        (char *) FUNC_3 (VAR_3),
        FUNC_1 (VAR_6));
       VAR_3 = FUNC_14 (VAR_10, VAR_5);
     }
   return FUNC_15 (VAR_3);
 }
    }
  else if (FUNC_0 (VAR_6) == VAR_1)
    return FUNC_8 (VAR_3);

  return VAR_3;
}
