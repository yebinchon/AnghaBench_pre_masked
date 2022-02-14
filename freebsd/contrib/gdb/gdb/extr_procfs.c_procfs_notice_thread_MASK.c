
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ptid_t ;
struct TYPE_4__ {int tid; int pid; } ;
typedef TYPE_1__ procinfo ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (procinfo *VAR_0, procinfo *VAR_1, void *VAR_2)
{
  ptid_t VAR_3 = FUNC_0 (VAR_0->pid, VAR_1->tid);

  if (!FUNC_2 (VAR_3))
    FUNC_1 (VAR_3);

  return 0;
}
