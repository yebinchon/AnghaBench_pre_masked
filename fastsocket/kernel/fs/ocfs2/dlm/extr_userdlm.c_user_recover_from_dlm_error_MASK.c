
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_lock; int l_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct user_lock_res *VAR_1)
{
 FUNC_0(&VAR_1->l_lock);
 VAR_1->l_flags &= ~VAR_0;
 FUNC_1(&VAR_1->l_lock);
}
