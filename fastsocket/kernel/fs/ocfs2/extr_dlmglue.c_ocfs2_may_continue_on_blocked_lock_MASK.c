
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_lock_res {int l_flags; int l_blocking; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(struct ocfs2_lock_res *VAR_1,
           int VAR_2)
{
 FUNC_0(!(VAR_1->l_flags & VAR_0));

 return VAR_2 <= FUNC_1(VAR_1->l_blocking);
}
