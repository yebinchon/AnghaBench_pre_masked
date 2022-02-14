
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_lock_res {int l_flags; int l_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct user_lock_res *VAR_0,
           int VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_0->l_lock);
 VAR_2 = VAR_0->l_flags & VAR_1;
 FUNC_1(&VAR_0->l_lock);

 return VAR_2;
}
