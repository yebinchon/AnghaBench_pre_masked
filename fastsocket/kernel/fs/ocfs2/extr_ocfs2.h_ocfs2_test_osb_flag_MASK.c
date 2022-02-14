
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {unsigned long osb_flags; int osb_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline unsigned long FUNC_2(struct ocfs2_super *VAR_0,
       unsigned long VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(&VAR_0->osb_lock);
 VAR_2 = VAR_0->osb_flags & VAR_1;
 FUNC_1(&VAR_0->osb_lock);
 return VAR_2;
}
