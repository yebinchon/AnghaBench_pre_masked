
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_lock_res {int l_flags; int l_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ocfs2_lock_res*,int ) ;
 int FUNC_2 (struct ocfs2_super*,struct ocfs2_lock_res*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ocfs2_super *VAR_5,
     struct ocfs2_lock_res *VAR_6,
     int VAR_7,
     int VAR_8)
{
 int VAR_9 = VAR_7 ? VAR_1 : VAR_2;
 unsigned long VAR_10;
 u32 VAR_11 = VAR_8 ? VAR_0 : 0;

 FUNC_3(&VAR_6->l_lock, VAR_10);
 FUNC_0(VAR_6->l_flags & VAR_3);
 FUNC_1(VAR_6, VAR_4);
 FUNC_4(&VAR_6->l_lock, VAR_10);

 return FUNC_2(VAR_5, VAR_6, VAR_9, VAR_11);
}
