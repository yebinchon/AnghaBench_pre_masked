
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwp_info {int ptid; scalar_t__ cloned; } ;
typedef int pid_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int *,int ) ;

__attribute__((used)) static int
FUNC_5 (struct lwp_info *VAR_5, void *VAR_6)
{
  pid_t VAR_7;
  if (VAR_5->cloned)
    {
      do
 {
   VAR_7 = FUNC_4 (FUNC_0 (VAR_5->ptid), ((void*)0), VAR_1);
   if (VAR_7 != (pid_t) -1 && VAR_2)
     {
       FUNC_1 (VAR_4,
      "KWC: wait %s received unknown.\n",
      FUNC_3 (VAR_5->ptid));
     }
 }
      while (VAR_7 == FUNC_0 (VAR_5->ptid));

      FUNC_2 (VAR_7 == -1 && VAR_3 == VAR_0);
    }

  do
    {
      VAR_7 = FUNC_4 (FUNC_0 (VAR_5->ptid), ((void*)0), 0);
      if (VAR_7 != (pid_t) -1 && VAR_2)
 {
   FUNC_1 (VAR_4,
         "KWC: wait %s received unk.\n",
         FUNC_3 (VAR_5->ptid));
 }
    }
  while (VAR_7 == FUNC_0 (VAR_5->ptid));

  FUNC_2 (VAR_7 == -1 && VAR_3 == VAR_0);
  return 0;
}
