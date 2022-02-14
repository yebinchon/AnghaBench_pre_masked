
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_flags; unsigned int l_pending_gen; int l_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ocfs2_lock_res*,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct ocfs2_lock_res *VAR_2)
{
 FUNC_1(&VAR_2->l_lock);
 FUNC_0(!(VAR_2->l_flags & VAR_0));

 FUNC_2(VAR_2, VAR_1);

 return VAR_2->l_pending_gen;
}
