
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pid; int chanid; int self; int next_unused; int used; } ;
typedef TYPE_1__ Session ;


 int FUNC_0 (char*,int ,int ,int ,TYPE_1__*,int ,long) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  Session *VAR_3 = &VAR_0[VAR_2];

  FUNC_0("dump: used %d next_unused %d session %d %p "
      "channel %d pid %ld",
      VAR_3->used,
      VAR_3->next_unused,
      VAR_3->self,
      VAR_3,
      VAR_3->chanid,
      (long)VAR_3->pid);
 }
}
