
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_2__ {struct file* td_fpop; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct file*) ;

void
FUNC_1(void)
{
 struct file *VAR_1;

 VAR_1 = VAR_0->td_fpop;
 if (VAR_1 == ((void*)0))
  return;
 FUNC_0(VAR_1);
}
