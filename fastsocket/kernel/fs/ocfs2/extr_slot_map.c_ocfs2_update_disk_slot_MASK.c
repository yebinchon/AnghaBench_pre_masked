
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int osb_lock; } ;
struct ocfs2_slot_info {int si_inode; scalar_t__ si_extended; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ocfs2_slot_info*,int,struct buffer_head**) ;
 int FUNC_3 (struct ocfs2_slot_info*,int,struct buffer_head**) ;
 int FUNC_4 (struct ocfs2_super*,struct buffer_head*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct ocfs2_super *VAR_0,
      struct ocfs2_slot_info *VAR_1,
      int VAR_2)
{
 int VAR_3;
 struct buffer_head *VAR_4;

 FUNC_5(&VAR_0->osb_lock);
 if (VAR_1->si_extended)
  FUNC_2(VAR_1, VAR_2, &VAR_4);
 else
  FUNC_3(VAR_1, VAR_2, &VAR_4);
 FUNC_6(&VAR_0->osb_lock);

 VAR_3 = FUNC_4(VAR_0, VAR_4, FUNC_0(VAR_1->si_inode));
 if (VAR_3 < 0)
  FUNC_1(VAR_3);

 return VAR_3;
}
