
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct radius_attr_type {scalar_t__ type; } ;


 size_t VAR_0 ;
 struct radius_attr_type const* VAR_1 ;

__attribute__((used)) static const struct radius_attr_type *FUNC_0(u8 VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2 == VAR_1[VAR_3].type)
   return &VAR_1[VAR_3];
 }

 return ((void*)0);
}
