
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct ocfs2_super {int sb; } ;
struct TYPE_9__ {int i_chain; } ;
struct TYPE_7__ {int i_total; int i_used; } ;
struct TYPE_8__ {TYPE_2__ bitmap1; } ;
struct ocfs2_dinode {TYPE_4__ id2; TYPE_3__ id1; int i_blkno; } ;
struct ocfs2_chain_list {TYPE_5__* cl_recs; int cl_next_free_rec; } ;
struct ocfs2_alloc_context {scalar_t__ ac_bits_given; scalar_t__ ac_bits_wanted; size_t ac_chain; int ac_allow_chain_relink; scalar_t__ ac_last_group; TYPE_1__* ac_bh; } ;
typedef int handle_t ;
struct TYPE_10__ {int c_free; } ;
struct TYPE_6__ {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,unsigned long long,scalar_t__,scalar_t__) ;
 size_t FUNC_10 (struct ocfs2_chain_list*) ;
 int FUNC_11 (struct ocfs2_alloc_context*,int *,scalar_t__,scalar_t__,size_t*,unsigned int*,scalar_t__*,size_t*) ;
 int FUNC_12 (struct ocfs2_alloc_context*,int *,scalar_t__,scalar_t__,size_t*,unsigned int*,scalar_t__,size_t*) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_super *VAR_2,
         struct ocfs2_alloc_context *VAR_3,
         handle_t *VAR_4,
         u32 VAR_5,
         u32 VAR_6,
         u16 *VAR_7,
         unsigned int *VAR_8,
         u64 *VAR_9)
{
 int VAR_10;
 u16 VAR_11, VAR_12;
 u16 VAR_13 = 0;
 u64 VAR_14 = VAR_3->ac_last_group;
 struct ocfs2_chain_list *VAR_15;
 struct ocfs2_dinode *VAR_16;

 FUNC_6();

 FUNC_0(VAR_3->ac_bits_given >= VAR_3->ac_bits_wanted);
 FUNC_0(VAR_5 > (VAR_3->ac_bits_wanted - VAR_3->ac_bits_given));
 FUNC_0(!VAR_3->ac_bh);

 VAR_16 = (struct ocfs2_dinode *) VAR_3->ac_bh->b_data;



 FUNC_0(!FUNC_1(VAR_16));

 if (FUNC_3(VAR_16->id1.bitmap1.i_used) >=
     FUNC_3(VAR_16->id1.bitmap1.i_total)) {
  FUNC_9(VAR_2->sb, "Chain allocator dinode %llu has %u used "
       "bits but only %u total.",
       (unsigned long long)FUNC_4(VAR_16->i_blkno),
       FUNC_3(VAR_16->id1.bitmap1.i_used),
       FUNC_3(VAR_16->id1.bitmap1.i_total));
  VAR_10 = -VAR_0;
  goto bail;
 }

 if (VAR_14) {




  VAR_10 = FUNC_12(VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8,
      VAR_14, &VAR_13);
  if (!VAR_10) {




   *VAR_9 = VAR_14;
   goto set_hint;
  }
  if (VAR_10 < 0 && VAR_10 != -VAR_1) {
   FUNC_7(VAR_10);
   goto bail;
  }
 }

 VAR_15 = (struct ocfs2_chain_list *) &VAR_16->id2.i_chain;

 VAR_11 = FUNC_10(VAR_15);
 VAR_3->ac_chain = VAR_11;
 VAR_3->ac_allow_chain_relink = 1;

 VAR_10 = FUNC_11(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
        VAR_8, VAR_9, &VAR_13);
 if (!VAR_10)
  goto set_hint;
 if (VAR_10 < 0 && VAR_10 != -VAR_1) {
  FUNC_7(VAR_10);
  goto bail;
 }

 FUNC_5(0, "Search of victim chain %u came up with nothing, "
      "trying all chains now.\n", VAR_11);





 VAR_3->ac_allow_chain_relink = 0;
 for (VAR_12 = 0; VAR_12 < FUNC_2(VAR_15->cl_next_free_rec); VAR_12 ++) {
  if (VAR_12 == VAR_11)
   continue;
  if (!VAR_15->cl_recs[VAR_12].c_free)
   continue;

  VAR_3->ac_chain = VAR_12;
  VAR_10 = FUNC_11(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8, VAR_9,
         &VAR_13);
  if (!VAR_10)
   break;
  if (VAR_10 < 0 && VAR_10 != -VAR_1) {
   FUNC_7(VAR_10);
   goto bail;
  }
 }

set_hint:
 if (VAR_10 != -VAR_1) {



  if (VAR_13 < VAR_6)
   VAR_3->ac_last_group = 0;
  else
   VAR_3->ac_last_group = *VAR_9;
 }

bail:
 FUNC_8(VAR_10);
 return VAR_10;
}
