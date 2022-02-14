
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int moves; } ;
struct ocfs2_super {TYPE_1__ alloc_stats; TYPE_2__* local_alloc_bh; } ;
struct ocfs2_dinode {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_5__ {int b_size; scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct ocfs2_dinode*) ;
 struct ocfs2_dinode* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct ocfs2_dinode*,struct ocfs2_dinode*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct ocfs2_dinode*) ;
 int FUNC_13 (struct ocfs2_super*,int *) ;
 int FUNC_14 (struct ocfs2_alloc_context*) ;
 int FUNC_15 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_16 (int *,TYPE_2__*) ;
 int FUNC_17 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*) ;
 int FUNC_18 (struct ocfs2_super*,struct ocfs2_alloc_context**,struct inode**,struct buffer_head**) ;
 int FUNC_19 (struct ocfs2_super*,int ) ;
 int * FUNC_20 (struct ocfs2_super*,int ) ;
 int FUNC_21 (struct ocfs2_super*,int *,struct ocfs2_dinode*,struct inode*,struct buffer_head*) ;

__attribute__((used)) static int FUNC_22(struct ocfs2_super *VAR_6,
       struct inode *VAR_7)
{
 int VAR_8 = 0;
 struct buffer_head *VAR_9 = ((void*)0);
 struct inode *VAR_10 = ((void*)0);
 handle_t *VAR_11 = ((void*)0);
 struct ocfs2_dinode *VAR_12;
 struct ocfs2_dinode *VAR_13 = ((void*)0);
 struct ocfs2_alloc_context *VAR_14 = ((void*)0);

 FUNC_9();

 FUNC_19(VAR_6, VAR_4);


 VAR_8 = FUNC_18(VAR_6,
            &VAR_14,
            &VAR_10,
            &VAR_9);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_1)
   FUNC_10(VAR_8);
  goto bail;
 }

 VAR_11 = FUNC_20(VAR_6, VAR_5);
 if (FUNC_1(VAR_11)) {
  VAR_8 = FUNC_2(VAR_11);
  VAR_11 = ((void*)0);
  FUNC_10(VAR_8);
  goto bail;
 }

 VAR_12 = (struct ocfs2_dinode *) VAR_6->local_alloc_bh->b_data;






 VAR_13 = FUNC_7(VAR_6->local_alloc_bh->b_size, VAR_2);
 if (!VAR_13) {
  VAR_8 = -VAR_0;
  FUNC_10(VAR_8);
  goto bail;
 }
 FUNC_8(VAR_13, VAR_12, VAR_6->local_alloc_bh->b_size);

 VAR_8 = FUNC_15(VAR_11,
      FUNC_0(VAR_7),
      VAR_6->local_alloc_bh,
      VAR_3);
 if (VAR_8 < 0) {
  FUNC_10(VAR_8);
  goto bail;
 }

 FUNC_12(VAR_12);

 VAR_8 = FUNC_16(VAR_11, VAR_6->local_alloc_bh);
 if (VAR_8 < 0) {
  FUNC_10(VAR_8);
  goto bail;
 }

 VAR_8 = FUNC_21(VAR_6, VAR_11, VAR_13,
       VAR_10, VAR_9);
 if (VAR_8 < 0) {
  FUNC_10(VAR_8);
  goto bail;
 }

 VAR_8 = FUNC_17(VAR_6, VAR_11, VAR_14);
 if (VAR_8 < 0) {
  if (VAR_8 != -VAR_1)
   FUNC_10(VAR_8);
  goto bail;
 }

 FUNC_3(&VAR_6->alloc_stats.moves);

 VAR_8 = 0;
bail:
 if (VAR_11)
  FUNC_13(VAR_6, VAR_11);

 FUNC_4(VAR_9);

 if (VAR_10)
  FUNC_5(VAR_10);

 if (VAR_13)
  FUNC_6(VAR_13);

 if (VAR_14)
  FUNC_14(VAR_14);

 FUNC_11(VAR_8);
 return VAR_8;
}
