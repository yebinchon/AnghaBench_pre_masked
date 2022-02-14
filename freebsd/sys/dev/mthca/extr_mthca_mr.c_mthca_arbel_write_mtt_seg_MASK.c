
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mthca_mtt {scalar_t__ first_seg; } ;
struct TYPE_5__ {int mtt_seg_size; } ;
struct TYPE_4__ {int mtt_table; } ;
struct mthca_dev {TYPE_3__* pdev; TYPE_2__ limits; TYPE_1__ mr_table; } ;
typedef int dma_addr_t ;
typedef int __be64 ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int * FUNC_4 (int ,scalar_t__,int *) ;

__attribute__((used)) static void FUNC_5(struct mthca_dev *VAR_3,
          struct mthca_mtt *VAR_4, int VAR_5,
          u64 *VAR_6, int VAR_7)
{
 __be64 *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10;
 int VAR_11 = VAR_5 * sizeof (u64);


 FUNC_0(VAR_11 / VAR_2 != (VAR_11 + VAR_7 * sizeof(u64) - 1) / VAR_2);

 FUNC_0(VAR_11 % VAR_3->limits.mtt_seg_size);

 VAR_8 = FUNC_4(VAR_3->mr_table.mtt_table, VAR_4->first_seg +
    VAR_11 / VAR_3->limits.mtt_seg_size, &VAR_9);

 FUNC_0(!VAR_8);

 FUNC_2(&VAR_3->pdev->dev, VAR_9,
    VAR_7 * sizeof (u64), VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_7; ++VAR_10)
  VAR_8[VAR_10] = FUNC_1(VAR_6[VAR_10] | VAR_1);

 FUNC_3(&VAR_3->pdev->dev, VAR_9,
       VAR_7 * sizeof (u64), VAR_0);
}
