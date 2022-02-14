
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct value*) ;
 struct value* FUNC_1 (struct type*) ;
 int FUNC_2 (int ,struct type*,int ) ;

struct value *
FUNC_3 (struct type *VAR_0, CORE_ADDR VAR_1)
{
  struct value *VAR_2 = FUNC_1 (VAR_0);
  FUNC_2 (FUNC_0 (VAR_2), VAR_0, VAR_1);
  return VAR_2;
}
