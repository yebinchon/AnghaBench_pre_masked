
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_6__ {int i_used; } ;
struct TYPE_7__ {TYPE_2__ bitmap1; } ;
struct TYPE_5__ {int i_chain; } ;
struct ocfs2_dinode {TYPE_3__ id1; TYPE_1__ id2; } ;
struct ocfs2_chain_list {TYPE_4__* cl_recs; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_8__ {int c_free; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_6 (int *,struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_1,
           handle_t *VAR_2,
           struct buffer_head *VAR_3,
           u32 VAR_4,
           u16 VAR_5)
{
 int VAR_6;
 u32 VAR_7;
 struct ocfs2_dinode *VAR_8 = (struct ocfs2_dinode *) VAR_3->b_data;
 struct ocfs2_chain_list *VAR_9 = (struct ocfs2_chain_list *) &VAR_8->id2.i_chain;

 VAR_6 = FUNC_5(VAR_2, FUNC_0(VAR_1), VAR_3,
          VAR_0);
 if (VAR_6 < 0) {
  FUNC_4(VAR_6);
  goto out;
 }

 VAR_7 = FUNC_3(VAR_8->id1.bitmap1.i_used);
 VAR_8->id1.bitmap1.i_used = FUNC_1(VAR_4 + VAR_7);
 FUNC_2(&VAR_9->cl_recs[VAR_5].c_free, -VAR_4);

 VAR_6 = FUNC_6(VAR_2, VAR_3);
 if (VAR_6 < 0)
  FUNC_4(VAR_6);

out:
 return VAR_6;
}
