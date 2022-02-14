
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sx {int dummy; } ;
struct lock_object {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sx*,int) ;
 int FUNC_1 (struct sx*) ;
 scalar_t__ FUNC_2 (struct sx*) ;
 int FUNC_3 (struct sx*) ;

uintptr_t
FUNC_4(struct lock_object *VAR_2)
{
 struct sx *VAR_3;

 VAR_3 = (struct sx *)VAR_2;
 FUNC_0(VAR_3, VAR_0 | VAR_1);
 if (FUNC_2(VAR_3)) {
  FUNC_3(VAR_3);
  return (0);
 } else {
  FUNC_1(VAR_3);
  return (1);
 }
}
