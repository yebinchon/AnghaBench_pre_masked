
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_struct {int dummy; } ;
struct user_namespace {int kref; struct user_struct* creator; scalar_t__ uidhash_table; } ;
struct cred {int * request_key_auth; int group_info; scalar_t__ fsgid; scalar_t__ sgid; scalar_t__ egid; scalar_t__ gid; scalar_t__ fsuid; scalar_t__ suid; scalar_t__ euid; scalar_t__ uid; struct user_struct* user; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 struct user_struct* FUNC_1 (struct user_namespace*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct user_namespace*) ;
 struct user_namespace* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;

int FUNC_9(struct cred *VAR_4)
{
 struct user_namespace *VAR_5;
 struct user_struct *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(sizeof(struct user_namespace), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_6(&VAR_5->kref);

 for (VAR_7 = 0; VAR_7 < VAR_2; ++VAR_7)
  FUNC_0(VAR_5->uidhash_table + VAR_7);


 VAR_6 = FUNC_1(VAR_5, 0);
 if (!VAR_6) {
  FUNC_4(VAR_5);
  return -VAR_0;
 }


 VAR_5->creator = VAR_4->user;
 VAR_4->user = VAR_6;
 VAR_4->uid = VAR_4->euid = VAR_4->suid = VAR_4->fsuid = 0;
 VAR_4->gid = VAR_4->egid = VAR_4->sgid = VAR_4->fsgid = 0;
 FUNC_8(VAR_4->group_info);
 VAR_4->group_info = FUNC_2(&VAR_3);







 FUNC_7(&VAR_5->kref, 1);

 return 0;
}
