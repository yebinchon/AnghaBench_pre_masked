
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {int sb; struct ocfs2_journal* journal; } ;
struct ocfs2_journal {int j_inode; struct buffer_head* j_bh; } ;
struct TYPE_3__ {int ij_flags; } ;
struct TYPE_4__ {TYPE_1__ journal1; } ;
struct ocfs2_dinode {int i_check; TYPE_2__ id1; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ocfs2_dinode*) ;
 unsigned int VAR_0 ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct ocfs2_dinode*) ;
 int FUNC_9 (int ,scalar_t__,int *) ;
 int FUNC_10 (struct ocfs2_super*,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_11(struct ocfs2_super *VAR_1,
          int VAR_2, int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5;
 struct ocfs2_journal *VAR_6 = VAR_1->journal;
 struct buffer_head *VAR_7 = VAR_6->j_bh;
 struct ocfs2_dinode *VAR_8;

 FUNC_5();

 VAR_8 = (struct ocfs2_dinode *)VAR_7->b_data;




 FUNC_0(!FUNC_2(VAR_8));

 VAR_5 = FUNC_4(VAR_8->id1.journal1.ij_flags);
 if (VAR_2)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;
 VAR_8->id1.journal1.ij_flags = FUNC_3(VAR_5);

 if (VAR_3)
  FUNC_8(VAR_8);

 FUNC_9(VAR_1->sb, VAR_7->b_data, &VAR_8->i_check);
 VAR_4 = FUNC_10(VAR_1, VAR_7, FUNC_1(VAR_6->j_inode));
 if (VAR_4 < 0)
  FUNC_6(VAR_4);

 FUNC_7(VAR_4);
 return VAR_4;
}
