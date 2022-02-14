
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ mm; } ;
struct cred {scalar_t__ uid; scalar_t__ euid; scalar_t__ suid; scalar_t__ gid; scalar_t__ egid; scalar_t__ sgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 struct cred* FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (struct task_struct*,unsigned int) ;
 int FUNC_8 () ;

int FUNC_9(struct task_struct *VAR_4, unsigned int VAR_5)
{
 const struct cred *VAR_6 = FUNC_2(), *VAR_7;
 int VAR_8 = 0;

 if (FUNC_6(VAR_4, VAR_3))
  return 0;
 FUNC_4();
 VAR_7 = FUNC_0(VAR_4);
 if ((VAR_6->uid != VAR_7->euid ||
      VAR_6->uid != VAR_7->suid ||
      VAR_6->uid != VAR_7->uid ||
      VAR_6->gid != VAR_7->egid ||
      VAR_6->gid != VAR_7->sgid ||
      VAR_6->gid != VAR_7->gid) &&
     !FUNC_1(VAR_0)) {
  FUNC_5();
  return -VAR_1;
 }
 FUNC_5();
 FUNC_8();
 if (VAR_4->mm)
  VAR_8 = FUNC_3(VAR_4->mm);
 if (VAR_8 != VAR_2 && !FUNC_1(VAR_0))
  return -VAR_1;

 return FUNC_7(VAR_4, VAR_5);
}
