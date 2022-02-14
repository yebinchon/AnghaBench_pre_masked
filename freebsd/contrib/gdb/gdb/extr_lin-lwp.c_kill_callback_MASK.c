
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int ptid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (struct lwp_info *VAR_4, void *VAR_5)
{
  VAR_2 = 0;
  FUNC_2 (VAR_0, FUNC_0 (VAR_4->ptid), 0, 0);
  if (VAR_1)
    FUNC_1 (VAR_3,
   "KC:  PTRACE_KILL %s, 0, 0 (%s)\n",
   FUNC_4 (VAR_4->ptid),
   VAR_2 ? FUNC_3 (VAR_2) : "OK");

  return 0;
}
