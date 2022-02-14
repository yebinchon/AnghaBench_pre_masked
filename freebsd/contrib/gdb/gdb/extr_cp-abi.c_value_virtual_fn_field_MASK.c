
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct fn_field {int dummy; } ;
struct TYPE_2__ {struct value* (* virtual_fn_field ) (struct value**,struct fn_field*,int,struct type*,int) ;} ;


 TYPE_1__ VAR_0 ;
 struct value* FUNC_0 (struct value**,struct fn_field*,int,struct type*,int) ;

struct value *
FUNC_1 (struct value **VAR_1, struct fn_field *VAR_2, int VAR_3,
   struct type *VAR_4, int VAR_5)
{
  if ((VAR_0.virtual_fn_field) == ((void*)0))
    return ((void*)0);
  return (*VAR_0.virtual_fn_field) (VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
