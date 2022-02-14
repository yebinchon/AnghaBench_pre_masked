
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urwlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct urwlock*,int *) ;
 scalar_t__ FUNC_2 (struct urwlock*) ;

void
FUNC_3(struct urwlock *VAR_1)
{
 int VAR_2;

 for (;;) {
  if (FUNC_2(VAR_1) == 0)
   return;
  VAR_2 = FUNC_1(VAR_1, ((void*)0));
  if (VAR_2 == 0)
   return;
  if (VAR_2 != VAR_0)
   FUNC_0("wrlock error");
 }
}
