
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int max_slots; struct ocfs2_slot_info* slot_info; } ;
struct ocfs2_slot_info {int si_num_slots; struct inode* si_inode; struct ocfs2_slot* si_slots; int si_extended; } ;
struct ocfs2_slot {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ocfs2_slot_info*) ;
 struct ocfs2_slot_info* FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 struct inode* FUNC_3 (struct ocfs2_super*,int ,int ) ;
 int FUNC_4 (struct ocfs2_super*,struct ocfs2_slot_info*) ;
 int FUNC_5 (struct ocfs2_super*) ;

int FUNC_6(struct ocfs2_super *VAR_5)
{
 int VAR_6;
 struct inode *VAR_7 = ((void*)0);
 struct ocfs2_slot_info *VAR_8;

 VAR_8 = FUNC_1(sizeof(struct ocfs2_slot_info) +
       (sizeof(struct ocfs2_slot) * VAR_5->max_slots),
       VAR_2);
 if (!VAR_8) {
  VAR_6 = -VAR_1;
  FUNC_2(VAR_6);
  goto bail;
 }

 VAR_8->si_extended = FUNC_5(VAR_5);
 VAR_8->si_num_slots = VAR_5->max_slots;
 VAR_8->si_slots = (struct ocfs2_slot *)((char *)VAR_8 +
          sizeof(struct ocfs2_slot_info));

 VAR_7 = FUNC_3(VAR_5, VAR_4,
         VAR_3);
 if (!VAR_7) {
  VAR_6 = -VAR_0;
  FUNC_2(VAR_6);
  goto bail;
 }

 VAR_8->si_inode = VAR_7;
 VAR_6 = FUNC_4(VAR_5, VAR_8);
 if (VAR_6 < 0) {
  FUNC_2(VAR_6);
  goto bail;
 }

 VAR_5->slot_info = (struct ocfs2_slot_info *)VAR_8;
bail:
 if (VAR_6 < 0 && VAR_8)
  FUNC_0(VAR_8);

 return VAR_6;
}
