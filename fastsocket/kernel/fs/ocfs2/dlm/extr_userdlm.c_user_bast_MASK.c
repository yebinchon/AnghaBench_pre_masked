
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_blocking; int l_event; int l_lock; int l_flags; int l_name; int l_namelen; } ;


 int VAR_0 ;
 int FUNC_0 (struct user_lock_res*) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2)
{
 struct user_lock_res *VAR_3 = VAR_1;

 FUNC_1(0, "Blocking AST fired for lockres %.*s. Blocking level %d\n",
      VAR_3->l_namelen, VAR_3->l_name, VAR_2);

 FUNC_2(&VAR_3->l_lock);
 VAR_3->l_flags |= VAR_0;
 if (VAR_2 > VAR_3->l_blocking)
  VAR_3->l_blocking = VAR_2;

 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->l_lock);

 FUNC_4(&VAR_3->l_event);
}
