
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
typedef unsigned int u32 ;
struct ocfs2_super {unsigned int s_clustersize_bits; TYPE_1__* sb; } ;
struct ocfs2_extent_rec {unsigned long long e_blkno; int e_flags; int e_leaf_clusters; int e_cpos; } ;
struct inode {int i_sb; } ;
struct fiemap_extent_info {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int ip_dyn_features; int ip_alloc_sem; } ;
struct TYPE_3__ {unsigned int s_blocksize_bits; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fiemap_extent_info*,int ) ;
 int FUNC_5 (struct fiemap_extent_info*,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 unsigned int FUNC_7 (int ) ;
 unsigned int FUNC_8 (unsigned long long) ;
 int FUNC_9 (int) ;
 unsigned int FUNC_10 (int ,unsigned int) ;
 int FUNC_11 (struct inode*,struct buffer_head*,struct fiemap_extent_info*,unsigned int) ;
 int FUNC_12 (struct inode*,struct buffer_head*,unsigned int,unsigned int*,struct ocfs2_extent_rec*,int*) ;
 int FUNC_13 (struct inode*,struct buffer_head**,int ) ;
 int FUNC_14 (struct inode*,int ) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct inode *VAR_5, struct fiemap_extent_info *VAR_6,
   u64 VAR_7, u64 VAR_8)
{
 int VAR_9, VAR_10;
 u32 VAR_11, VAR_12;
 unsigned int VAR_13;
 struct ocfs2_super *VAR_14 = FUNC_1(VAR_5->i_sb);
 u64 VAR_15, VAR_16, VAR_17;
 struct buffer_head *VAR_18 = ((void*)0);
 struct ocfs2_extent_rec VAR_19;

 VAR_9 = FUNC_4(VAR_6, VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_13(VAR_5, &VAR_18, 0);
 if (VAR_9) {
  FUNC_9(VAR_9);
  goto out;
 }

 FUNC_3(&FUNC_0(VAR_5)->ip_alloc_sem);




 if (FUNC_0(VAR_5)->ip_dyn_features & VAR_4) {
  VAR_9 = FUNC_11(VAR_5, VAR_18, VAR_6, VAR_7);
  goto out_unlock;
 }

 VAR_12 = VAR_7 >> VAR_14->s_clustersize_bits;
 VAR_11 = FUNC_10(VAR_5->i_sb,
            VAR_7 + VAR_8);
 VAR_11 -= VAR_12;
 VAR_10 = 0;
 while (VAR_12 < VAR_11 && !VAR_10) {
  u32 VAR_20;

  VAR_9 = FUNC_12(VAR_5, VAR_18, VAR_12,
       &VAR_13, &VAR_19, &VAR_10);
  if (VAR_9) {
   FUNC_9(VAR_9);
   goto out;
  }

  if (VAR_19.e_blkno == 0ULL) {
   VAR_12 += VAR_13;
   continue;
  }

  VAR_20 = 0;
  if (VAR_19.e_flags & VAR_2)
   VAR_20 |= VAR_1;
  if (VAR_10)
   VAR_20 |= VAR_0;
  VAR_15 = (u64)FUNC_6(VAR_19.e_leaf_clusters) << VAR_14->s_clustersize_bits;
  VAR_16 = FUNC_8(VAR_19.e_blkno) << VAR_14->sb->s_blocksize_bits;
  VAR_17 = (u64)FUNC_7(VAR_19.e_cpos) << VAR_14->s_clustersize_bits;

  VAR_9 = FUNC_5(VAR_6, VAR_17, VAR_16,
           VAR_15, VAR_20);
  if (VAR_9)
   break;

  VAR_12 = FUNC_7(VAR_19.e_cpos)+ FUNC_6(VAR_19.e_leaf_clusters);
 }

 if (VAR_9 > 0)
  VAR_9 = 0;

out_unlock:
 FUNC_2(VAR_18);

 FUNC_15(&FUNC_0(VAR_5)->ip_alloc_sem);

 FUNC_14(VAR_5, 0);
out:

 return VAR_9;
}
