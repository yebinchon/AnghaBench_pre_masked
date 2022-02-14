
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct ocfs2_per_slot_free_list {struct ocfs2_cached_block_free* f_first; } ;
struct ocfs2_cached_dealloc_ctxt {int dummy; } ;
struct ocfs2_cached_block_free {unsigned int free_bit; struct ocfs2_cached_block_free* free_next; scalar_t__ free_blk; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_cached_block_free* FUNC_0 (int,int ) ;
 int FUNC_1 (int ,char*,int,int,unsigned int,unsigned long long) ;
 int FUNC_2 (int) ;
 struct ocfs2_per_slot_free_list* FUNC_3 (int,int,struct ocfs2_cached_dealloc_ctxt*) ;

int FUNC_4(struct ocfs2_cached_dealloc_ctxt *VAR_2,
         int VAR_3, int VAR_4, u64 VAR_5,
         unsigned int VAR_6)
{
 int VAR_7;
 struct ocfs2_per_slot_free_list *VAR_8;
 struct ocfs2_cached_block_free *VAR_9;

 VAR_8 = FUNC_3(VAR_3, VAR_4, VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_7 = -VAR_0;
  FUNC_2(VAR_7);
  goto out;
 }

 VAR_9 = FUNC_0(sizeof(*VAR_9), VAR_1);
 if (VAR_9 == ((void*)0)) {
  VAR_7 = -VAR_0;
  FUNC_2(VAR_7);
  goto out;
 }

 FUNC_1(0, "Insert: (type %d, slot %u, bit %u, blk %llu)\n",
      VAR_3, VAR_4, VAR_6, (unsigned long long)VAR_5);

 VAR_9->free_blk = VAR_5;
 VAR_9->free_bit = VAR_6;
 VAR_9->free_next = VAR_8->f_first;

 VAR_8->f_first = VAR_9;

 VAR_7 = 0;
out:
 return VAR_7;
}
