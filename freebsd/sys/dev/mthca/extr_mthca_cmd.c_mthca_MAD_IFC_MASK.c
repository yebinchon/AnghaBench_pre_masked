
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mthca_mailbox {void const* buf; int dma; } ;
struct mthca_dev {int dummy; } ;
struct ib_wc {int src_qp; int sl; int dlid_path_bits; int wc_flags; int slid; int pkey_index; TYPE_1__* qp; } ;
typedef void ib_grh ;
struct TYPE_2__ {int qp_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct mthca_mailbox*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (void*,int,int ) ;
 int FUNC_2 (struct mthca_mailbox*) ;
 int FUNC_3 (void*,void const*,int) ;
 int FUNC_4 (void*,int ,int) ;
 struct mthca_mailbox* FUNC_5 (struct mthca_dev*,int ) ;
 int FUNC_6 (struct mthca_dev*,int ,int ,int,int,int ,int ) ;
 int FUNC_7 (struct mthca_dev*,struct mthca_mailbox*) ;

int FUNC_8(struct mthca_dev *VAR_11, int VAR_12, int VAR_13,
    int VAR_14, const struct ib_wc *VAR_15, const struct ib_grh *VAR_16,
    const void *VAR_17, void *VAR_18)
{
 struct mthca_mailbox *VAR_19, *VAR_20;
 void *VAR_21;
 int VAR_22;
 u32 VAR_23 = VAR_14;
 u8 VAR_24 = 0;
 VAR_19 = FUNC_5(VAR_11, VAR_2);
 if (FUNC_0(VAR_19))
  return FUNC_2(VAR_19);
 VAR_21 = VAR_19->buf;

 VAR_20 = FUNC_5(VAR_11, VAR_2);
 if (FUNC_0(VAR_20)) {
  FUNC_7(VAR_11, VAR_19);
  return FUNC_2(VAR_20);
 }

 FUNC_3(VAR_21, VAR_17, 256);





 if (VAR_12 || !VAR_15)
  VAR_24 |= 0x1;
 if (VAR_13 || !VAR_15)
  VAR_24 |= 0x2;

 if (VAR_15) {
  u8 VAR_25;

  FUNC_4(VAR_21 + 256, 0, 256);

  FUNC_1(VAR_21, VAR_15->qp->qp_num, 0x100);
  FUNC_1(VAR_21, VAR_15->src_qp, 0x108);

  VAR_25 = VAR_15->sl << 4;
  FUNC_1(VAR_21, VAR_25, 0x10c);

  VAR_25 = VAR_15->dlid_path_bits |
   (VAR_15->wc_flags & VAR_3 ? 0x80 : 0);
  FUNC_1(VAR_21, VAR_25, 0x10d);

  FUNC_1(VAR_21, VAR_15->slid, 0x10e);
  FUNC_1(VAR_21, VAR_15->pkey_index, 0x112);

  if (VAR_16)
   FUNC_3(VAR_21 + 0x140, VAR_16, 40);

  VAR_24 |= 0x4;

  VAR_23 |= VAR_15->slid << 16;
 }

 VAR_22 = FUNC_6(VAR_11, VAR_19->dma, VAR_20->dma,
       VAR_23, VAR_24,
       VAR_0, VAR_1);

 if (!VAR_22)
  FUNC_3(VAR_18, VAR_20->buf, 256);

 FUNC_7(VAR_11, VAR_19);
 FUNC_7(VAR_11, VAR_20);
 return VAR_22;
}
