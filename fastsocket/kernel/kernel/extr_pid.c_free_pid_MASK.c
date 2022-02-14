
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct upid {TYPE_1__* ns; int pid_chain; } ;
struct pid {int level; int rcu; struct upid* numbers; } ;
struct TYPE_2__ {scalar_t__ nr_hashed; int proc_work; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct upid*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct pid *VAR_2)
{

 int VAR_3;
 unsigned long VAR_4;

 FUNC_4(&VAR_1, VAR_4);
 for (VAR_3 = 0; VAR_3 <= VAR_2->level; VAR_3++) {
  struct upid *VAR_5 = VAR_2->numbers + VAR_3;
  FUNC_2(&VAR_5->pid_chain);
  if (--VAR_5->ns->nr_hashed == 0)
   FUNC_3(&VAR_5->ns->proc_work);
 }
 FUNC_5(&VAR_1, VAR_4);

 for (VAR_3 = 0; VAR_3 <= VAR_2->level; VAR_3++)
  FUNC_1(VAR_2->numbers + VAR_3);

 FUNC_0(&VAR_2->rcu, VAR_0);
}
