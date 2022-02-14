
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (struct value*) ;
 int FUNC_3 (struct value*) ;
 struct type* FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct value*) ;
 int FUNC_7 (struct type*,int ,int ) ;
 struct value* FUNC_8 (int ,int) ;

struct value *
FUNC_9 (struct value *VAR_7, struct value *VAR_8)
{
  int VAR_9;
  struct type *VAR_10 = FUNC_4 (FUNC_3 (VAR_8));
  struct type *VAR_11 = FUNC_4 (FUNC_3 (VAR_7));
  if (FUNC_0 (VAR_11) == VAR_5)
    VAR_11 = FUNC_1 (VAR_11);
  if (FUNC_0 (VAR_10) != VAR_6)
    FUNC_5 ("Second argument of 'IN' has wrong type");
  if (FUNC_0 (VAR_11) != VAR_4
      && FUNC_0 (VAR_11) != VAR_2
      && FUNC_0 (VAR_11) != VAR_3
      && FUNC_0 (VAR_11) != VAR_1)
    FUNC_5 ("First argument of 'IN' has wrong type");
  VAR_9 = FUNC_7 (VAR_10, FUNC_2 (VAR_8),
       FUNC_6 (VAR_7));
  if (VAR_9 < 0)
    FUNC_5 ("First argument of 'IN' not in range");
  return FUNC_8 (VAR_0, VAR_9);
}
