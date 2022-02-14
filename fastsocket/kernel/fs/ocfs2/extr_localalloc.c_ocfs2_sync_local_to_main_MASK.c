
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_local_alloc {void* la_bitmap; int la_bm_off; } ;
struct TYPE_3__ {int i_total; int i_used; } ;
struct TYPE_4__ {TYPE_1__ bitmap1; } ;
struct ocfs2_dinode {TYPE_2__ id1; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;


 struct ocfs2_local_alloc* FUNC_0 (struct ocfs2_dinode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 int FUNC_7 (void*,int,int) ;
 int FUNC_8 (int *,struct inode*,struct buffer_head*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_9(struct ocfs2_super *VAR_0,
        handle_t *VAR_1,
        struct ocfs2_dinode *VAR_2,
        struct inode *VAR_3,
        struct buffer_head *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 u64 VAR_10;
 u64 VAR_11;
 void *VAR_12;
 struct ocfs2_local_alloc *VAR_13 = FUNC_0(VAR_2);

 FUNC_3("total = %u, used = %u\n",
     FUNC_1(VAR_2->id1.bitmap1.i_total),
     FUNC_1(VAR_2->id1.bitmap1.i_used));

 if (!VAR_2->id1.bitmap1.i_total) {
  FUNC_2(0, "nothing to sync!\n");
  goto bail;
 }

 if (FUNC_1(VAR_2->id1.bitmap1.i_used) ==
     FUNC_1(VAR_2->id1.bitmap1.i_total)) {
  FUNC_2(0, "all bits were taken!\n");
  goto bail;
 }

 VAR_10 = FUNC_6(VAR_0->sb,
      FUNC_1(VAR_13->la_bm_off));
 VAR_12 = VAR_13->la_bitmap;
 VAR_9 = VAR_8 = VAR_6 = 0;
 VAR_7 = FUNC_1(VAR_2->id1.bitmap1.i_total);

 while ((VAR_6 = FUNC_7(VAR_12, VAR_7, VAR_9))
        != -1) {
  if ((VAR_6 < VAR_7) && (VAR_6 == VAR_9)) {
   VAR_8++;
   VAR_9++;
   continue;
  }
  if (VAR_8) {
   VAR_11 = VAR_10 +
    FUNC_6(VAR_0->sb,
        VAR_9 - VAR_8);

   FUNC_2(0, "freeing %u bits starting at local alloc bit "
        "%u (la_start_blk = %llu, blkno = %llu)\n",
        VAR_8, VAR_9 - VAR_8,
        (unsigned long long)VAR_10,
        (unsigned long long)VAR_11);

   VAR_5 = FUNC_8(VAR_1, VAR_3,
           VAR_4, VAR_11, VAR_8);
   if (VAR_5 < 0) {
    FUNC_4(VAR_5);
    goto bail;
   }
  }
  if (VAR_6 >= VAR_7)
   break;
  VAR_8 = 1;
  VAR_9 = VAR_6 + 1;
 }

bail:
 FUNC_5(VAR_5);
 return VAR_5;
}
