
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct ocfs2_super {int s_clustersize_bits; int sb; } ;
struct ocfs2_extent_tree {int dummy; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct inode {struct address_space* i_mapping; int i_sb; } ;
struct buffer_head {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int ip_dyn_features; scalar_t__ ip_blkno; } ;


 int FUNC_0 (struct inode*) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,unsigned long long,unsigned long long,unsigned long long,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (struct inode*,int,int*,int*,int *) ;
 int FUNC_7 (struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_8 (struct ocfs2_extent_tree*,int ,struct buffer_head*) ;
 int FUNC_9 (struct inode*,struct ocfs2_extent_tree*,int,int,int,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_10 (struct ocfs2_super*,struct ocfs2_cached_dealloc_ctxt*) ;
 int FUNC_11 (struct ocfs2_super*,int) ;
 int FUNC_12 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct inode*,struct buffer_head*,scalar_t__,int ,int ) ;
 int FUNC_14 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct address_space*,int ) ;
 int FUNC_16 (struct address_space*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_1,
        struct buffer_head *VAR_2, u64 VAR_3,
        u64 VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 struct ocfs2_super *VAR_11 = FUNC_2(VAR_1->i_sb);
 struct ocfs2_cached_dealloc_ctxt VAR_12;
 struct address_space *VAR_13 = VAR_1->i_mapping;
 struct ocfs2_extent_tree VAR_14;

 FUNC_8(&VAR_14, FUNC_0(VAR_1), VAR_2);
 FUNC_7(&VAR_12);

 if (VAR_4 == 0)
  return 0;

 if (FUNC_1(VAR_1)->ip_dyn_features & VAR_0) {
  VAR_5 = FUNC_13(VAR_1, VAR_2, VAR_3,
         VAR_3 + VAR_4, 0);
  if (VAR_5) {
   FUNC_4(VAR_5);
   goto out;
  }






  FUNC_16(VAR_13, 0, 0, 0);
  FUNC_15(VAR_13, 0);
  goto out;
 }

 VAR_6 = FUNC_5(VAR_11->sb, VAR_3);
 VAR_7 = (VAR_3 + VAR_4) >> VAR_11->s_clustersize_bits;
 if (VAR_7 >= VAR_6)
  VAR_7 -= VAR_6;
 else
  VAR_7 = 0;

 FUNC_3(0, "Inode: %llu, start: %llu, len: %llu, cstart: %u, clen: %u\n",
      (unsigned long long)FUNC_1(VAR_1)->ip_blkno,
      (unsigned long long)VAR_3,
      (unsigned long long)VAR_4, VAR_6, VAR_7);

 VAR_5 = FUNC_14(VAR_1, VAR_3, VAR_4);
 if (VAR_5) {
  FUNC_4(VAR_5);
  goto out;
 }

 VAR_8 = VAR_6;
 while (VAR_7) {
  VAR_5 = FUNC_6(VAR_1, VAR_8, &VAR_9,
      &VAR_10, ((void*)0));
  if (VAR_5) {
   FUNC_4(VAR_5);
   goto out;
  }

  if (VAR_10 > VAR_7)
   VAR_10 = VAR_7;


  if (VAR_9 != 0) {
   VAR_5 = FUNC_9(VAR_1, &VAR_14, VAR_8,
             VAR_9, VAR_10,
             &VAR_12);
   if (VAR_5) {
    FUNC_4(VAR_5);
    goto out;
   }
  }

  VAR_8 += VAR_10;
  VAR_7 -= VAR_10;
 }

 FUNC_12(VAR_1, VAR_3, VAR_4);

out:
 FUNC_11(VAR_11, 1);
 FUNC_10(VAR_11, &VAR_12);

 return VAR_5;
}
