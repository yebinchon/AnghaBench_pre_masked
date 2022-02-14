
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_clusters; int ip_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct inode*,int*,int,int ,struct buffer_head*,int *,struct ocfs2_alloc_context*,struct ocfs2_alloc_context*,int *) ;
 int FUNC_7 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct super_block*,int) ;
 int FUNC_9 (struct inode*,int ,int *,int *,int *) ;
 struct buffer_head* FUNC_10 (struct super_block*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (struct inode*,scalar_t__) ;
 int FUNC_14 (struct inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_15(struct super_block *VAR_3,
          handle_t *VAR_4,
          struct inode *VAR_5,
          struct buffer_head *VAR_6,
          struct ocfs2_alloc_context *VAR_7,
          struct ocfs2_alloc_context *VAR_8,
          struct buffer_head **VAR_9)
{
 int VAR_10;
 int VAR_11, VAR_12 = 0;
 u64 VAR_13, VAR_14;

 FUNC_11(&FUNC_1(VAR_5)->ip_lock);
 VAR_11 = (FUNC_3(VAR_5) == FUNC_8(VAR_3, FUNC_1(VAR_5)->ip_clusters));
 FUNC_12(&FUNC_1(VAR_5)->ip_lock);

 if (VAR_11) {
  u32 VAR_15 = FUNC_1(VAR_5)->ip_clusters;

  if (FUNC_13(VAR_5,
     FUNC_8(VAR_3, 1))) {
   VAR_10 = -VAR_1;
   goto bail;
  }
  VAR_12 = 1;

  VAR_10 = FUNC_6(FUNC_2(VAR_3), VAR_5, &VAR_15,
           1, 0, VAR_6, VAR_4,
           VAR_7, VAR_8, ((void*)0));
  FUNC_0(VAR_10 == -VAR_0);
  if (VAR_10 < 0) {
   FUNC_4(VAR_10);
   goto bail;
  }
 }

 VAR_14 = FUNC_7(VAR_3, FUNC_3(VAR_5));
 VAR_10 = FUNC_9(VAR_5, VAR_14, &VAR_13, ((void*)0), ((void*)0));
 if (VAR_10 < 0) {
  FUNC_4(VAR_10);
  goto bail;
 }

 *VAR_9 = FUNC_10(VAR_3, VAR_13);
 if (!*VAR_9) {
  VAR_10 = -VAR_2;
  FUNC_4(VAR_10);
  goto bail;
 }
 VAR_10 = 0;
bail:
 if (VAR_12 && VAR_10 < 0)
  FUNC_14(VAR_5, FUNC_8(VAR_3, 1));
 FUNC_5(VAR_10);
 return VAR_10;
}
