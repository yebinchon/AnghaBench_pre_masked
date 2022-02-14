
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int (* return_value ) (struct gdbarch*,struct type*,struct regcache*,void*,void const*) ;} ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct gdbarch*,struct type*,struct regcache*,void*,void const*) ;

enum return_value_convention
FUNC_3 (struct gdbarch *VAR_2, struct type *VAR_3, struct regcache *VAR_4, void *VAR_5, const void *VAR_6)
{
  FUNC_1 (VAR_2 != ((void*)0));
  FUNC_1 (VAR_2->return_value != ((void*)0));
  if (VAR_1 >= 2)
    FUNC_0 (VAR_0, "gdbarch_return_value called\n");
  return VAR_2->return_value (VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
