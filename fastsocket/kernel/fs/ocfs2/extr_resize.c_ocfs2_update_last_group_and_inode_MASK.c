
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct ocfs2_super {int s_clustersize_bits; int sb; } ;
struct ocfs2_group_desc {int bg_free_bits_count; int bg_bits; int bg_chain; } ;
struct TYPE_6__ {int i_used; int i_total; } ;
struct TYPE_7__ {TYPE_2__ bitmap1; } ;
struct ocfs2_chain_list {struct ocfs2_chain_rec* cl_recs; int cl_cpg; int cl_bpc; } ;
struct TYPE_5__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {int i_size; int i_clusters; TYPE_3__ id1; TYPE_1__ id2; } ;
struct ocfs2_chain_rec {int c_free; int c_total; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_8__ {int ip_lock; int ip_clusters; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*,int,int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct inode*,struct ocfs2_group_desc*,int,int ,int,int) ;
 int FUNC_15 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_16 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_17 (int *,struct buffer_head*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(handle_t *VAR_2,
          struct inode *VAR_3,
          struct buffer_head *VAR_4,
          struct buffer_head *VAR_5,
          u32 VAR_6,
          int VAR_7)
{
 int VAR_8 = 0;
 struct ocfs2_super *VAR_9 = FUNC_3(VAR_3->i_sb);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *) VAR_4->b_data;
 struct ocfs2_chain_list *VAR_11 = &VAR_10->id2.i_chain;
 struct ocfs2_chain_rec *VAR_12;
 struct ocfs2_group_desc *VAR_13;
 u16 VAR_14, VAR_15, VAR_16 = 0;
 u16 VAR_17 = FUNC_6(VAR_11->cl_bpc);
 u16 VAR_18 = FUNC_6(VAR_11->cl_cpg);

 FUNC_11("(new_clusters=%d, first_new_cluster = %u)\n",
     VAR_7, VAR_6);

 VAR_8 = FUNC_16(VAR_2, FUNC_0(VAR_3),
          VAR_5, VAR_1);
 if (VAR_8 < 0) {
  FUNC_12(VAR_8);
  goto out;
 }

 VAR_13 = (struct ocfs2_group_desc *)VAR_5->b_data;


 VAR_15 = VAR_7 * VAR_17;
 FUNC_5(&VAR_13->bg_bits, VAR_15);
 FUNC_5(&VAR_13->bg_free_bits_count, VAR_15);





 if (FUNC_1(VAR_9->sb,
         VAR_0)) {
  VAR_16 = FUNC_14(VAR_3,
           VAR_13,
           VAR_7,
           VAR_6,
           VAR_18, 1);
  FUNC_5(&VAR_13->bg_free_bits_count, -1 * VAR_16);
 }

 VAR_8 = FUNC_17(VAR_2, VAR_5);
 if (VAR_8 < 0) {
  FUNC_12(VAR_8);
  goto out_rollback;
 }


 VAR_8 = FUNC_15(VAR_2, FUNC_0(VAR_3), VAR_4,
          VAR_1);
 if (VAR_8 < 0) {
  FUNC_12(VAR_8);
  goto out_rollback;
 }

 VAR_14 = FUNC_6(VAR_13->bg_chain);
 VAR_12 = (&VAR_11->cl_recs[VAR_14]);
 FUNC_7(&VAR_12->c_total, VAR_15);
 FUNC_7(&VAR_12->c_free, VAR_15);
 FUNC_7(&VAR_10->id1.bitmap1.i_total, VAR_15);
 FUNC_7(&VAR_10->i_clusters, VAR_7);

 if (VAR_16) {
  FUNC_7(&VAR_12->c_free, -1 * VAR_16);
  FUNC_7(&VAR_10->id1.bitmap1.i_used, VAR_16);
 }

 FUNC_18(&FUNC_2(VAR_3)->ip_lock);
 FUNC_2(VAR_3)->ip_clusters = FUNC_8(VAR_10->i_clusters);
 FUNC_9(&VAR_10->i_size, VAR_7 << VAR_9->s_clustersize_bits);
 FUNC_19(&FUNC_2(VAR_3)->ip_lock);
 FUNC_4(VAR_3, FUNC_10(VAR_10->i_size));

 FUNC_17(VAR_2, VAR_4);

out_rollback:
 if (VAR_8 < 0) {
  FUNC_14(VAR_3,
         VAR_13,
         VAR_7,
         VAR_6,
         VAR_18, 0);
  FUNC_5(&VAR_13->bg_free_bits_count, VAR_16);
  FUNC_5(&VAR_13->bg_bits, -1 * VAR_15);
  FUNC_5(&VAR_13->bg_free_bits_count, -1 * VAR_15);
 }
out:
 FUNC_13(VAR_8);
 return VAR_8;
}
