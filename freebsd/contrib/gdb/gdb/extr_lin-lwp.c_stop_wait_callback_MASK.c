
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int stopped; int status; scalar_t__ signalled; int ptid; } ;
typedef void sigset_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,char*,...) ;
 int VAR_5 ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 char* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (void*,scalar_t__) ;
 char* FUNC_7 (int) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (struct lwp_info*) ;

__attribute__((used)) static int
FUNC_10 (struct lwp_info *VAR_6, void *VAR_7)
{
  sigset_t *VAR_8 = VAR_7;

  if (!VAR_6->stopped)
    {
      int VAR_9;

      VAR_9 = FUNC_9 (VAR_6);
      if (VAR_9 == 0)
 return 0;


      if (VAR_8 && FUNC_6 (VAR_8, FUNC_1 (VAR_9)))
 {
   if (!VAR_6->signalled)
     {
       VAR_6->stopped = 1;
       return 0;
     }

   VAR_4 = 0;
   FUNC_4 (VAR_0, FUNC_0 (VAR_6->ptid), 0, 0);
   if (VAR_3)
     FUNC_2 (VAR_5,
    "PTRACE_CONT %s, 0, 0 (%s)\n",
    FUNC_8 (VAR_6->ptid),
    VAR_4 ? FUNC_5 (VAR_4) : "OK");

   return FUNC_10 (VAR_6, VAR_8);
 }

      if (FUNC_1 (VAR_9) != VAR_1)
 {
   if (FUNC_1 (VAR_9) == VAR_2)
     {
       VAR_4 = 0;
       FUNC_4 (VAR_0, FUNC_0 (VAR_6->ptid), 0, 0);
       if (VAR_3)
  {
    FUNC_2 (VAR_5,
          "PTRACE_CONT %s, 0, 0 (%s)\n",
          FUNC_8 (VAR_6->ptid),
          VAR_4 ? FUNC_5 (VAR_4) : "OK");

    FUNC_2 (VAR_5,
          "SWC: Candidate SIGTRAP event in %s\n",
          FUNC_8 (VAR_6->ptid));
  }

       FUNC_10 (VAR_6, VAR_7);

       if (VAR_6->status)
  {
    if (VAR_3)
      {
        FUNC_2 (VAR_5,
       "SWC: kill %s, %s\n",
       FUNC_8 (VAR_6->ptid),
       FUNC_7 ((int) VAR_9));
      }
    FUNC_3 (FUNC_0 (VAR_6->ptid), FUNC_1 (VAR_6->status));
  }

       VAR_6->status = VAR_9;
       return 0;
     }
   else
     {



       if (VAR_3)
  {
    FUNC_2 (VAR_5,
          "SWC: Pending event %s in %s\n",
          FUNC_7 ((int) VAR_9),
          FUNC_8 (VAR_6->ptid));
  }

       VAR_4 = 0;
       FUNC_4 (VAR_0, FUNC_0 (VAR_6->ptid), 0, 0);
       if (VAR_3)
  FUNC_2 (VAR_5,
        "SWC: PTRACE_CONT %s, 0, 0 (%s)\n",
        FUNC_8 (VAR_6->ptid),
        VAR_4 ? FUNC_5 (VAR_4) : "OK");



       FUNC_10 (VAR_6, VAR_7);



       if (VAR_6->status == 0)
  VAR_6->status = VAR_9;
       else
  {
    if (VAR_3)
      {
        FUNC_2 (VAR_5,
       "SWC: kill %s, %s\n",
       FUNC_8 (VAR_6->ptid),
       FUNC_7 ((int) VAR_9));
      }
    FUNC_3 (FUNC_0 (VAR_6->ptid), FUNC_1 (VAR_9));
  }
       return 0;
     }
 }
      else
 {


   VAR_6->stopped = 1;
   VAR_6->signalled = 0;
 }
    }

  return 0;
}
