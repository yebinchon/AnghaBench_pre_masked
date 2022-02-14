
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int bitmap_data; int local_data; } ;
struct ocfs2_super {int bitmap_cpg; TYPE_1__ alloc_stats; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_given; scalar_t__ ac_bits_wanted; scalar_t__ ac_which; int ac_inode; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,unsigned int,int*,int*) ;
 int FUNC_7 (struct ocfs2_super*,struct ocfs2_alloc_context*,int *,unsigned int,int,int *,int*,int *) ;
 int FUNC_8 (int ,int ,int ) ;

int FUNC_9(struct ocfs2_super *VAR_4,
      handle_t *VAR_5,
      struct ocfs2_alloc_context *VAR_6,
      u32 VAR_7,
      u32 VAR_8,
      u32 *VAR_9,
      u32 *VAR_10)
{
 int VAR_11;
 unsigned int VAR_12 = VAR_8;
 u64 VAR_13 = 0;
 u16 VAR_14;

 FUNC_3();

 FUNC_0(VAR_6->ac_bits_given >= VAR_6->ac_bits_wanted);

 FUNC_0(VAR_6->ac_which != VAR_2
        && VAR_6->ac_which != VAR_3);

 if (VAR_6->ac_which == VAR_2) {
  VAR_11 = FUNC_6(VAR_4,
            VAR_5,
            VAR_6,
            VAR_12,
            VAR_9,
            VAR_10);
  if (!VAR_11)
   FUNC_1(&VAR_4->alloc_stats.local_data);
 } else {
  if (VAR_7 > (VAR_4->bitmap_cpg - 1)) {


   FUNC_2(VAR_1, "minimum allocation requested %u exceeds "
        "group bitmap size %u!\n", VAR_7,
        VAR_4->bitmap_cpg);
   VAR_11 = -VAR_0;
   goto bail;
  }

  if (VAR_12 > (VAR_4->bitmap_cpg - 1))
   VAR_12 = VAR_4->bitmap_cpg - 1;

  VAR_11 = FUNC_7(VAR_4,
         VAR_6,
         VAR_5,
         VAR_12,
         VAR_7,
         &VAR_14,
         VAR_10,
         &VAR_13);
  if (!VAR_11) {
   *VAR_9 =
    FUNC_8(VAR_6->ac_inode,
         VAR_13,
         VAR_14);
   FUNC_1(&VAR_4->alloc_stats.bitmap_data);
  }
 }
 if (VAR_11 < 0) {
  if (VAR_11 != -VAR_0)
   FUNC_4(VAR_11);
  goto bail;
 }

 VAR_6->ac_bits_given += *VAR_10;

bail:
 FUNC_5(VAR_11);
 return VAR_11;
}
