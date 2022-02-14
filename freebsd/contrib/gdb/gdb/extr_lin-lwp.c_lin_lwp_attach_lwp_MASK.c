
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int cloned; int stopped; } ;
typedef int ptid_t ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_4 ;
 struct lwp_info* FUNC_4 (int ) ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (char*,int ,char*) ;
 struct lwp_info* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ,...) ;
 int FUNC_9 (int) ;
 int VAR_8 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ FUNC_12 (int ,int,int ,int ) ;
 char* FUNC_13 (scalar_t__) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int,int*,int ) ;

void
FUNC_20 (ptid_t VAR_9, int VAR_10)
{
  struct lwp_info *VAR_11;

  FUNC_9 (FUNC_10 (VAR_9));



  if (!FUNC_15 (&VAR_5, VAR_2))
    {
      FUNC_14 (&VAR_5, VAR_2);
      FUNC_16 (VAR_3, &VAR_5, ((void*)0));
    }

  if (VAR_10)
    FUNC_11 ("[New %s]\n", FUNC_18 (VAR_9));

  VAR_11 = FUNC_7 (VAR_9);
  if (VAR_11 == ((void*)0))
    VAR_11 = FUNC_4 (VAR_9);



  if (FUNC_0 (VAR_9) != FUNC_1 (VAR_9))
    {
      pid_t VAR_12;
      int VAR_13;

      if (FUNC_12 (VAR_1, FUNC_0 (VAR_9), 0, 0) < 0)
 FUNC_6 ("Can't attach %s: %s", FUNC_18 (VAR_9),
        FUNC_13 (VAR_7));

      if (VAR_6)
 FUNC_8 (VAR_8,
       "LLAL: PTRACE_ATTACH %s, 0, 0 (OK)\n",
       FUNC_18 (VAR_9));

      VAR_12 = FUNC_19 (FUNC_0 (VAR_9), &VAR_13, 0);
      if (VAR_12 == -1 && VAR_7 == VAR_0)
 {

   VAR_12 = FUNC_19 (FUNC_0 (VAR_9), &VAR_13, VAR_4);
   VAR_11->cloned = 1;
 }

      FUNC_9 (VAR_12 == FUNC_0 (VAR_9)
    && FUNC_2 (VAR_13) && FUNC_3 (VAR_13));

      FUNC_5 (VAR_12);

      VAR_11->stopped = 1;

      if (VAR_6)
 {
   FUNC_8 (VAR_8,
         "LLAL: waitpid %s received %s\n",
         FUNC_18 (VAR_9),
         FUNC_17 (VAR_13));
 }
    }
  else
    {






      VAR_11->stopped = 1;
    }
}
