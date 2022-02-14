
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int lockdep_depth; scalar_t__ held_locks; int comm; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct task_struct *VAR_0)
{
 int VAR_1, VAR_2 = VAR_0->lockdep_depth;

 if (!VAR_2) {
  FUNC_1("no locks held by %s/%d.\n", VAR_0->comm, FUNC_2(VAR_0));
  return;
 }
 FUNC_1("%d lock%s held by %s/%d:\n",
  VAR_2, VAR_2 > 1 ? "s" : "", VAR_0->comm, FUNC_2(VAR_0));

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {
  FUNC_1(" #%d: ", VAR_1);
  FUNC_0(VAR_0->held_locks + VAR_1);
 }
}
