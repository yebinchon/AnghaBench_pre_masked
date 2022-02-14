
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {struct bsd_acct_struct* bacct; } ;
struct file {int dummy; } ;
struct bsd_acct_struct {struct file* file; } ;


 int VAR_0 ;
 int FUNC_0 (struct bsd_acct_struct*,struct pid_namespace*,struct file*) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct pid_namespace *VAR_1)
{
 struct file *VAR_2 = ((void*)0);
 struct bsd_acct_struct *VAR_3;

 VAR_3 = VAR_1->bacct;



 if (!VAR_3 || !VAR_3->file)
  return;

 FUNC_3(&VAR_0);
 VAR_2 = VAR_3->file;
 if (FUNC_5(!VAR_2)) {
  FUNC_4(&VAR_0);
  return;
 }
 FUNC_2(VAR_2);
 FUNC_4(&VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_1(VAR_2);
}
