
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union ib_gid {int raw; } ;
typedef int u16 ;
struct mthca_mgm {int* qp; int next_gid_index; int gid; } ;
struct mthca_mailbox {struct mthca_mgm* buf; } ;
struct TYPE_4__ {int mutex; int alloc; } ;
struct TYPE_3__ {int num_mgms; } ;
struct mthca_dev {TYPE_2__ mcg_table; TYPE_1__ limits; } ;
struct ib_qp {int qp_num; int device; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mthca_mailbox*) ;
 int VAR_2 ;
 int FUNC_2 (struct mthca_mailbox*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mthca_dev*,int,struct mthca_mailbox*,int *,int*,int*) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct mthca_dev*,int,struct mthca_mailbox*) ;
 int FUNC_8 (struct mthca_dev*,int,struct mthca_mailbox*) ;
 struct mthca_mailbox* FUNC_9 (struct mthca_dev*,int ) ;
 int FUNC_10 (struct mthca_dev*,char*,int) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (struct mthca_dev*,struct mthca_mailbox*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 struct mthca_dev* FUNC_15 (int ) ;

int FUNC_16(struct ib_qp *VAR_3, union ib_gid *VAR_4, u16 VAR_5)
{
 struct mthca_dev *VAR_6 = FUNC_15(VAR_3->device);
 struct mthca_mailbox *VAR_7;
 struct mthca_mgm *VAR_8;
 u16 VAR_9;
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14;

 VAR_7 = FUNC_9(VAR_6, VAR_1);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);
 VAR_8 = VAR_7->buf;

 FUNC_13(&VAR_6->mcg_table.mutex);

 VAR_14 = FUNC_5(VAR_6, VAR_4->raw, VAR_7, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_14)
  goto out;

 if (VAR_11 == -1) {
  FUNC_10(VAR_6, "MGID %pI6 not found\n", VAR_4->raw);
  VAR_14 = -VAR_0;
  goto out;
 }

 for (VAR_13 = -1, VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  if (VAR_8->qp[VAR_12] == FUNC_4(VAR_3->qp_num | (1 << 31)))
   VAR_13 = VAR_12;
  if (!(VAR_8->qp[VAR_12] & FUNC_4(1 << 31)))
   break;
 }

 if (VAR_13 == -1) {
  FUNC_10(VAR_6, "QP %06x not found in MGM\n", VAR_3->qp_num);
  VAR_14 = -VAR_0;
  goto out;
 }

 VAR_8->qp[VAR_13] = VAR_8->qp[VAR_12 - 1];
 VAR_8->qp[VAR_12 - 1] = 0;

 VAR_14 = FUNC_8(VAR_6, VAR_11, VAR_7);
 if (VAR_14) {
  FUNC_10(VAR_6, "WRITE_MGM returned %d\n", VAR_14);
  goto out;
 }

 if (VAR_12 != 1)
  goto out;

 if (VAR_10 == -1) {

  int VAR_15 = FUNC_3(VAR_8->next_gid_index) >> 6;
  if (VAR_15) {
   VAR_14 = FUNC_7(VAR_6, VAR_15,
          VAR_7);
   if (VAR_14) {
    FUNC_10(VAR_6, "READ_MGM returned %d\n", VAR_14);
    goto out;
   }
  } else
   FUNC_6(VAR_8->gid, 0, 16);

  VAR_14 = FUNC_8(VAR_6, VAR_11, VAR_7);
  if (VAR_14) {
   FUNC_10(VAR_6, "WRITE_MGM returned %d\n", VAR_14);
   goto out;
  }
  if (VAR_15) {
   FUNC_0(VAR_15 < VAR_6->limits.num_mgms);
   FUNC_11(&VAR_6->mcg_table.alloc, VAR_15);
  }
 } else {

  int VAR_16 = FUNC_3(VAR_8->next_gid_index) >> 6;
  VAR_14 = FUNC_7(VAR_6, VAR_10, VAR_7);
  if (VAR_14) {
   FUNC_10(VAR_6, "READ_MGM returned %d\n", VAR_14);
   goto out;
  }

  VAR_8->next_gid_index = FUNC_4(VAR_16 << 6);

  VAR_14 = FUNC_8(VAR_6, VAR_10, VAR_7);
  if (VAR_14) {
   FUNC_10(VAR_6, "WRITE_MGM returned %d\n", VAR_14);
   goto out;
  }
  FUNC_0(VAR_11 < VAR_6->limits.num_mgms);
  FUNC_11(&VAR_6->mcg_table.alloc, VAR_11);
 }

 out:
 FUNC_14(&VAR_6->mcg_table.mutex);

 FUNC_12(VAR_6, VAR_7);
 return VAR_14;
}
