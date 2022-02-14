
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct ocfs2_group_desc {int bg_free_bits_count; int bg_blkno; int bg_next_group; } ;
struct TYPE_10__ {int i_used; } ;
struct TYPE_11__ {TYPE_2__ bitmap1; } ;
struct TYPE_9__ {int i_chain; } ;
struct ocfs2_dinode {int i_blkno; TYPE_3__ id1; TYPE_1__ id2; } ;
struct ocfs2_chain_list {TYPE_4__* cl_recs; } ;
struct ocfs2_alloc_context {size_t ac_chain; int (* ac_group_search ) (struct inode*,struct buffer_head*,scalar_t__,scalar_t__,int ,size_t*,size_t*) ;TYPE_5__* ac_bh; scalar_t__ ac_allow_chain_relink; int ac_max_block; struct inode* ac_inode; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_14__ {scalar_t__ ip_blkno; } ;
struct TYPE_13__ {scalar_t__ b_data; } ;
struct TYPE_12__ {int c_free; int c_blkno; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 TYPE_8__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (scalar_t__) ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (int *,unsigned int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,unsigned int,unsigned long long,...) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct ocfs2_group_desc*,unsigned int) ;
 int FUNC_13 (int *,struct inode*,struct ocfs2_group_desc*,struct buffer_head*,size_t,unsigned int) ;
 int FUNC_14 (int *,int ,TYPE_5__*,int ) ;
 int FUNC_15 (int *,TYPE_5__*) ;
 int FUNC_16 (struct inode*,struct ocfs2_dinode*,scalar_t__,struct buffer_head**) ;
 int FUNC_17 (int *,struct inode*,TYPE_5__*,struct buffer_head*,struct buffer_head*,size_t) ;
 int FUNC_18 (struct inode*,struct buffer_head*,scalar_t__,scalar_t__,int ,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_19(struct ocfs2_alloc_context *VAR_2,
         handle_t *VAR_3,
         u32 VAR_4,
         u32 VAR_5,
         u16 *VAR_6,
         unsigned int *VAR_7,
         u64 *VAR_8,
         u16 *VAR_9)
{
 int VAR_10;
 u16 VAR_11, VAR_12;
 u32 VAR_13;
 u64 VAR_14;
 struct inode *VAR_15 = VAR_2->ac_inode;
 struct buffer_head *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17 = ((void*)0);
 struct ocfs2_dinode *VAR_18 = (struct ocfs2_dinode *) VAR_2->ac_bh->b_data;
 struct ocfs2_chain_list *VAR_19 = (struct ocfs2_chain_list *) &VAR_18->id2.i_chain;
 struct ocfs2_group_desc *VAR_20;

 VAR_11 = VAR_2->ac_chain;
 FUNC_9(0, "trying to alloc %u bits from chain %u, inode %llu\n",
      VAR_4, VAR_11,
      (unsigned long long)FUNC_2(VAR_15)->ip_blkno);

 VAR_10 = FUNC_16(VAR_15, VAR_18,
          FUNC_8(VAR_19->cl_recs[VAR_11].c_blkno),
          &VAR_16);
 if (VAR_10 < 0) {
  FUNC_10(VAR_10);
  goto bail;
 }
 VAR_20 = (struct ocfs2_group_desc *) VAR_16->b_data;

 VAR_10 = -VAR_0;


 while ((VAR_10 = VAR_2->ac_group_search(VAR_15, VAR_16,
          VAR_4, VAR_5,
          VAR_2->ac_max_block, VAR_6,
          &VAR_12)) == -VAR_0) {
  if (!VAR_20->bg_next_group)
   break;

  FUNC_3(VAR_17);
  VAR_17 = ((void*)0);

  VAR_14 = FUNC_8(VAR_20->bg_next_group);
  VAR_17 = VAR_16;
  VAR_16 = ((void*)0);
  VAR_10 = FUNC_16(VAR_15, VAR_18,
           VAR_14, &VAR_16);
  if (VAR_10 < 0) {
   FUNC_10(VAR_10);
   goto bail;
  }
  VAR_20 = (struct ocfs2_group_desc *) VAR_16->b_data;
 }
 if (VAR_10 < 0) {
  if (VAR_10 != -VAR_0)
   FUNC_10(VAR_10);
  goto bail;
 }

 FUNC_9(0, "alloc succeeds: we give %u bits from block group %llu\n",
      VAR_12, (unsigned long long)FUNC_8(VAR_20->bg_blkno));

 *VAR_7 = VAR_12;

 FUNC_0(*VAR_7 == 0);
 if (VAR_2->ac_allow_chain_relink &&
     (VAR_17) &&
     (FUNC_12(VAR_20, *VAR_7))) {
  VAR_10 = FUNC_17(VAR_3, VAR_15,
        VAR_2->ac_bh, VAR_16,
        VAR_17, VAR_11);
  if (VAR_10 < 0) {
   FUNC_10(VAR_10);
   goto bail;
  }
 }



 VAR_10 = FUNC_14(VAR_3,
      FUNC_1(VAR_15),
      VAR_2->ac_bh,
      VAR_1);
 if (VAR_10 < 0) {
  FUNC_10(VAR_10);
  goto bail;
 }

 VAR_13 = FUNC_7(VAR_18->id1.bitmap1.i_used);
 VAR_18->id1.bitmap1.i_used = FUNC_4(*VAR_7 + VAR_13);
 FUNC_6(&VAR_19->cl_recs[VAR_11].c_free, -(*VAR_7));

 VAR_10 = FUNC_15(VAR_3,
         VAR_2->ac_bh);
 if (VAR_10 < 0) {
  FUNC_10(VAR_10);
  goto bail;
 }

 VAR_10 = FUNC_13(VAR_3,
         VAR_15,
         VAR_20,
         VAR_16,
         *VAR_6,
         *VAR_7);
 if (VAR_10 < 0) {
  FUNC_10(VAR_10);
  goto bail;
 }

 FUNC_9(0, "Allocated %u bits from suballocator %llu\n", *VAR_7,
      (unsigned long long)FUNC_8(VAR_18->i_blkno));

 *VAR_8 = FUNC_8(VAR_20->bg_blkno);
 *VAR_9 = FUNC_5(VAR_20->bg_free_bits_count);
bail:
 FUNC_3(VAR_16);
 FUNC_3(VAR_17);

 FUNC_11(VAR_10);
 return VAR_10;
}
