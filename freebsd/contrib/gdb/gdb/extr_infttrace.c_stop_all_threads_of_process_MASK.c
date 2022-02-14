
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;
typedef int lwpid_t ;
typedef int TTRACE_ARG_TYPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int ,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2 (pid_t VAR_3)
{
  int VAR_4;

  VAR_4 = FUNC_0 (VAR_1,
     (pid_t) VAR_3,
     (lwpid_t) VAR_0,
     (TTRACE_ARG_TYPE) VAR_0,
     (TTRACE_ARG_TYPE) VAR_0,
     VAR_0);
  if (VAR_2)
    FUNC_1 ("ttrace stop of other threads");
}
