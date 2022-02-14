
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_super {scalar_t__ first_cluster_group_blkno; int sb; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct ocfs2_super *VAR_0,
       u64 VAR_1)
{




 if (VAR_1 == VAR_0->first_cluster_group_blkno)
  return 0;




 return FUNC_0(VAR_0->sb, VAR_1);
}
