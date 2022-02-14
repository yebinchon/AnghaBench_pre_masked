
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_super {scalar_t__* slot_recovery_generations; TYPE_3__* sb; } ;
struct TYPE_6__ {int ij_flags; } ;
struct TYPE_7__ {TYPE_1__ journal1; } ;
struct ocfs2_dinode {int i_check; TYPE_2__ id1; int i_clusters; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int journal_t ;
struct TYPE_9__ {void* ip_clusters; } ;
struct TYPE_8__ {int s_dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_4 (struct inode*) ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 void* FUNC_15 (int ) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct ocfs2_dinode*) ;
 int FUNC_20 (TYPE_3__*,int *,int) ;
 int FUNC_21 (TYPE_3__*,scalar_t__,int *) ;
 int FUNC_22 (struct inode*) ;
 scalar_t__ FUNC_23 (struct ocfs2_dinode*) ;
 int FUNC_24 (struct inode*,struct buffer_head**,int,int ) ;
 int FUNC_25 (struct inode*,int) ;
 int FUNC_26 (struct ocfs2_super*,int,struct buffer_head**,struct inode**) ;
 int FUNC_27 (struct ocfs2_super*,int ) ;
 int FUNC_28 (struct ocfs2_super*,struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_29(struct ocfs2_super *VAR_8,
    int VAR_9,
    int VAR_10)
{
 int VAR_11;
 int VAR_12 = 0;
 unsigned int VAR_13;
 struct inode *VAR_14 = ((void*)0);
 struct ocfs2_dinode *VAR_15;
 journal_t *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17 = ((void*)0);
 u32 VAR_18;

 VAR_11 = FUNC_26(VAR_8, VAR_10, &VAR_17, &VAR_14);
 if (VAR_11) {
  FUNC_17(VAR_11);
  goto done;
 }

 VAR_15 = (struct ocfs2_dinode *)VAR_17->b_data;
 VAR_18 = FUNC_23(VAR_15);
 FUNC_5(VAR_17);
 VAR_17 = ((void*)0);
 if (VAR_8->slot_recovery_generations[VAR_10] != VAR_18) {
  FUNC_16(0, "Slot %u already recovered (old/new=%u/%u)\n", VAR_10,
       VAR_8->slot_recovery_generations[VAR_10], VAR_18);
  VAR_8->slot_recovery_generations[VAR_10] = VAR_18;
  VAR_11 = -VAR_0;
  goto done;
 }



 VAR_11 = FUNC_24(VAR_14, &VAR_17, 1, VAR_6);
 if (VAR_11 < 0) {
  FUNC_16(0, "status returned from ocfs2_inode_lock=%d\n", VAR_11);
  if (VAR_11 != -VAR_2)
   FUNC_16(VAR_3, "Could not lock journal!\n");
  goto done;
 }
 VAR_12 = 1;

 VAR_15 = (struct ocfs2_dinode *) VAR_17->b_data;

 VAR_13 = FUNC_15(VAR_15->id1.journal1.ij_flags);
 VAR_18 = FUNC_23(VAR_15);

 if (!(VAR_13 & VAR_5)) {
  FUNC_16(0, "No recovery required for node %d\n", VAR_9);

  VAR_8->slot_recovery_generations[VAR_10] = VAR_18;
  goto done;
 }


 FUNC_27(VAR_8, VAR_7);

 FUNC_16(VAR_4, "Recovering node %d from slot %d on device (%u,%u)\n",
      VAR_9, VAR_10,
      FUNC_2(VAR_8->sb->s_dev), FUNC_3(VAR_8->sb->s_dev));

 FUNC_4(VAR_14)->ip_clusters = FUNC_15(VAR_15->i_clusters);

 VAR_11 = FUNC_22(VAR_14);
 if (VAR_11 < 0) {
  FUNC_17(VAR_11);
  goto done;
 }

 FUNC_16(0, "calling journal_init_inode\n");
 VAR_16 = FUNC_11(VAR_14);
 if (VAR_16 == ((void*)0)) {
  FUNC_16(VAR_3, "Linux journal layer error\n");
  VAR_11 = -VAR_1;
  goto done;
 }

 VAR_11 = FUNC_12(VAR_16);
 if (VAR_11 < 0) {
  FUNC_17(VAR_11);
  if (!FUNC_7(VAR_14))
   FUNC_0();
  FUNC_9(VAR_16);
  goto done;
 }

 FUNC_20(VAR_8->sb, VAR_16, VAR_10);


 FUNC_16(0, "flushing the journal.\n");
 FUNC_13(VAR_16);
 VAR_11 = FUNC_10(VAR_16);
 FUNC_14(VAR_16);
 if (VAR_11 < 0)
  FUNC_17(VAR_11);


 VAR_13 = FUNC_15(VAR_15->id1.journal1.ij_flags);
 VAR_13 &= ~VAR_5;
 VAR_15->id1.journal1.ij_flags = FUNC_6(VAR_13);


 FUNC_19(VAR_15);
 VAR_8->slot_recovery_generations[VAR_10] =
     FUNC_23(VAR_15);

 FUNC_21(VAR_8->sb, VAR_17->b_data, &VAR_15->i_check);
 VAR_11 = FUNC_28(VAR_8, VAR_17, FUNC_1(VAR_14));
 if (VAR_11 < 0)
  FUNC_17(VAR_11);

 if (!FUNC_7(VAR_14))
  FUNC_0();

 FUNC_9(VAR_16);

done:

 if (VAR_12)
  FUNC_25(VAR_14, 1);

 if (VAR_14)
  FUNC_8(VAR_14);

 FUNC_5(VAR_17);

 FUNC_18(VAR_11);
 return VAR_11;
}
