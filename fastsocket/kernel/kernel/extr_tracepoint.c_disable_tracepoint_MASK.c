
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {int funcs; scalar_t__ state; int (* unregfunc ) () ;} ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct tracepoint *VAR_0)
{
 if (VAR_0->unregfunc && VAR_0->state)
  VAR_0->unregfunc();

 VAR_0->state = 0;
 FUNC_0(VAR_0->funcs, ((void*)0));
}
