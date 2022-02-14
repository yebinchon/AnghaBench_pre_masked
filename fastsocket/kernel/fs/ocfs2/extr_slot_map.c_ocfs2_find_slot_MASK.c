
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int slot_num; int osb_lock; int node_num; int preferred_slot; struct ocfs2_slot_info* slot_info; } ;
struct ocfs2_slot_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocfs2_slot_info*,int ) ;
 int FUNC_1 (struct ocfs2_slot_info*,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ocfs2_slot_info*,int,int ) ;
 int FUNC_7 (struct ocfs2_super*,struct ocfs2_slot_info*,int) ;
 int FUNC_8 (struct ocfs2_slot_info*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct ocfs2_super *VAR_3)
{
 int VAR_4;
 int VAR_5;
 struct ocfs2_slot_info *VAR_6;

 FUNC_3();

 VAR_6 = VAR_3->slot_info;

 FUNC_9(&VAR_3->osb_lock);
 FUNC_8(VAR_6);





 VAR_5 = FUNC_1(VAR_6, VAR_3->node_num);
 if (VAR_5 < 0) {


  VAR_5 = FUNC_0(VAR_6, VAR_3->preferred_slot);
  if (VAR_5 < 0) {
   FUNC_10(&VAR_3->osb_lock);
   FUNC_2(VAR_1, "no free slots available!\n");
   VAR_4 = -VAR_0;
   goto bail;
  }
 } else
  FUNC_2(VAR_2, "slot %d is already allocated to this node!\n",
       VAR_5);

 FUNC_6(VAR_6, VAR_5, VAR_3->node_num);
 VAR_3->slot_num = VAR_5;
 FUNC_10(&VAR_3->osb_lock);

 FUNC_2(0, "taking node slot %d\n", VAR_3->slot_num);

 VAR_4 = FUNC_7(VAR_3, VAR_6, VAR_3->slot_num);
 if (VAR_4 < 0)
  FUNC_4(VAR_4);

bail:
 FUNC_5(VAR_4);
 return VAR_4;
}
