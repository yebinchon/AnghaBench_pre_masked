
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_flags; int osb_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline int FUNC_2(struct ocfs2_super *VAR_1)
{
 int VAR_2;

 FUNC_0(&VAR_1->osb_lock);
 VAR_2 = VAR_1->osb_flags & VAR_0;
 FUNC_1(&VAR_1->osb_lock);

 return VAR_2;
}
