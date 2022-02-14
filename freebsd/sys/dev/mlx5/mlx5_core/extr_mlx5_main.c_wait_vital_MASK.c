
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {scalar_t__ device; } ;
struct mlx5_core_health {int health_counter; } ;
struct TYPE_2__ {struct mlx5_core_health health; } ;
struct mlx5_core_dev {TYPE_1__ priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int,...) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int FUNC_3 (int) ;
 struct mlx5_core_dev* FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = FUNC_4(VAR_0);
 struct mlx5_core_health *VAR_2 = &VAR_1->priv.health;
 const int VAR_3 = 100;
 u32 VAR_4;
 u16 VAR_5;
 int VAR_6;


 FUNC_3(1000);
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (FUNC_5(VAR_0, 2, &VAR_5)) {
   FUNC_2(VAR_1, "failed reading config word\n");
   break;
  }
  if (VAR_5 == VAR_0->device) {
   FUNC_1(VAR_1,
       "device ID correctly read after %d iterations\n", VAR_6);
   break;
  }
  FUNC_3(50);
 }
 if (VAR_6 == VAR_3)
  FUNC_2(VAR_1, "could not read device ID\n");

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_4 = FUNC_0(VAR_2->health_counter);
  if (VAR_4 && VAR_4 != 0xffffffff) {
   FUNC_1(VAR_1,
   "Counter value 0x%x after %d iterations\n", VAR_4, VAR_6);
   break;
  }
  FUNC_3(50);
 }

 if (VAR_6 == VAR_3)
  FUNC_2(VAR_1, "could not read device ID\n");
}
