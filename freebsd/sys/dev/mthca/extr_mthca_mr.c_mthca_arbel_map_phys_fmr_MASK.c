
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct TYPE_13__ {TYPE_5__* mpt; int dma_handle; void** mtts; } ;
struct TYPE_14__ {TYPE_6__ arbel; } ;
struct TYPE_11__ {unsigned long long page_shift; } ;
struct TYPE_9__ {int rkey; int lkey; } ;
struct mthca_fmr {TYPE_7__ mem; TYPE_4__ attr; TYPE_2__ ibmr; int maps; } ;
struct TYPE_8__ {scalar_t__ num_mpts; } ;
struct mthca_dev {int mthca_flags; TYPE_3__* pdev; TYPE_1__ limits; } ;
struct ib_fmr {int device; } ;
struct TYPE_12__ {void* start; void* length; void* lkey; void* key; } ;
struct TYPE_10__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (int *,int ,int,int ) ;
 int FUNC_6 (struct mthca_fmr*,int*,int,int) ;
 struct mthca_dev* FUNC_7 (int ) ;
 struct mthca_fmr* FUNC_8 (struct ib_fmr*) ;
 int FUNC_9 () ;

int FUNC_10(struct ib_fmr *VAR_6, u64 *VAR_7,
        int VAR_8, u64 VAR_9)
{
 struct mthca_fmr *VAR_10 = FUNC_8(VAR_6);
 struct mthca_dev *VAR_11 = FUNC_7(VAR_6->device);
 u32 VAR_12;
 int VAR_13, VAR_14;

 VAR_14 = FUNC_6(VAR_10, VAR_7, VAR_8, VAR_9);
 if (VAR_14)
  return VAR_14;

 ++VAR_10->maps;

 VAR_12 = FUNC_1(VAR_10->ibmr.lkey);
 if (VAR_11->mthca_flags & VAR_1)
  VAR_12 += VAR_5;
 else
  VAR_12 += VAR_11->limits.num_mpts;
 VAR_10->ibmr.lkey = VAR_10->ibmr.rkey = FUNC_0(VAR_12);

 *(u8 *) VAR_10->mem.arbel.mpt = VAR_3;

 FUNC_9();

 FUNC_4(&VAR_11->pdev->dev, VAR_10->mem.arbel.dma_handle,
    VAR_8 * sizeof(u64), VAR_0);

 for (VAR_13 = 0; VAR_13 < VAR_8; ++VAR_13)
  VAR_10->mem.arbel.mtts[VAR_13] = FUNC_3(VAR_7[VAR_13] |
           VAR_4);

 FUNC_5(&VAR_11->pdev->dev, VAR_10->mem.arbel.dma_handle,
       VAR_8 * sizeof(u64), VAR_0);

 VAR_10->mem.arbel.mpt->key = FUNC_2(VAR_12);
 VAR_10->mem.arbel.mpt->lkey = FUNC_2(VAR_12);
 VAR_10->mem.arbel.mpt->length = FUNC_3(VAR_8 * (1ull << VAR_10->attr.page_shift));
 VAR_10->mem.arbel.mpt->start = FUNC_3(VAR_9);

 FUNC_9();

 *(u8 *) VAR_10->mem.arbel.mpt = VAR_2;

 FUNC_9();

 return 0;
}
