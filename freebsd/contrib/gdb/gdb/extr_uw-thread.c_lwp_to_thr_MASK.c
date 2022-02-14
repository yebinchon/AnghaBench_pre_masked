
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {TYPE_1__* private; } ;
typedef int ptid_t ;
struct TYPE_2__ {int thrid; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct thread_info* FUNC_6 (int) ;

__attribute__((used)) static ptid_t
FUNC_7 (ptid_t VAR_0)
{
  struct thread_info *VAR_1;
  int VAR_2;
  ptid_t VAR_3 = VAR_0;

  if (FUNC_1 (VAR_0))
    goto done;
  if (!(VAR_2 = FUNC_2 (VAR_0)))
    goto done;
  if (!(VAR_1 = FUNC_6 (VAR_2)))
    goto done;
  VAR_3 = FUNC_3 (FUNC_4 (VAR_0), VAR_1->private->thrid);

 done:
  FUNC_0((FUNC_1 (VAR_3) ? ((void*)0) : "lwp_to_thr: no thr for %s", FUNC_5 (VAR_0)));
  return VAR_3;
}
