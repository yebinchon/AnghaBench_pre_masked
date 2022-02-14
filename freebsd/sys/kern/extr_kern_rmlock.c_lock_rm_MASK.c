
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rmlock {int dummy; } ;
struct rm_priotracker {int dummy; } ;
struct lock_object {int dummy; } ;


 int FUNC_0 (struct rmlock*,struct rm_priotracker*) ;
 int FUNC_1 (struct rmlock*) ;

__attribute__((used)) static void
FUNC_2(struct lock_object *VAR_0, uintptr_t VAR_1)
{
 struct rmlock *VAR_2;
 struct rm_priotracker *VAR_3;

 VAR_2 = (struct rmlock *)VAR_0;
 if (VAR_1 == 0)
  FUNC_1(VAR_2);
 else {
  VAR_3 = (struct rm_priotracker *)VAR_1;
  FUNC_0(VAR_2, VAR_3);
 }
}
