
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pid_namespace {int dummy; } ;
struct TYPE_5__ {int mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct bsd_acct_struct {int active; TYPE_2__ timer; int list; scalar_t__ needcheck; struct pid_namespace* ns; struct file* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct bsd_acct_struct*,struct pid_namespace*,struct file*) ;
 int FUNC_3 (struct file*,int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ,unsigned long) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct bsd_acct_struct *VAR_6, struct file *VAR_7,
  struct pid_namespace *VAR_8)
{
 struct file *VAR_9 = ((void*)0);
 struct pid_namespace *VAR_10 = ((void*)0);

 if (VAR_6->file) {
  VAR_9 = VAR_6->file;
  VAR_10 = VAR_6->ns;
  FUNC_1(&VAR_6->timer);
  VAR_6->active = 0;
  VAR_6->needcheck = 0;
  VAR_6->file = ((void*)0);
  VAR_6->ns = ((void*)0);
  FUNC_5(&VAR_6->list);
 }
 if (VAR_7) {
  VAR_6->file = VAR_7;
  VAR_6->ns = VAR_8;
  VAR_6->needcheck = 0;
  VAR_6->active = 1;
  FUNC_4(&VAR_6->list, &VAR_2);

  FUNC_7(&VAR_6->timer, VAR_4, (unsigned long)VAR_6);
  VAR_6->timer.expires = VAR_5 + VAR_0*VAR_1;
  FUNC_0(&VAR_6->timer);
 }
 if (VAR_9) {
  FUNC_6(VAR_9->f_path.mnt);
  FUNC_9(&VAR_3);
  FUNC_2(VAR_6, VAR_10, VAR_9);
  FUNC_3(VAR_9, ((void*)0));
  FUNC_8(&VAR_3);
 }
}
