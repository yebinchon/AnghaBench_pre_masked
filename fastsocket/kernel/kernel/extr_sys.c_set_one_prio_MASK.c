
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct cred {scalar_t__ uid; scalar_t__ euid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cred* FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*,int) ;
 int FUNC_2 (int ) ;
 struct cred* FUNC_3 () ;
 int FUNC_4 (struct task_struct*,int) ;
 int FUNC_5 (struct task_struct*,int) ;
 int FUNC_6 (struct task_struct*) ;

__attribute__((used)) static int FUNC_7(struct task_struct *VAR_4, int VAR_5, int VAR_6)
{
 const struct cred *VAR_7 = FUNC_3(), *VAR_8 = FUNC_0(VAR_4);
 int VAR_9;

 if (VAR_8->uid != VAR_7->euid &&
     VAR_8->euid != VAR_7->euid && !FUNC_2(VAR_0)) {
  VAR_6 = -VAR_2;
  goto out;
 }
 if (VAR_5 < FUNC_6(VAR_4) && !FUNC_1(VAR_4, VAR_5)) {
  VAR_6 = -VAR_1;
  goto out;
 }
 VAR_9 = FUNC_4(VAR_4, VAR_5);
 if (VAR_9) {
  VAR_6 = VAR_9;
  goto out;
 }
 if (VAR_6 == -VAR_3)
  VAR_6 = 0;
 FUNC_5(VAR_4, VAR_5);
out:
 return VAR_6;
}
