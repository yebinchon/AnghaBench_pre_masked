
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct type*,struct regcache*,void*) ;
 int FUNC_2 (struct type*,struct regcache*,void const*) ;
 scalar_t__ FUNC_3 (struct type*) ;
 scalar_t__ FUNC_4 (struct type*) ;

__attribute__((used)) static enum return_value_convention
FUNC_5 (struct gdbarch *VAR_2, struct type *VAR_3,
        struct regcache *VAR_4, void *VAR_5,
        const void *VAR_6)
{
  if (FUNC_4 (VAR_3)
      || (FUNC_3 (VAR_3) && FUNC_0 (VAR_3) == 16))
    return VAR_1;

  if (VAR_5)
    FUNC_1 (VAR_3, VAR_4, VAR_5);
  if (VAR_6)
    FUNC_2 (VAR_3, VAR_4, VAR_6);

  return VAR_0;
}
