
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_group_desc {int bg_bits; int bg_blkno; scalar_t__ bg_free_bits_count; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {unsigned int ip_clusters; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 struct ocfs2_super* FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_6 (struct ocfs2_super*,struct buffer_head*,scalar_t__,unsigned int,scalar_t__*,scalar_t__*) ;
 unsigned int FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct ocfs2_super*,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct inode *VAR_1,
          struct buffer_head *VAR_2,
          u32 VAR_3, u32 VAR_4,
          u64 VAR_5,
          u16 *VAR_6, u16 *VAR_7)
{
 int VAR_8 = -VAR_0;
 int VAR_9;
 u64 VAR_10;
 struct ocfs2_group_desc *VAR_11 = (struct ocfs2_group_desc *) VAR_2->b_data;
 struct ocfs2_super *VAR_12 = FUNC_2(VAR_1->i_sb);
 u16 VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;

 FUNC_0(!FUNC_9(VAR_1));

 if (VAR_11->bg_free_bits_count) {
  VAR_15 = FUNC_3(VAR_11->bg_bits);







  VAR_16 = FUNC_7(VAR_1->i_sb,
         FUNC_4(VAR_11->bg_blkno));
  if ((VAR_16 + VAR_15) >
      FUNC_1(VAR_1)->ip_clusters) {
   VAR_15 = FUNC_1(VAR_1)->ip_clusters - VAR_16;
   FUNC_5(0, "Desc %llu, bg_bits %u, clusters %u, use %u\n",
        (unsigned long long)FUNC_4(VAR_11->bg_blkno),
        FUNC_3(VAR_11->bg_bits),
        FUNC_1(VAR_1)->ip_clusters, VAR_15);
  }

  VAR_9 = FUNC_6(FUNC_2(VAR_1->i_sb),
       VAR_2, VAR_3,
       VAR_15,
       &VAR_13, &VAR_14);
  if (VAR_9)
   return VAR_9;

  if (VAR_5) {
   VAR_10 = FUNC_8(VAR_1->i_sb,
         VAR_16 +
         VAR_13 + VAR_14);
   FUNC_5(0, "Checking %llu against %llu\n",
        (unsigned long long)VAR_10,
        (unsigned long long)VAR_5);
   if (VAR_10 > VAR_5)
    return -VAR_0;
  }





  if (VAR_4 <= VAR_14) {
   *VAR_6 = VAR_13;
   *VAR_7 = VAR_14;
   VAR_8 = 0;
  } else if (VAR_14) {




   FUNC_10(VAR_12, VAR_14);
  }
 }

 return VAR_8;
}
