
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void
FUNC_4 (ptid_t VAR_3, int VAR_4, enum target_signal VAR_5)
{
  if (FUNC_0 (VAR_0) != 42)
    FUNC_1 ("The program is not being run.");

  if (FUNC_3 ())
    FUNC_2 ("gdbsim_resume: step %d, signal %d\n", VAR_4, VAR_5);

  VAR_1 = VAR_5;
  VAR_2 = VAR_4;
}
