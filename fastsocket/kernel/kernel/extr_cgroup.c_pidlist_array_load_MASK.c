
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cgroup_pidlist {int* list; int length; int mutex; int use_count; } ;
struct cgroup_iter {int dummy; } ;
struct cgroup {int dummy; } ;
typedef int pid_t ;
typedef enum cgroup_filetype { ____Placeholder_cgroup_filetype } cgroup_filetype ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgroup*,struct cgroup_iter*) ;
 struct task_struct* FUNC_1 (struct cgroup*,struct cgroup_iter*) ;
 int FUNC_2 (struct cgroup*,struct cgroup_iter*) ;
 struct cgroup_pidlist* FUNC_3 (struct cgroup*,int) ;
 int FUNC_4 (struct cgroup*) ;
 int VAR_2 ;
 int* FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int**,int) ;
 int FUNC_8 (int*,int,int,int ,int *) ;
 int FUNC_9 (struct task_struct*) ;
 int FUNC_10 (struct task_struct*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct cgroup *VAR_3, enum cgroup_filetype VAR_4,
         struct cgroup_pidlist **VAR_5)
{
 pid_t *VAR_6;
 int VAR_7;
 int VAR_8, VAR_9 = 0;
 struct cgroup_iter VAR_10;
 struct task_struct *VAR_11;
 struct cgroup_pidlist *VAR_12;







 VAR_7 = FUNC_4(VAR_3);
 VAR_6 = FUNC_5(VAR_7);
 if (!VAR_6)
  return -VAR_1;

 FUNC_2(VAR_3, &VAR_10);
 while ((VAR_11 = FUNC_1(VAR_3, &VAR_10))) {
  if (FUNC_11(VAR_9 == VAR_7))
   break;

  if (VAR_4 == VAR_0)
   VAR_8 = FUNC_10(VAR_11);
  else
   VAR_8 = FUNC_9(VAR_11);
  if (VAR_8 > 0)
   VAR_6[VAR_9++] = VAR_8;
 }
 FUNC_0(VAR_3, &VAR_10);
 VAR_7 = VAR_9;

 FUNC_8(VAR_6, VAR_7, sizeof(pid_t), VAR_2, ((void*)0));
 if (VAR_4 == VAR_0)
  VAR_7 = FUNC_7(&VAR_6, VAR_7);
 VAR_12 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_12) {
  FUNC_6(VAR_6);
  return -VAR_1;
 }

 FUNC_6(VAR_12->list);
 VAR_12->list = VAR_6;
 VAR_12->length = VAR_7;
 VAR_12->use_count++;
 FUNC_12(&VAR_12->mutex);
 *VAR_5 = VAR_12;
 return 0;
}
