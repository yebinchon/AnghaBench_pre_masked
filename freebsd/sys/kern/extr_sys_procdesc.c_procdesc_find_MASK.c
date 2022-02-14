
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct procdesc {struct proc* pd_proc; } ;
struct proc {int dummy; } ;
struct file {scalar_t__ f_type; struct procdesc* f_data; } ;
typedef int cap_rights_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct file*,struct thread*) ;
 int FUNC_2 (struct thread*,int,int *,struct file**) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct thread *VAR_4, int VAR_5, cap_rights_t *VAR_6,
    struct proc **VAR_7)
{
 struct procdesc *VAR_8;
 struct file *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_9);
 if (VAR_10)
  return (VAR_10);
 if (VAR_9->f_type != VAR_0) {
  VAR_10 = VAR_1;
  goto out;
 }
 VAR_8 = VAR_9->f_data;
 FUNC_3(&VAR_3);
 if (VAR_8->pd_proc != ((void*)0)) {
  *VAR_7 = VAR_8->pd_proc;
  FUNC_0(*VAR_7);
 } else
  VAR_10 = VAR_2;
 FUNC_4(&VAR_3);
out:
 FUNC_1(VAR_9, VAR_4);
 return (VAR_10);
}
