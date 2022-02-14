
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int status; scalar_t__ stopped; int ptid; int * next; } ;
typedef int sigset_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,char*,int,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int ) ;
 struct lwp_info* VAR_4 ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int FUNC_9 (struct lwp_info*,int *) ;

__attribute__((used)) static int
FUNC_10 (struct lwp_info *VAR_5, void *VAR_6)
{
  sigset_t *VAR_7 = VAR_6;
  sigset_t VAR_8, VAR_9, VAR_10, VAR_11;
  int VAR_12, VAR_13;




  if (VAR_4 == VAR_5 && VAR_5->next == ((void*)0))
    if (!FUNC_5 (VAR_5->ptid))
      return 0;
  if (VAR_5->status)
    {
      if (VAR_1)
 FUNC_6 ("FC: LP has pending status %06x\n", VAR_5->status);
      if (FUNC_1 (VAR_5->status) && FUNC_8 (VAR_7, FUNC_2 (VAR_5->status)))
 VAR_5->status = 0;
    }

  while (FUNC_4 (FUNC_0 (VAR_5->ptid), &VAR_8, VAR_7))
    {
      int VAR_14;

      VAR_2 = 0;
      VAR_14 = FUNC_7 (VAR_0, FUNC_0 (VAR_5->ptid), 0, 0);
      if (VAR_1)
 FUNC_3 (VAR_3,
       "FC: Sent PTRACE_CONT, ret %d %d\n", VAR_14, VAR_2);

      VAR_5->stopped = 0;
      FUNC_9 (VAR_5, VAR_7);
      if (VAR_1)
 FUNC_3 (VAR_3,
       "FC: Wait finished; saved status is %d\n",
       VAR_5->status);
    }

  return 0;
}
