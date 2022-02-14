
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_xattr_bucket {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
typedef int handle_t ;
struct TYPE_5__ {int xh_num_buckets; } ;
struct TYPE_4__ {scalar_t__ s_clustersize; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct ocfs2_xattr_bucket*) ;
 TYPE_2__* FUNC_3 (struct ocfs2_xattr_bucket*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (struct inode*,int *,scalar_t__,scalar_t__,scalar_t__,int,int*) ;
 int FUNC_10 (struct ocfs2_xattr_bucket*,scalar_t__) ;
 int FUNC_11 (struct ocfs2_xattr_bucket*) ;
 int FUNC_12 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_13(struct inode *VAR_1,
            handle_t *VAR_2,
            struct ocfs2_xattr_bucket *VAR_3,
            struct ocfs2_xattr_bucket *VAR_4,
            u64 VAR_5,
            u32 VAR_6,
            u32 *VAR_7)
{
 int VAR_8;
 struct super_block *VAR_9 = VAR_1->i_sb;
 int VAR_10 = FUNC_7(VAR_9);
 int VAR_11 = FUNC_12(FUNC_1(VAR_9));
 int VAR_12 = VAR_11 / 2;
 u64 VAR_13;
 u64 VAR_14 = FUNC_2(VAR_3) +
  ((VAR_6 - 1) * FUNC_8(VAR_9, 1));

 FUNC_0(FUNC_4(FUNC_3(VAR_3)->xh_num_buckets) < VAR_11);
 FUNC_0(VAR_0 == FUNC_1(VAR_9)->s_clustersize);

 FUNC_5(0, "move half of xattrs in cluster %llu to %llu\n",
      (unsigned long long)VAR_14, (unsigned long long)VAR_5);

 VAR_8 = FUNC_9(VAR_1, VAR_2, FUNC_2(VAR_3),
         VAR_14, VAR_5,
         VAR_12, VAR_7);
 if (VAR_8) {
  FUNC_6(VAR_8);
  goto out;
 }


 VAR_13 = VAR_14 + (VAR_12 * VAR_10);





 if (FUNC_2(VAR_4) >= VAR_13) {

  VAR_13 = VAR_5 +
   (FUNC_2(VAR_4) - VAR_13);

  FUNC_11(VAR_3);
  FUNC_11(VAR_4);





  VAR_8 = FUNC_10(VAR_3, VAR_5);
  if (VAR_8) {
   FUNC_6(VAR_8);
   goto out;
  }
  VAR_8 = FUNC_10(VAR_4, VAR_13);
  if (VAR_8)
   FUNC_6(VAR_8);

 }

out:
 return VAR_8;
}
