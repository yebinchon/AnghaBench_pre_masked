
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;


 struct type* FUNC_0 (struct value*) ;
 struct value* FUNC_1 (struct value*,int ,struct type*) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (int ) ;

struct value *
FUNC_4 (struct value *VAR_0)
{
  struct type *VAR_1 =
    FUNC_3 (FUNC_2 (FUNC_0 (VAR_0)));
  if (VAR_1 == FUNC_0 (VAR_0))
    return VAR_0;
  else
    return FUNC_1 (VAR_0, 0, VAR_1);
}
