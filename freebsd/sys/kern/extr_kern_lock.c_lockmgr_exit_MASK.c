
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct lock_object {int dummy; } ;
struct lock_class {int (* lc_unlock ) (struct lock_object*) ;} ;


 int VAR_0 ;
 struct lock_class* FUNC_0 (struct lock_object*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct lock_object*) ;

__attribute__((used)) static void
FUNC_4(u_int VAR_1, struct lock_object *VAR_2, int VAR_3)
{
 struct lock_class *VAR_4;

 if (VAR_1 & VAR_0) {
  VAR_4 = FUNC_0(VAR_2);
  VAR_4->lc_unlock(VAR_2);
 }

 if (FUNC_1(VAR_3))
  FUNC_2();
}
