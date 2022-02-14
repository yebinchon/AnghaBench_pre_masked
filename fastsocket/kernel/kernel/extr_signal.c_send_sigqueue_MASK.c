
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sigpending {int signal; int list; } ;
struct task_struct {struct sigpending pending; TYPE_1__* signal; } ;
struct TYPE_4__ {int si_signo; scalar_t__ si_code; scalar_t__ si_overrun; } ;
struct sigqueue {int flags; TYPE_2__ info; int list; } ;
struct TYPE_3__ {struct sigpending shared_pending; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,struct task_struct*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct task_struct*,unsigned long*) ;
 int FUNC_6 (int,struct task_struct*,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct task_struct*,int) ;
 int FUNC_9 (int,TYPE_2__*,struct task_struct*,int,int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct task_struct*,unsigned long*) ;

int FUNC_12(struct sigqueue *VAR_5, struct task_struct *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_5->info.si_signo;
 struct sigpending *VAR_9;
 unsigned long VAR_10;
 int VAR_11, VAR_12;

 FUNC_0(!(VAR_5->flags & VAR_0));

 VAR_11 = -1;
 if (!FUNC_2(FUNC_5(VAR_6, &VAR_10)))
  goto ret;

 VAR_11 = 1;
 VAR_12 = VAR_4;
 if (!FUNC_6(VAR_8, VAR_6, 0))
  goto out;

 VAR_11 = 0;
 if (FUNC_10(!FUNC_4(&VAR_5->list))) {




  FUNC_0(VAR_5->info.si_code != VAR_1);
  VAR_5->info.si_overrun++;
  VAR_12 = VAR_2;
  goto out;
 }
 VAR_5->info.si_overrun = 0;

 FUNC_8(VAR_6, VAR_8);
 VAR_9 = VAR_7 ? &VAR_6->signal->shared_pending : &VAR_6->pending;
 FUNC_3(&VAR_5->list, &VAR_9->list);
 FUNC_7(&VAR_9->signal, VAR_8);
 FUNC_1(VAR_8, VAR_6, VAR_7);
 VAR_12 = VAR_3;
out:
 FUNC_9(VAR_8, &VAR_5->info, VAR_6, VAR_7, VAR_12);
 FUNC_11(VAR_6, &VAR_10);
ret:
 return VAR_11;
}
