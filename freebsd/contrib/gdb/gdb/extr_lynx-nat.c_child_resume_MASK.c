
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptid_t ;
typedef enum target_signal { ____Placeholder_target_signal } target_signal ;
typedef int PTRACE_ARG3_TYPE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,int ,int ) ;
 int FUNC_3 (int) ;

void
FUNC_4 (ptid_t VAR_6, int VAR_7, enum target_signal VAR_8)
{
  int VAR_9;
  int VAR_10 = FUNC_0 (VAR_6);

  VAR_4 = 0;



  if (VAR_10 == -1)
    {
      VAR_10 = FUNC_0 (VAR_5);
      VAR_9 = VAR_7 ? VAR_2 : VAR_0;
    }
  else
    VAR_9 = VAR_7 ? VAR_3 : VAR_1;
  FUNC_2 (VAR_9, VAR_10, (PTRACE_ARG3_TYPE) 1, FUNC_3 (VAR_8));

  if (VAR_4)
    FUNC_1 ("ptrace");
}
