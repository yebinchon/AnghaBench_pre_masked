
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct TYPE_2__ {struct type* (* rtti_type ) (struct value*,int*,int*,int*) ;} ;


 TYPE_1__ VAR_0 ;
 struct type* FUNC_0 (struct value*,int*,int*,int*) ;

struct type *
FUNC_1 (struct value *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4)
{
  if ((VAR_0.rtti_type) == ((void*)0))
    return ((void*)0);
  return (*VAR_0.rtti_type) (VAR_1, VAR_2, VAR_3, VAR_4);
}
