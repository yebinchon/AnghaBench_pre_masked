
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execution_control_state {scalar_t__ stepping_through_solib_after_catch; int handling_longjmp; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1 (struct execution_control_state *VAR_4)
{
  return ((VAR_2 == ((void*)0)
    && !VAR_4->handling_longjmp
    && ((VAR_0 && VAR_1 == ((void*)0))
        || VAR_3))
   || VAR_4->stepping_through_solib_after_catch
   || FUNC_0 ());
}
