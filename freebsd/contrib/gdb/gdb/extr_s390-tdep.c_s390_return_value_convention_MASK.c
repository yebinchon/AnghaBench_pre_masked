
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct type*) ;



 int FUNC_1 (struct type*) ;

__attribute__((used)) static enum return_value_convention
FUNC_2 (struct gdbarch *VAR_2, struct type *VAR_3)
{
  int VAR_4 = FUNC_1 (VAR_3);
  if (VAR_4 > 8)
    return VAR_1;

  switch (FUNC_0 (VAR_3))
    {
    case 129:
    case 128:
    case 130:
      return VAR_1;

    default:
      return VAR_0;
    }
}
