
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mqfs_node {scalar_t__ mn_type; int mn_refcount; struct mqfs_info* mn_info; } ;
struct mqfs_info {int mi_lock; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct mqfs_node*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static __inline void
FUNC_5(struct mqfs_node *VAR_2)
{
 struct mqfs_info *VAR_3;
 int VAR_4, VAR_5;

 VAR_3 = VAR_2->mn_info;
 VAR_4 = FUNC_0(&VAR_2->mn_refcount, -1);
 if (VAR_2->mn_type == VAR_0 ||
     VAR_2->mn_type == VAR_1)
  VAR_5 = 3;
 else
  VAR_5 = 1;
 if (VAR_4 == VAR_5) {
  int VAR_6 = FUNC_3(&VAR_3->mi_lock);
  if (!VAR_6)
   FUNC_2(&VAR_3->mi_lock);
  FUNC_1(VAR_2);
  if (!VAR_6)
   FUNC_4(&VAR_3->mi_lock);
 }
}
