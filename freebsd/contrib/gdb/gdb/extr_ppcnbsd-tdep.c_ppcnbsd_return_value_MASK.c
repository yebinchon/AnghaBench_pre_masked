
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct type*) ;
 scalar_t__ FUNC_2 (struct type*) ;
 int FUNC_3 (struct gdbarch*,struct type*,struct regcache*,void*,void const*) ;

__attribute__((used)) static enum return_value_convention
FUNC_4 (struct gdbarch *VAR_3, struct type *VAR_4,
        struct regcache *VAR_5, void *VAR_6,
        const void *VAR_7)
{
  if ((FUNC_0 (VAR_4) == VAR_1
       || FUNC_0 (VAR_4) == VAR_2)
      && !((FUNC_1 (VAR_4) == 16 || FUNC_1 (VAR_4) == 8)
     && FUNC_2 (VAR_4))
      && !(FUNC_1 (VAR_4) == 1
    || FUNC_1 (VAR_4) == 2
    || FUNC_1 (VAR_4) == 4
    || FUNC_1 (VAR_4) == 8))
    return VAR_0;
  else
    return FUNC_3 (VAR_3, VAR_4, VAR_5,
          VAR_6, VAR_7);
}
