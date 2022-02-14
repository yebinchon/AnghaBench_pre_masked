
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread_group_cred {int lock; int usage; } ;
struct cred {int usage; int * security; struct thread_group_cred* tgcred; int jit_keyring; int * request_key_auth; int * thread_keyring; int user; int group_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*,struct cred*) ;
 struct cred* FUNC_6 (int ,int ) ;
 struct thread_group_cred* FUNC_7 (int,int ) ;
 int FUNC_8 (struct cred*,int *,int) ;
 int FUNC_9 (struct cred*) ;
 scalar_t__ FUNC_10 (struct cred*,int *,int ) ;
 int FUNC_11 (struct cred*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct cred*) ;

struct cred *FUNC_14(void)
{



 struct cred *VAR_4;







 VAR_4 = FUNC_6(VAR_2, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_5("prepare_usermodehelper_creds() alloc %p", VAR_4);

 FUNC_8(VAR_4, &VAR_3, sizeof(struct cred));

 FUNC_2(&VAR_4->usage, 1);
 FUNC_11(VAR_4, 0);
 FUNC_3(VAR_4->group_info);
 FUNC_4(VAR_4->user);
 if (FUNC_10(VAR_4, &VAR_3, VAR_0) < 0)
  goto error;
 FUNC_13(VAR_4);

 FUNC_0(FUNC_1(&VAR_4->usage) != 1);
 return VAR_4;

error:
 FUNC_9(VAR_4);
 return ((void*)0);
}
