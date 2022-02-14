
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct user_struct {int user_ns; int session_keyring; int uid_keyring; int __count; int uid; } ;
struct user_namespace {int dummy; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct user_namespace*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct user_struct*) ;
 struct user_struct* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct user_struct*) ;
 int FUNC_7 (struct user_struct*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 struct user_struct* FUNC_10 (int ,struct hlist_head*) ;
 int FUNC_11 (struct user_struct*,struct hlist_head*) ;
 int VAR_2 ;
 struct hlist_head* FUNC_12 (struct user_namespace*,int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (struct user_struct*) ;

struct user_struct *FUNC_16(struct user_namespace *VAR_3, uid_t VAR_4)
{
 struct hlist_head *VAR_5 = FUNC_12(VAR_3, VAR_4);
 struct user_struct *VAR_6, *VAR_7;




 FUNC_13();

 FUNC_8(&VAR_2);
 VAR_6 = FUNC_10(VAR_4, VAR_5);
 FUNC_9(&VAR_2);

 if (!VAR_6) {
  VAR_7 = FUNC_4(VAR_1, VAR_0);
  if (!VAR_7)
   goto out_unlock;

  VAR_7->uid = VAR_4;
  FUNC_0(&VAR_7->__count, 1);

  if (FUNC_6(VAR_7) < 0)
   goto out_free_user;

  VAR_7->user_ns = FUNC_1(VAR_3);

  if (FUNC_15(VAR_7))
   goto out_destoy_sched;





  FUNC_8(&VAR_2);
  VAR_6 = FUNC_10(VAR_4, VAR_5);
  if (VAR_6) {





   FUNC_2(VAR_7->uid_keyring);
   FUNC_2(VAR_7->session_keyring);
   FUNC_3(VAR_1, VAR_7);
  } else {
   FUNC_11(VAR_7, VAR_5);
   VAR_6 = VAR_7;
  }
  FUNC_9(&VAR_2);
 }

 FUNC_14();

 return VAR_6;

out_destoy_sched:
 FUNC_7(VAR_7);
 FUNC_5(VAR_7->user_ns);
out_free_user:
 FUNC_3(VAR_1, VAR_7);
out_unlock:
 FUNC_14();
 return ((void*)0);
}
