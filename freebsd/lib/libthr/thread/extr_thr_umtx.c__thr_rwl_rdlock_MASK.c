
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urwlock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (struct urwlock*,int ,int *) ;
 scalar_t__ FUNC_2 (struct urwlock*,int ) ;

void
FUNC_3(struct urwlock *VAR_2)
{
 int VAR_3;

 for (;;) {
  if (FUNC_2(VAR_2, VAR_1) == 0)
   return;
  VAR_3 = FUNC_1(VAR_2, VAR_1, ((void*)0));
  if (VAR_3 == 0)
   return;
  if (VAR_3 != VAR_0)
   FUNC_0("rdlock error");
 }
}
