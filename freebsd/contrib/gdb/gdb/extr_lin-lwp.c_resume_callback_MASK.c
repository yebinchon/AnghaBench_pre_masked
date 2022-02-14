
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_info {int dummy; } ;
struct lwp_info {scalar_t__ status; scalar_t__ step; scalar_t__ stopped; int ptid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (struct lwp_info *VAR_3, void *VAR_4)
{
  if (VAR_3->stopped && VAR_3->status == 0)
    {
      struct thread_info *VAR_5;

      FUNC_1 (FUNC_3 (FUNC_0 (VAR_3->ptid)), 0, VAR_0);
      if (VAR_1)
 FUNC_2 (VAR_2,
       "RC:  PTRACE_CONT %s, 0, 0 (resume sibling)\n",
       FUNC_4 (VAR_3->ptid));
      VAR_3->stopped = 0;
      VAR_3->step = 0;
    }

  return 0;
}
