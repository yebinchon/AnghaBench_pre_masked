
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radius_msg {int dummy; } ;
struct extra_radius_attr {struct extra_radius_attr* next; } ;


 scalar_t__ FUNC_0 (struct radius_msg*,struct extra_radius_attr*) ;

__attribute__((used)) static int FUNC_1(struct radius_msg *VAR_0,
      struct extra_radius_attr *VAR_1)
{
 struct extra_radius_attr *VAR_2;
 for (VAR_2 = VAR_1; VAR_2; VAR_2 = VAR_2->next) {
  if (FUNC_0(VAR_0, VAR_2) < 0)
   return -1;
 }
 return 0;
}
