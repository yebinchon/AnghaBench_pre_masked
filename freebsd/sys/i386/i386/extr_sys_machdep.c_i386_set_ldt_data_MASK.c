
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union descriptor {int dummy; } descriptor ;
typedef int uint64_t ;
struct thread {TYPE_1__* td_proc; } ;
struct proc_ldt {scalar_t__ ldt_base; } ;
struct mdproc {struct proc_ldt* md_ldt; } ;
struct TYPE_2__ {struct mdproc p_md; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_2, int VAR_3, int VAR_4,
    union descriptor *VAR_5)
{
 struct mdproc *VAR_6;
 struct proc_ldt *VAR_7;
 uint64_t *VAR_8, *VAR_9;
 int VAR_10;

 FUNC_1(&VAR_1, VAR_0);

 VAR_6 = &VAR_2->td_proc->p_md;
 VAR_7 = VAR_6->md_ldt;
 VAR_8 = (uint64_t *)(VAR_7->ldt_base);
 VAR_9 = (uint64_t *)VAR_5;






 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
  FUNC_0(&VAR_8[VAR_3 + VAR_10], VAR_9[VAR_10]);
 return (0);
}
