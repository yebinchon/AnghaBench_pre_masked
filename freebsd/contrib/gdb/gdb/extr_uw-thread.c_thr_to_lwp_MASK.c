
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {TYPE_1__* private; } ;
typedef int ptid_t ;
struct TYPE_2__ {int lwpid; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct thread_info* FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static ptid_t
FUNC_6 (ptid_t VAR_2)
{
  struct thread_info *VAR_3;
  ptid_t VAR_4;

  if (!FUNC_1 (VAR_2))
    VAR_4 = VAR_2;
  else if (!(VAR_3 = FUNC_5 (VAR_2)))
    VAR_4 = VAR_0;
  else if (!VAR_3->private->lwpid)
    VAR_4 = VAR_0;
  else
    VAR_4 = FUNC_2 (FUNC_3 (VAR_2), VAR_3->private->lwpid);

  FUNC_0(("  thr_to_lwp(%s) = %s", FUNC_4 (VAR_1), FUNC_4 (VAR_4)));
  return VAR_4;
}
