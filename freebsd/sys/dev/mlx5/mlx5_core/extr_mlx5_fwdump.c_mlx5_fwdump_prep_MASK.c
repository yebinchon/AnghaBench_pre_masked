
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u32 ;
struct mlx5_crspace_regmap {int dummy; } ;
struct mlx5_core_dev {int vsc_addr; int dump_size; int dump_valid; int dump_copyout; int * dump_data; TYPE_3__* dump_rege; TYPE_2__* pdev; } ;
typedef int device_t ;
struct TYPE_7__ {scalar_t__ addr; int cnt; } ;
struct TYPE_5__ {int bsddev; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,scalar_t__*,int ) ;
 int FUNC_2 (int,scalar_t__*,int ,scalar_t__) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 void* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct mlx5_core_dev*) ;
 int FUNC_9 (struct mlx5_core_dev*) ;
 int FUNC_10 (struct mlx5_core_dev*,int ) ;
 int FUNC_11 (struct mlx5_core_dev*) ;
 int FUNC_12 (struct mlx5_core_dev*,int) ;
 scalar_t__ FUNC_13 (int ,scalar_t__,int) ;
 int FUNC_14 (int ,scalar_t__,scalar_t__,int) ;

void
FUNC_15(struct mlx5_core_dev *VAR_7)
{
 device_t VAR_8;
 int VAR_9, VAR_10;
 unsigned VAR_11, VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16;

 VAR_7->dump_data = ((void*)0);
 VAR_9 = FUNC_8(VAR_7);
 if (VAR_9 != 0) {

  FUNC_6(VAR_7,
      "Failed to find vendor-specific capability, error %d\n",
      VAR_9);
  return;
 }
 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9 != 0)
  return;
 VAR_9 = FUNC_10(VAR_7, VAR_2);
 if (VAR_9 != 0) {
  FUNC_6(VAR_7, "VSC scan space is not supported\n");
  goto unlock_vsc;
 }
 VAR_8 = VAR_7->pdev->dev.bsddev;
 VAR_10 = VAR_7->vsc_addr;
 if (VAR_10 == 0) {
  FUNC_6(VAR_7, "Cannot read VSC, no address\n");
  goto unlock_vsc;
 }

 VAR_14 = 0;
 for (VAR_12 = 1, VAR_13 = 0;;) {
  FUNC_2(VAR_10, &VAR_14, VAR_6, VAR_13);
  FUNC_14(VAR_8, VAR_10 + VAR_0, VAR_14, 4);
  VAR_9 = FUNC_12(VAR_7, 1);
  if (VAR_9 != 0) {
   FUNC_6(VAR_7,
      "Failed waiting for read complete flag, error %d addr %#x\n",
       VAR_9, VAR_13);
   goto unlock_vsc;
  }
  FUNC_13(VAR_8, VAR_10 + VAR_1, 4);
  VAR_15 = FUNC_13(VAR_8, VAR_10 + VAR_0, 4);
  VAR_16 = FUNC_1(VAR_10, &VAR_15, VAR_6);
  if (VAR_16 == 0 || VAR_16 == VAR_13)
   break;
  if (VAR_16 != VAR_13 + 4)
   VAR_12++;
  VAR_13 = VAR_16;
 }
 VAR_7->dump_rege = FUNC_5(VAR_12 * sizeof(struct mlx5_crspace_regmap),
     VAR_3, VAR_4 | VAR_5);

 for (VAR_11 = 0, VAR_13 = 0;;) {
  FUNC_3(VAR_11 < VAR_12);
  VAR_7->dump_rege[VAR_11].cnt++;
  FUNC_2(VAR_10, &VAR_14, VAR_6, VAR_13);
  FUNC_14(VAR_8, VAR_10 + VAR_0, VAR_14, 4);
  VAR_9 = FUNC_12(VAR_7, 1);
  if (VAR_9 != 0) {
   FUNC_6(VAR_7,
      "Failed waiting for read complete flag, error %d addr %#x\n",
       VAR_9, VAR_13);
   FUNC_4(VAR_7->dump_rege, VAR_3);
   VAR_7->dump_rege = ((void*)0);
   goto unlock_vsc;
  }
  FUNC_13(VAR_8, VAR_10 + VAR_1, 4);
  VAR_15 = FUNC_13(VAR_8, VAR_10 + VAR_0, 4);
  VAR_16 = FUNC_1(VAR_10, &VAR_15, VAR_6);
  if (VAR_16 == 0 || VAR_16 == VAR_13)
   break;
  if (VAR_16 != VAR_13 + 4)
   VAR_7->dump_rege[++VAR_11].addr = VAR_16;
  VAR_13 = VAR_16;
 }
 FUNC_0(VAR_11 + 1 == VAR_12,
     ("inconsistent hw crspace reads: sz %u i %u addr %#lx",
     VAR_12, VAR_11, (unsigned long)VAR_13));

 VAR_7->dump_size = FUNC_7(VAR_7->dump_rege);
 VAR_7->dump_data = FUNC_5(VAR_7->dump_size * sizeof(uint32_t),
     VAR_3, VAR_4 | VAR_5);
 VAR_7->dump_valid = 0;
 VAR_7->dump_copyout = 0;

unlock_vsc:
 FUNC_11(VAR_7);
}
