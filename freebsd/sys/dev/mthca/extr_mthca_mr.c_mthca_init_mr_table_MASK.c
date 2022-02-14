
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mthca_mpt_entry {int dummy; } ;
struct TYPE_11__ {int max_order; } ;
struct TYPE_9__ {int * mpt_base; int * mtt_base; TYPE_4__ mtt_buddy; } ;
struct TYPE_10__ {int mpt_base; int mtt_base; int mpt_alloc; TYPE_4__ mtt_buddy; TYPE_2__ tavor_fmr; TYPE_4__* fmr_mtt_buddy; } ;
struct TYPE_8__ {int num_mpts; int fmr_reserved_mtts; int num_mtt_segs; int mtt_seg_size; int reserved_mtts; int reserved_mrws; } ;
struct mthca_dev {int mthca_flags; TYPE_3__ mr_table; TYPE_1__ limits; int pdev; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int ) ;
 int FUNC_5 (struct mthca_dev*,int,TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (TYPE_4__*,int) ;
 int FUNC_9 (struct mthca_dev*,char*) ;
 int FUNC_10 (struct mthca_dev*) ;
 int FUNC_11 (struct mthca_dev*,char*,...) ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (int ,int) ;

int FUNC_14(struct mthca_dev *VAR_5)
{
 phys_addr_t VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_9 = FUNC_4(&VAR_5->mr_table.mpt_alloc,
          VAR_5->limits.num_mpts,
          ~0, VAR_5->limits.reserved_mrws);
 if (VAR_9)
  return VAR_9;

 if (!FUNC_10(VAR_5) &&
     (VAR_5->mthca_flags & VAR_2))
  VAR_5->limits.fmr_reserved_mtts = 0;
 else
  VAR_5->mthca_flags |= VAR_3;

 if (VAR_5->mthca_flags & VAR_4)
  FUNC_9(VAR_5, "Memory key throughput optimization activated.\n");

 VAR_9 = FUNC_8(&VAR_5->mr_table.mtt_buddy,
          FUNC_0(VAR_5->limits.num_mtt_segs - 1));

 if (VAR_9)
  goto err_mtt_buddy;

 VAR_5->mr_table.tavor_fmr.mpt_base = ((void*)0);
 VAR_5->mr_table.tavor_fmr.mtt_base = ((void*)0);

 if (VAR_5->limits.fmr_reserved_mtts) {
  VAR_10 = FUNC_0(VAR_5->limits.fmr_reserved_mtts - 1);

  if (VAR_10 >= 31) {
   FUNC_11(VAR_5, "Unable to reserve 2^31 FMR MTTs.\n");
   VAR_9 = -VAR_0;
   goto err_fmr_mpt;
  }
  VAR_7 = VAR_8 = 1 << VAR_10;
 } else {
  VAR_8 = VAR_5->limits.num_mtt_segs;
  VAR_7 = VAR_5->limits.num_mpts;
 }

 if (!FUNC_10(VAR_5) &&
     (VAR_5->mthca_flags & VAR_3)) {

  VAR_6 = FUNC_13(VAR_5->pdev, 4) +
   ((FUNC_12(VAR_5->pdev, 4) - 1) &
    VAR_5->mr_table.mpt_base);

  VAR_5->mr_table.tavor_fmr.mpt_base =
   FUNC_1(VAR_6, VAR_7 * sizeof(struct mthca_mpt_entry));

  if (!VAR_5->mr_table.tavor_fmr.mpt_base) {
   FUNC_11(VAR_5, "MPT ioremap for FMR failed.\n");
   VAR_9 = -VAR_1;
   goto err_fmr_mpt;
  }

  VAR_6 = FUNC_13(VAR_5->pdev, 4) +
   ((FUNC_12(VAR_5->pdev, 4) - 1) &
    VAR_5->mr_table.mtt_base);

  VAR_5->mr_table.tavor_fmr.mtt_base =
   FUNC_1(VAR_6, VAR_8 * VAR_5->limits.mtt_seg_size);
  if (!VAR_5->mr_table.tavor_fmr.mtt_base) {
   FUNC_11(VAR_5, "MTT ioremap for FMR failed.\n");
   VAR_9 = -VAR_1;
   goto err_fmr_mtt;
  }
 }

 if (VAR_5->limits.fmr_reserved_mtts) {
  VAR_9 = FUNC_8(&VAR_5->mr_table.tavor_fmr.mtt_buddy, FUNC_0(VAR_8 - 1));
  if (VAR_9)
   goto err_fmr_mtt_buddy;


  VAR_9 = FUNC_6(&VAR_5->mr_table.mtt_buddy, FUNC_0(VAR_8 - 1));
  if (VAR_9)
   goto err_reserve_fmr;

  VAR_5->mr_table.fmr_mtt_buddy =
   &VAR_5->mr_table.tavor_fmr.mtt_buddy;
 } else
  VAR_5->mr_table.fmr_mtt_buddy = &VAR_5->mr_table.mtt_buddy;


 if (VAR_5->limits.reserved_mtts) {
  VAR_10 = FUNC_0(VAR_5->limits.reserved_mtts - 1);

  if (FUNC_5(VAR_5, VAR_10,
       VAR_5->mr_table.fmr_mtt_buddy) == -1) {
   FUNC_11(VAR_5, "MTT table of order %d is too small.\n",
      VAR_5->mr_table.fmr_mtt_buddy->max_order);
   VAR_9 = -VAR_1;
   goto err_reserve_mtts;
  }
 }

 return 0;

err_reserve_mtts:
err_reserve_fmr:
 if (VAR_5->limits.fmr_reserved_mtts)
  FUNC_7(&VAR_5->mr_table.tavor_fmr.mtt_buddy);

err_fmr_mtt_buddy:
 if (VAR_5->mr_table.tavor_fmr.mtt_base)
  FUNC_2(VAR_5->mr_table.tavor_fmr.mtt_base);

err_fmr_mtt:
 if (VAR_5->mr_table.tavor_fmr.mpt_base)
  FUNC_2(VAR_5->mr_table.tavor_fmr.mpt_base);

err_fmr_mpt:
 FUNC_7(&VAR_5->mr_table.mtt_buddy);

err_mtt_buddy:
 FUNC_3(&VAR_5->mr_table.mpt_alloc);

 return VAR_9;
}
