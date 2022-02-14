
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct ocfs2_super {TYPE_2__* sb; int slot_num; int fs_generation; } ;
struct ocfs2_extent_tree {int et_ci; } ;
struct TYPE_4__ {void* l_count; } ;
struct ocfs2_extent_block {TYPE_1__ h_list; void* h_suballoc_bit; void* h_suballoc_slot; int h_fs_generation; int h_blkno; int h_signature; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_5__ {int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct buffer_head*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,int,int *,int*,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,struct buffer_head*) ;
 struct buffer_head* FUNC_15 (TYPE_2__*,int ) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static int FUNC_17(handle_t *VAR_3,
         struct ocfs2_extent_tree *VAR_4,
         int VAR_5,
         struct ocfs2_alloc_context *VAR_6,
         struct buffer_head *VAR_7[])
{
 int VAR_8, VAR_9, VAR_10;
 u16 VAR_11;
 u32 VAR_12;
 u64 VAR_13;
 struct ocfs2_super *VAR_14 =
  FUNC_0(FUNC_13(VAR_4->et_ci));
 struct ocfs2_extent_block *VAR_15;

 FUNC_6();

 VAR_8 = 0;
 while (VAR_8 < VAR_5) {
  VAR_9 = FUNC_9(VAR_14,
           VAR_3,
           VAR_6,
           VAR_5 - VAR_8,
           &VAR_11,
           &VAR_12,
           &VAR_13);
  if (VAR_9 < 0) {
   FUNC_7(VAR_9);
   goto bail;
  }

  for(VAR_10 = VAR_8; VAR_10 < (VAR_12 + VAR_8); VAR_10++) {
   VAR_7[VAR_10] = FUNC_15(VAR_14->sb, VAR_13);
   if (VAR_7[VAR_10] == ((void*)0)) {
    VAR_9 = -VAR_0;
    FUNC_7(VAR_9);
    goto bail;
   }
   FUNC_14(VAR_4->et_ci, VAR_7[VAR_10]);

   VAR_9 = FUNC_11(VAR_3, VAR_4->et_ci,
        VAR_7[VAR_10],
        VAR_2);
   if (VAR_9 < 0) {
    FUNC_7(VAR_9);
    goto bail;
   }

   FUNC_5(VAR_7[VAR_10]->b_data, 0, VAR_14->sb->s_blocksize);
   VAR_15 = (struct ocfs2_extent_block *) VAR_7[VAR_10]->b_data;

   FUNC_16(VAR_15->h_signature, VAR_1);
   VAR_15->h_blkno = FUNC_4(VAR_13);
   VAR_15->h_fs_generation = FUNC_3(VAR_14->fs_generation);
   VAR_15->h_suballoc_slot = FUNC_2(VAR_14->slot_num);
   VAR_15->h_suballoc_bit = FUNC_2(VAR_11);
   VAR_15->h_list.l_count =
    FUNC_2(FUNC_10(VAR_14->sb));

   VAR_11++;
   VAR_13++;



   VAR_9 = FUNC_12(VAR_3, VAR_7[VAR_10]);
   if (VAR_9 < 0) {
    FUNC_7(VAR_9);
    goto bail;
   }
  }

  VAR_8 += VAR_12;
 }

 VAR_9 = 0;
bail:
 if (VAR_9 < 0) {
  for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
   FUNC_1(VAR_7[VAR_10]);
   VAR_7[VAR_10] = ((void*)0);
  }
 }
 FUNC_8(VAR_9);
 return VAR_9;
}
