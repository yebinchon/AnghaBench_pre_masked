
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pid_namespace {struct bsd_acct_struct* bacct; } ;
struct bsd_acct_struct {int * file; } ;


 int FUNC_0 (struct bsd_acct_struct*,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct bsd_acct_struct*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pid_namespace *VAR_1)
{
 struct bsd_acct_struct *VAR_2;

 FUNC_2(&VAR_0);
 VAR_2 = VAR_1->bacct;
 if (VAR_2 != ((void*)0)) {
  if (VAR_2->file != ((void*)0))
   FUNC_0(VAR_2, ((void*)0), ((void*)0));

  FUNC_1(VAR_2);
 }
 FUNC_3(&VAR_0);
}
