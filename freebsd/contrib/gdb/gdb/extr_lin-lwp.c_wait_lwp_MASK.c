
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int ptid; int status; int stopped; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,char*,int ,...) ;
 int FUNC_7 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,int*,int ) ;

__attribute__((used)) static int
FUNC_14 (struct lwp_info *VAR_6)
{
  pid_t VAR_7;
  int VAR_8;
  int VAR_9 = 0;

  FUNC_7 (!VAR_6->stopped);
  FUNC_7 (VAR_6->status == 0);

  VAR_7 = FUNC_13 (FUNC_0 (VAR_6->ptid), &VAR_8, 0);
  if (VAR_7 == -1 && VAR_3 == VAR_0)
    {
      VAR_7 = FUNC_13 (FUNC_0 (VAR_6->ptid), &VAR_8, VAR_1);
      if (VAR_7 == -1 && VAR_3 == VAR_0)
 {



   VAR_9 = 1;
   if (VAR_2)
     FUNC_6 (VAR_4, "WL: %s vanished.\n",
    FUNC_12 (VAR_6->ptid));
 }
    }

  if (!VAR_9)
    {
      FUNC_7 (VAR_7 == FUNC_0 (VAR_6->ptid));

      if (VAR_2)
 {
   FUNC_6 (VAR_4,
         "WL: waitpid %s received %s\n",
         FUNC_12 (VAR_6->ptid),
         FUNC_11 (VAR_8));
 }
    }


  if (FUNC_1 (VAR_8) || FUNC_2 (VAR_8))
    {
      VAR_9 = 1;
      if (VAR_2)
 FUNC_6 (VAR_4, "WL: %s exited.\n",
       FUNC_12 (VAR_6->ptid));
    }

  if (VAR_9)
    {
      if (FUNC_8 (VAR_6->ptid))
 {

   if (!FUNC_10 (VAR_6->ptid, VAR_5))
     FUNC_5 (VAR_6->ptid);
   FUNC_9 ("[%s exited]\n",
        FUNC_12 (VAR_6->ptid));
 }

      FUNC_4 (VAR_6->ptid);
      return 0;
    }

  FUNC_7 (FUNC_3 (VAR_8));

  return VAR_8;
}
