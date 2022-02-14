
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct task_struct {unsigned int sessionid; int loginuid; int pid; struct audit_context* audit_context; } ;
struct audit_context {scalar_t__ in_syscall; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,int ,int ,...) ;
 struct audit_buffer* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct audit_buffer*) ;
 int VAR_2 ;
 int FUNC_5 (struct task_struct*) ;

int FUNC_6(struct task_struct *VAR_3, uid_t VAR_4)
{
 unsigned int VAR_5 = FUNC_0(&VAR_2);
 struct audit_context *VAR_6 = VAR_3->audit_context;

 if (VAR_6 && VAR_6->in_syscall) {
  struct audit_buffer *VAR_7;

  VAR_7 = FUNC_3(((void*)0), VAR_1, VAR_0);
  if (VAR_7) {
   FUNC_2(VAR_7, "pid=%d uid=%u", VAR_3->pid,
      FUNC_5(VAR_3));
   FUNC_4(VAR_7);
   FUNC_2(VAR_7, " old auid=%u new auid=%u "
      "old ses=%u new ses=%u",
      VAR_3->loginuid, VAR_4,
      VAR_3->sessionid, VAR_5);
   FUNC_1(VAR_7);
  }
 }
 VAR_3->sessionid = VAR_5;
 VAR_3->loginuid = VAR_4;
 return 0;
}
