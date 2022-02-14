
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stack {int dummy; } ;
struct TYPE_2__ {int (* dbbe_trace ) () ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct stack*) ;
 int FUNC_2 (struct stack*) ;
 int FUNC_3 (struct stack*) ;
 int FUNC_4 () ;

void
FUNC_5(void)
{

 if (VAR_0 != ((void*)0) && VAR_0->dbbe_trace != ((void*)0)) {
  FUNC_0("KDB: stack backtrace:\n");
  VAR_0->dbbe_trace();
 }
}
