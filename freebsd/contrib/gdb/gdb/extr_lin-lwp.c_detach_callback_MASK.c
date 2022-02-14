
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {scalar_t__ status; int ptid; scalar_t__ signalled; scalar_t__ stopped; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*,int ,char*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int ) ;
 char* FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int
FUNC_13 (struct lwp_info *VAR_5, void *VAR_6)
{
  FUNC_7 (VAR_5->status == 0 || FUNC_2 (VAR_5->status));

  if (VAR_2 && VAR_5->status)
    FUNC_6 (VAR_4, "DC:  Pending %s for %s on detach.\n",
   FUNC_11 (FUNC_3 (VAR_5->status)),
   FUNC_12 (VAR_5->ptid));

  while (VAR_5->signalled && VAR_5->stopped)
    {
      VAR_3 = 0;
      if (FUNC_8 (VAR_0, FUNC_0 (VAR_5->ptid), 0,
    FUNC_3 (VAR_5->status)) < 0)
 FUNC_5 ("Can't continue %s: %s", FUNC_12 (VAR_5->ptid),
        FUNC_9 (VAR_3));

      if (VAR_2)
 FUNC_6 (VAR_4,
       "DC:  PTRACE_CONTINUE (%s, 0, %s) (OK)\n",
       FUNC_12 (VAR_5->ptid),
       FUNC_10 (VAR_5->status));

      VAR_5->stopped = 0;
      VAR_5->signalled = 0;
      VAR_5->status = 0;







      FUNC_7 (VAR_5->status == 0 || FUNC_2 (VAR_5->status));
    }



  if (FUNC_0 (VAR_5->ptid) != FUNC_1 (VAR_5->ptid))
    {
      VAR_3 = 0;
      if (FUNC_8 (VAR_1, FUNC_0 (VAR_5->ptid), 0,
    FUNC_3 (VAR_5->status)) < 0)
 FUNC_5 ("Can't detach %s: %s", FUNC_12 (VAR_5->ptid),
        FUNC_9 (VAR_3));

      if (VAR_2)
 FUNC_6 (VAR_4,
       "PTRACE_DETACH (%s, %s, 0) (OK)\n",
       FUNC_12 (VAR_5->ptid),
       FUNC_11 (FUNC_3 (VAR_5->status)));

      FUNC_4 (VAR_5->ptid);
    }

  return 0;
}
