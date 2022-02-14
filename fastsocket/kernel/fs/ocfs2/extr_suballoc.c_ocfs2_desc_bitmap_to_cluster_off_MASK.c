
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_super {scalar_t__ first_cluster_group_blkno; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (int) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct inode*) ;

__attribute__((used)) static inline u32 FUNC_4(struct inode *VAR_0,
         u64 VAR_1,
         u16 VAR_2)
{
 struct ocfs2_super *VAR_3 = FUNC_1(VAR_0->i_sb);
 u32 VAR_4 = 0;

 FUNC_0(!FUNC_3(VAR_0));

 if (VAR_1 != VAR_3->first_cluster_group_blkno)
  VAR_4 = FUNC_2(VAR_0->i_sb, VAR_1);
 VAR_4 += (u32) VAR_2;
 return VAR_4;
}
