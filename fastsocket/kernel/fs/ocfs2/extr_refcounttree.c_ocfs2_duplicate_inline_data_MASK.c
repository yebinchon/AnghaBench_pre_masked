
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct TYPE_4__ {int id_count; int id_data; } ;
struct TYPE_5__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {int i_dyn_features; TYPE_2__ id2; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_6__ {int ip_dyn_features; int ip_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct ocfs2_super*,int *) ;
 int FUNC_11 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_12 (int *,struct buffer_head*) ;
 int * FUNC_13 (struct ocfs2_super*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_3,
           struct buffer_head *VAR_4,
           struct inode *VAR_5,
           struct buffer_head *VAR_6)
{
 int VAR_7;
 handle_t *VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_4(VAR_3->i_sb);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_4->b_data;
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *)VAR_6->b_data;

 FUNC_0(!(FUNC_3(VAR_3)->ip_dyn_features & VAR_0));

 VAR_8 = FUNC_13(VAR_9, VAR_1);
 if (FUNC_2(VAR_8)) {
  VAR_7 = FUNC_5(VAR_8);
  FUNC_9(VAR_7);
  goto out;
 }

 VAR_7 = FUNC_11(VAR_8, FUNC_1(VAR_5), VAR_6,
          VAR_2);
 if (VAR_7) {
  FUNC_9(VAR_7);
  goto out_commit;
 }

 VAR_11->id2.i_data.id_count = VAR_10->id2.i_data.id_count;
 FUNC_8(VAR_11->id2.i_data.id_data, VAR_10->id2.i_data.id_data,
        FUNC_7(VAR_10->id2.i_data.id_count));
 FUNC_14(&FUNC_3(VAR_5)->ip_lock);
 FUNC_3(VAR_5)->ip_dyn_features |= VAR_0;
 VAR_11->i_dyn_features = FUNC_6(FUNC_3(VAR_5)->ip_dyn_features);
 FUNC_15(&FUNC_3(VAR_5)->ip_lock);

 FUNC_12(VAR_8, VAR_6);

out_commit:
 FUNC_10(VAR_9, VAR_8);
out:
 return VAR_7;
}
