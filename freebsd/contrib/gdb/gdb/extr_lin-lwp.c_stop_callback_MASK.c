
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int signalled; scalar_t__ status; int ptid; int stopped; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (struct lwp_info *VAR_4, void *VAR_5)
{
  if (!VAR_4->stopped && !VAR_4->signalled)
    {
      int VAR_6;

      if (VAR_1)
 {
   FUNC_1 (VAR_3,
         "SC:  kill %s **<SIGSTOP>**\n",
         FUNC_5 (VAR_4->ptid));
 }
      VAR_2 = 0;
      VAR_6 = FUNC_3 (FUNC_0 (VAR_4->ptid), VAR_0);
      if (VAR_1)
 {
   FUNC_1 (VAR_3,
         "SC:  lwp kill %d %s\n",
         VAR_6,
         VAR_2 ? FUNC_4 (VAR_2) : "ERRNO-OK");
 }

      VAR_4->signalled = 1;
      FUNC_2 (VAR_4->status == 0);
    }

  return 0;
}
