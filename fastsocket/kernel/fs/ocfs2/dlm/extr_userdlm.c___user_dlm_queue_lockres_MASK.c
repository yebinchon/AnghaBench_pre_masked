
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_work; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct user_lock_res*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_3(struct user_lock_res *VAR_3)
{
 if (!(VAR_3->l_flags & VAR_0)) {
  FUNC_2(VAR_3);

  FUNC_0(&VAR_3->l_work, VAR_1);

  FUNC_1(VAR_2, &VAR_3->l_work);
  VAR_3->l_flags |= VAR_0;
 }
}
