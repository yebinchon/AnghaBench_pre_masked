
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int id_data; } ;
struct TYPE_5__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {TYPE_2__ id2; int i_dyn_features; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,scalar_t__) ;
 int FUNC_8 (void*,int ,scalar_t__) ;
 int FUNC_9 (int ,char*,unsigned long long,...) ;
 scalar_t__ FUNC_10 (int ,struct ocfs2_dinode*) ;

int FUNC_11(struct inode *VAR_4, struct page *VAR_5,
      struct buffer_head *VAR_6)
{
 void *VAR_7;
 loff_t VAR_8;
 struct ocfs2_dinode *VAR_9 = (struct ocfs2_dinode *)VAR_6->b_data;

 if (!(FUNC_6(VAR_9->i_dyn_features) & VAR_2)) {
  FUNC_9(VAR_4->i_sb, "Inode %llu lost inline data flag",
       (unsigned long long)FUNC_0(VAR_4)->ip_blkno);
  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_4);

 if (VAR_8 > VAR_3 ||
     VAR_8 > FUNC_10(VAR_4->i_sb, VAR_9)) {
  FUNC_9(VAR_4->i_sb,
       "Inode %llu has with inline data has bad size: %Lu",
       (unsigned long long)FUNC_0(VAR_4)->ip_blkno,
       (unsigned long long)VAR_8);
  return -VAR_0;
 }

 VAR_7 = FUNC_4(VAR_5, VAR_1);
 if (VAR_8)
  FUNC_7(VAR_7, VAR_9->id2.i_data.id_data, VAR_8);

 FUNC_8(VAR_7 + VAR_8, 0, VAR_3 - VAR_8);
 FUNC_2(VAR_5);
 FUNC_5(VAR_7, VAR_1);

 FUNC_1(VAR_5);

 return 0;
}
