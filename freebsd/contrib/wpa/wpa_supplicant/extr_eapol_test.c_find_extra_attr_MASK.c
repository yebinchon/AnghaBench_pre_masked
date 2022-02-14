
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct extra_radius_attr {scalar_t__ type; struct extra_radius_attr* next; } ;



__attribute__((used)) static struct extra_radius_attr *
FUNC_0(struct extra_radius_attr *VAR_0, u8 VAR_1)
{
 struct extra_radius_attr *VAR_2;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next) {
  if (VAR_2->type == VAR_1)
   return VAR_2;
 }
 return ((void*)0);
}
