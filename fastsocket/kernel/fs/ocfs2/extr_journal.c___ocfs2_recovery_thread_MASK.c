
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int max_slots; int slot_num; int recovery_lock; int recovery_event; int * recovery_thread_task; int journal; int osb_lock; TYPE_1__* sb; struct ocfs2_recovery_map* recovery_map; } ;
struct ocfs2_recovery_map {int* rm_entries; scalar_t__ rm_used; } ;
struct ocfs2_quota_recovery {int dummy; } ;
struct TYPE_2__ {int s_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ocfs2_quota_recovery*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct ocfs2_quota_recovery*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int*) ;
 int* FUNC_6 (int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 struct ocfs2_quota_recovery* FUNC_14 (struct ocfs2_super*,int) ;
 int FUNC_15 (struct ocfs2_super*) ;
 int FUNC_16 (struct ocfs2_super*) ;
 int FUNC_17 (struct ocfs2_super*) ;
 int FUNC_18 (struct ocfs2_super*,int) ;
 int FUNC_19 (int ,int,int *,int *,struct ocfs2_quota_recovery*) ;
 int FUNC_20 (struct ocfs2_super*) ;
 int FUNC_21 (struct ocfs2_super*,int,int) ;
 int FUNC_22 (struct ocfs2_super*) ;
 int FUNC_23 (struct ocfs2_super*,int) ;
 int FUNC_24 (struct ocfs2_super*,int) ;
 int FUNC_25 (struct ocfs2_super*,int) ;
 int FUNC_26 (struct ocfs2_super*) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int *) ;

__attribute__((used)) static int FUNC_30(void *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct ocfs2_super *VAR_9 = VAR_5;
 struct ocfs2_recovery_map *VAR_10 = VAR_9->recovery_map;
 int *VAR_11 = ((void*)0);
 int VAR_12 = 0, VAR_13;
 struct ocfs2_quota_recovery *VAR_14;

 FUNC_9();

 VAR_6 = FUNC_26(VAR_9);
 if (VAR_6 < 0) {
  goto bail;
 }

 VAR_11 = FUNC_6(VAR_9->max_slots * sizeof(int), VAR_3);
 if (!VAR_11) {
  VAR_6 = -VAR_1;
  goto bail;
 }
restart:
 VAR_6 = FUNC_24(VAR_9, 1);
 if (VAR_6 < 0) {
  FUNC_10(VAR_6);
  goto bail;
 }

 VAR_6 = FUNC_16(VAR_9);
 if (VAR_6 < 0)
  FUNC_10(VAR_6);


 FUNC_19(VAR_9->journal, VAR_9->slot_num, ((void*)0),
     ((void*)0), ((void*)0));

 FUNC_27(&VAR_9->osb_lock);
 while (VAR_10->rm_used) {


  VAR_7 = VAR_10->rm_entries[0];
  FUNC_28(&VAR_9->osb_lock);
  FUNC_8(0, "checking node %d\n", VAR_7);
  VAR_8 = FUNC_18(VAR_9, VAR_7);
  if (VAR_8 == -VAR_0) {
   VAR_6 = 0;
   FUNC_8(0, "no slot for this node, so no recovery"
        "required.\n");
   goto skip_recovery;
  }
  FUNC_8(0, "node %d was using slot %d\n", VAR_7, VAR_8);







  for (VAR_13 = 0; VAR_13 < VAR_12 && VAR_11[VAR_13] != VAR_8; VAR_13++);
  if (VAR_13 == VAR_12)
   VAR_11[VAR_12++] = VAR_8;

  VAR_6 = FUNC_21(VAR_9, VAR_7, VAR_8);
skip_recovery:
  if (!VAR_6) {
   FUNC_23(VAR_9, VAR_7);
  } else {
   FUNC_8(VAR_4,
        "Error %d recovering node %d on device (%u,%u)!\n",
        VAR_6, VAR_7,
        FUNC_1(VAR_9->sb->s_dev), FUNC_2(VAR_9->sb->s_dev));
   FUNC_8(VAR_4, "Volume requires unmount.\n");
  }

  FUNC_27(&VAR_9->osb_lock);
 }
 FUNC_28(&VAR_9->osb_lock);
 FUNC_8(0, "All nodes recovered\n");


 VAR_6 = FUNC_15(VAR_9);
 VAR_6 = (VAR_6 == -VAR_2) ? 0 : VAR_6;
 if (VAR_6 < 0)
  FUNC_10(VAR_6);




 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  VAR_14 = FUNC_14(VAR_9, VAR_11[VAR_13]);
  if (FUNC_0(VAR_14)) {
   VAR_6 = FUNC_3(VAR_14);
   FUNC_10(VAR_6);
   continue;
  }
  FUNC_19(VAR_9->journal, VAR_11[VAR_13],
      ((void*)0), ((void*)0), VAR_14);
 }

 FUNC_25(VAR_9, 1);


 FUNC_20(VAR_9);

bail:
 FUNC_12(&VAR_9->recovery_lock);
 if (!VAR_6 && !FUNC_22(VAR_9)) {
  FUNC_13(&VAR_9->recovery_lock);
  goto restart;
 }

 FUNC_17(VAR_9);
 VAR_9->recovery_thread_task = ((void*)0);
 FUNC_7();
 FUNC_29(&VAR_9->recovery_event);

 FUNC_13(&VAR_9->recovery_lock);

 if (VAR_11)
  FUNC_5(VAR_11);

 FUNC_11(VAR_6);



 FUNC_4(((void*)0), VAR_6);
 return VAR_6;
}
