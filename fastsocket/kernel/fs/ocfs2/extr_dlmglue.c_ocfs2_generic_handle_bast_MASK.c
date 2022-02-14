
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_blocking; int l_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_lock_res *VAR_1,
         int VAR_2)
{
 int VAR_3 = 0;
 FUNC_2();

 FUNC_0(&VAR_1->l_lock);

 FUNC_1(VAR_1, VAR_0);

 if (VAR_2 > VAR_1->l_blocking) {




  if (FUNC_4(VAR_2) <
      FUNC_4(VAR_1->l_blocking))
   VAR_3 = 1;

  VAR_1->l_blocking = VAR_2;
 }

 FUNC_3(VAR_3);
 return VAR_3;
}
