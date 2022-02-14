
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_lock; int l_name; int l_namelen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct user_lock_res*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct user_lock_res*,int) ;

void FUNC_5(struct user_lock_res *VAR_3,
        int VAR_4)
{
 if (VAR_4 != VAR_0 &&
     VAR_4 != VAR_1) {
  FUNC_1(VAR_2, "lockres %.*s: invalid request!\n",
       VAR_3->l_namelen, VAR_3->l_name);
  return;
 }

 FUNC_2(&VAR_3->l_lock);
 FUNC_4(VAR_3, VAR_4);
 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->l_lock);
}
