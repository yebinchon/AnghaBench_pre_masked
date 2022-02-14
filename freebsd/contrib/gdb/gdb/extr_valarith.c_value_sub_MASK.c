
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int LONGEST ;


 int VAR_0 ;
 int FUNC_0 (struct value*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct type*) ;
 int FUNC_3 (struct type*) ;
 int FUNC_4 (struct value*) ;
 int VAR_3 ;
 struct type* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct type*) ;
 scalar_t__ FUNC_8 (struct value*) ;
 int FUNC_9 (struct value*) ;
 struct value* FUNC_10 (struct value*,struct value*,int ) ;
 struct value* FUNC_11 (int ,int) ;
 struct value* FUNC_12 (struct type*,scalar_t__) ;

struct value *
FUNC_13 (struct value *VAR_4, struct value *VAR_5)
{
  struct type *VAR_6, *VAR_7;
  FUNC_0 (VAR_4);
  FUNC_0 (VAR_5);
  VAR_6 = FUNC_5 (FUNC_4 (VAR_4));
  VAR_7 = FUNC_5 (FUNC_4 (VAR_5));

  if (FUNC_1 (VAR_6) == VAR_2)
    {
      if (FUNC_1 (VAR_7) == VAR_1)
 {

   LONGEST VAR_8 = FUNC_7 (VAR_6);

   return FUNC_12 (VAR_6,
         (FUNC_8 (VAR_4)
          - (VAR_8 * FUNC_9 (VAR_5))));
 }
      else if (FUNC_1 (VAR_7) == VAR_2
        && FUNC_2 (FUNC_5 (FUNC_3 (VAR_6)))
        == FUNC_2 (FUNC_5 (FUNC_3 (VAR_7))))
 {

   LONGEST VAR_9 = FUNC_2 (FUNC_5 (FUNC_3 (VAR_6)));
   return FUNC_11
     (VAR_3,
      (FUNC_9 (VAR_4) - FUNC_9 (VAR_5)) / VAR_9);
 }
      else
 {
   FUNC_6 ("First argument of `-' is a pointer and second argument is neither\nan integer nor a pointer of the same type.");


 }
    }

  return FUNC_10 (VAR_4, VAR_5, VAR_0);
}
