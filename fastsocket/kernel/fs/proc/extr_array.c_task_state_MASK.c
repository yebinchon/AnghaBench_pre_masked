
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ files; int real_parent; } ;
struct seq_file {int dummy; } ;
struct pid_namespace {int dummy; } ;
struct pid {int dummy; } ;
struct group_info {int ngroups; } ;
struct fdtable {int max_fds; } ;
struct cred {struct group_info* group_info; int fsgid; int sgid; int egid; int gid; int fsuid; int suid; int euid; int uid; } ;
typedef scalar_t__ pid_t ;


 int FUNC_0 (struct group_info*,int) ;
 int VAR_0 ;
 struct fdtable* FUNC_1 (scalar_t__) ;
 struct cred* FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct task_struct*) ;
 int FUNC_6 (struct pid*,struct pid_namespace*) ;
 int FUNC_7 (struct cred const*) ;
 struct task_struct* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct seq_file*,char*,...) ;
 int FUNC_12 (struct task_struct*) ;
 scalar_t__ FUNC_13 (struct task_struct*,struct pid_namespace*) ;
 scalar_t__ FUNC_14 (struct task_struct*,struct pid_namespace*) ;
 int FUNC_15 (struct task_struct*) ;
 int FUNC_16 (struct seq_file*,struct task_struct*) ;
 struct task_struct* FUNC_17 (struct task_struct*) ;

__attribute__((used)) static inline void FUNC_18(struct seq_file *VAR_1, struct pid_namespace *VAR_2,
    struct pid *VAR_3, struct task_struct *VAR_4)
{
 struct group_info *VAR_5;
 int VAR_6;
 struct fdtable *VAR_7 = ((void*)0);
 const struct cred *VAR_8;
 pid_t VAR_9, VAR_10;

 FUNC_9();
 VAR_9 = FUNC_5(VAR_4) ?
  FUNC_14(FUNC_8(VAR_4->real_parent), VAR_2) : 0;
 VAR_10 = 0;
 if (FUNC_5(VAR_4)) {
  struct task_struct *VAR_11 = FUNC_17(VAR_4);
  if (VAR_11)
   VAR_10 = FUNC_13(VAR_11, VAR_2);
 }
 VAR_8 = FUNC_2(VAR_4);
 FUNC_11(VAR_1,
  "State:\t%s\n"
  "Tgid:\t%d\n"
  "Pid:\t%d\n"
  "PPid:\t%d\n"
  "TracerPid:\t%d\n"
  "Uid:\t%d\t%d\t%d\t%d\n"
  "Gid:\t%d\t%d\t%d\t%d\n",
  FUNC_3(VAR_4),
  FUNC_14(VAR_4, VAR_2),
  FUNC_6(VAR_3, VAR_2),
  VAR_9, VAR_10,
  VAR_8->uid, VAR_8->euid, VAR_8->suid, VAR_8->fsuid,
  VAR_8->gid, VAR_8->egid, VAR_8->sgid, VAR_8->fsgid);

 FUNC_16(VAR_1, VAR_4);

 FUNC_12(VAR_4);
 if (VAR_4->files)
  VAR_7 = FUNC_1(VAR_4->files);
 FUNC_11(VAR_1,
  "FDSize:\t%d\n"
  "Groups:\t",
  VAR_7 ? VAR_7->max_fds : 0);
 FUNC_10();

 VAR_5 = VAR_8->group_info;
 FUNC_15(VAR_4);

 for (VAR_6 = 0; VAR_6 < FUNC_4(VAR_5->ngroups, VAR_0); VAR_6++)
  FUNC_11(VAR_1, "%d ", FUNC_0(VAR_5, VAR_6));
 FUNC_7(VAR_8);

 FUNC_11(VAR_1, "\n");
}
