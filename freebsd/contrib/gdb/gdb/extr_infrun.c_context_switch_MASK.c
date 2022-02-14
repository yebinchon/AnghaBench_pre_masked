
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct execution_control_state {int ptid; int current_symtab; int current_line; int stepping_through_sigtramp; int stepping_through_solib_catchpoints; int stepping_through_solib_after_catch; int another_trap; int handling_longjmp; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_3 (struct execution_control_state *VAR_9)
{






  if (FUNC_0 (VAR_0) && FUNC_0 (VAR_9->ptid))
    {

      FUNC_2 (VAR_0, VAR_1,
    VAR_8, VAR_5,
    VAR_7, VAR_4,
    VAR_3, &VAR_2,
    VAR_9->handling_longjmp, VAR_9->another_trap,
    VAR_9->stepping_through_solib_after_catch,
    VAR_9->stepping_through_solib_catchpoints,
    VAR_9->stepping_through_sigtramp,
    VAR_9->current_line, VAR_9->current_symtab, VAR_6);


      FUNC_1 (VAR_9->ptid, &VAR_1,
    &VAR_8, &VAR_5,
    &VAR_7, &VAR_4,
    &VAR_3, &VAR_2,
    &VAR_9->handling_longjmp, &VAR_9->another_trap,
    &VAR_9->stepping_through_solib_after_catch,
    &VAR_9->stepping_through_solib_catchpoints,
    &VAR_9->stepping_through_sigtramp,
    &VAR_9->current_line, &VAR_9->current_symtab, &VAR_6);
    }
  VAR_0 = VAR_9->ptid;
}
