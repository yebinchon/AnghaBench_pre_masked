
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {struct device* dma_device; } ;
struct mlx5_ib_dev {TYPE_1__ ib_dev; } ;
struct ib_umem {int dummy; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;
typedef int __be64 ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (struct mlx5_ib_dev*,struct ib_umem*,int,int *,int ) ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_dev *VAR_6, struct ib_umem *VAR_7,
     int VAR_8, int VAR_9, int *VAR_10,
     __be64 **VAR_11, dma_addr_t *VAR_12)
{
 __be64 *VAR_13;
 struct device *VAR_14 = VAR_6->ib_dev.dma_device;






 *VAR_10 = FUNC_0(sizeof(u64) * VAR_8, VAR_5);
 *VAR_11 = FUNC_5(*VAR_10 + VAR_4 - 1, VAR_2);
 if (!(*VAR_11))
  return -VAR_1;

 VAR_13 = FUNC_1(*VAR_11, VAR_4);
 FUNC_7(VAR_6, VAR_7, VAR_9, VAR_13, VAR_3);

 FUNC_6(VAR_13 + VAR_8, 0, *VAR_10 - VAR_8 * sizeof(u64));

 *VAR_12 = FUNC_2(VAR_14, VAR_13, *VAR_10, VAR_0);
 if (FUNC_3(VAR_14, *VAR_12)) {
  FUNC_4(*VAR_11);
  return -VAR_1;
 }

 return 0;
}
