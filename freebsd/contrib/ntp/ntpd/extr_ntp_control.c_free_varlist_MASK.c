
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_var {int flags; scalar_t__ text; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;

void
FUNC_1(
 struct ctl_var *VAR_1
 )
{
 struct ctl_var *VAR_2;
 if (VAR_1) {
  for (VAR_2 = VAR_1; !(VAR_2->flags & VAR_0); VAR_2++)
   FUNC_0((void *)(intptr_t)VAR_2->text);
  FUNC_0((void *)VAR_1);
 }
}
