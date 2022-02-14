
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_group_cred {int * process_keyring; int session_keyring; int lock; int usage; } ;
struct cred {struct thread_group_cred* tgcred; int * thread_keyring; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct thread_group_cred*) ;
 struct thread_group_cred* FUNC_4 (int,int ) ;
 int FUNC_5 (struct thread_group_cred*,struct thread_group_cred*,int) ;
 struct cred* FUNC_6 () ;
 int FUNC_7 (struct cred*) ;
 int FUNC_8 (int *) ;

struct cred *FUNC_9(void)
{
 struct thread_group_cred *VAR_1 = ((void*)0);
 struct cred *VAR_2;







 VAR_2 = FUNC_6();
 if (!VAR_2) {
  FUNC_3(VAR_1);
  return VAR_2;
 }
 return VAR_2;
}
