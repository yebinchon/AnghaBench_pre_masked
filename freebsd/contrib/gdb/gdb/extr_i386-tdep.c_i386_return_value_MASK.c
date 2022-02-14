
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct regcache {int dummy; } ;
struct gdbarch {int dummy; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
typedef enum return_value_convention { ____Placeholder_return_value_convention } return_value_convention ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct type*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct type*,int ) ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (int ) ;
 int FUNC_4 (struct gdbarch*,struct type*,struct regcache*,void*) ;
 int FUNC_5 (struct gdbarch*,struct type*) ;
 int FUNC_6 (struct gdbarch*,struct type*,struct regcache*,void const*) ;

__attribute__((used)) static enum return_value_convention
FUNC_7 (struct gdbarch *VAR_4, struct type *VAR_5,
     struct regcache *VAR_6, void *VAR_7,
     const void *VAR_8)
{
  enum type_code VAR_9 = FUNC_0 (VAR_5);

  if ((VAR_9 == VAR_2 || VAR_9 == VAR_3)
      && !FUNC_5 (VAR_4, VAR_5))
    return VAR_1;







  if (VAR_9 == VAR_2 && FUNC_2 (VAR_5) == 1)
    {
      VAR_5 = FUNC_3 (FUNC_1 (VAR_5, 0));
      return FUNC_7 (VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
    }

  if (VAR_7)
    FUNC_4 (VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_8)
    FUNC_6 (VAR_4, VAR_5, VAR_6, VAR_8);

  return VAR_0;
}
