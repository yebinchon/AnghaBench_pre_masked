
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct ocfs2_super {int la_last_gd; int osb_lock; void* local_alloc_bits; TYPE_1__* local_alloc_bh; } ;
struct ocfs2_local_alloc {void* la_bm_off; int la_size; int la_bitmap; } ;
struct TYPE_5__ {void* i_total; scalar_t__ i_used; } ;
struct TYPE_6__ {TYPE_2__ bitmap1; } ;
struct ocfs2_dinode {TYPE_3__ id1; } ;
struct ocfs2_alloc_context {int ac_last_group; } ;
typedef int handle_t ;
struct TYPE_4__ {scalar_t__ b_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ocfs2_local_alloc* FUNC_0 (struct ocfs2_dinode*) ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,void*,void**,void**) ;
 scalar_t__ FUNC_10 (struct ocfs2_super*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct ocfs2_super *VAR_3,
     handle_t *VAR_4,
     struct ocfs2_alloc_context *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7, VAR_8;
 struct ocfs2_dinode *VAR_9 = ((void*)0);
 struct ocfs2_local_alloc *VAR_10;

 FUNC_6();

 VAR_9 = (struct ocfs2_dinode *) VAR_3->local_alloc_bh->b_data;
 VAR_10 = FUNC_0(VAR_9);

 if (VAR_9->id1.bitmap1.i_total)
  FUNC_5(0, "asking me to alloc a new window over a non-empty "
       "one\n");

 FUNC_5(0, "Allocating %u clusters for a new window.\n",
      VAR_3->local_alloc_bits);




 VAR_5->ac_last_group = VAR_3->la_last_gd;




 VAR_6 = FUNC_9(VAR_3, VAR_4, VAR_5, VAR_3->local_alloc_bits,
          &VAR_7, &VAR_8);
 if (VAR_6 == -VAR_0) {
retry_enospc:





  if (FUNC_10(VAR_3, VAR_2) ==
      VAR_1)
   goto bail;

  VAR_6 = FUNC_9(VAR_3, VAR_4, VAR_5,
           VAR_3->local_alloc_bits,
           &VAR_7,
           &VAR_8);
  if (VAR_6 == -VAR_0)
   goto retry_enospc;





  if (VAR_6 == 0) {
   FUNC_11(&VAR_3->osb_lock);
   VAR_3->local_alloc_bits = VAR_8;
   FUNC_12(&VAR_3->osb_lock);
  }
 }
 if (VAR_6 < 0) {
  if (VAR_6 != -VAR_0)
   FUNC_7(VAR_6);
  goto bail;
 }

 VAR_3->la_last_gd = VAR_5->ac_last_group;

 VAR_10->la_bm_off = FUNC_1(VAR_7);
 VAR_9->id1.bitmap1.i_total = FUNC_1(VAR_8);




 VAR_9->id1.bitmap1.i_used = 0;
 FUNC_4(FUNC_0(VAR_9)->la_bitmap, 0,
        FUNC_2(VAR_10->la_size));

 FUNC_5(0, "New window allocated:\n");
 FUNC_5(0, "window la_bm_off = %u\n",
      FUNC_0(VAR_9)->la_bm_off);
 FUNC_5(0, "window bits = %u\n", FUNC_3(VAR_9->id1.bitmap1.i_total));

bail:
 FUNC_8(VAR_6);
 return VAR_6;
}
