
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_dev {TYPE_1__* persist; } ;
typedef enum pcie_link_width { ____Placeholder_pcie_link_width } pcie_link_width ;
typedef enum pci_bus_speed { ____Placeholder_pci_bus_speed } pci_bus_speed ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct mlx4_dev *VAR_15,
           enum pci_bus_speed *VAR_16,
           enum pcie_link_width *VAR_17)
{
 u32 VAR_18, VAR_19;
 int VAR_20, VAR_21;



 *VAR_16 = VAR_14;
 *VAR_17 = VAR_1;

 VAR_20 = FUNC_0(VAR_15->persist->pdev, VAR_6,
       &VAR_18);
 VAR_21 = FUNC_0(VAR_15->persist->pdev, VAR_7,
       &VAR_19);
 if (!VAR_21 && VAR_19) {
  if (VAR_19 & VAR_10)
   *VAR_16 = VAR_5;
  else if (VAR_19 & VAR_9)
   *VAR_16 = VAR_4;
  else if (VAR_19 & VAR_8)
   *VAR_16 = VAR_3;
 }
 if (!VAR_20) {
  *VAR_17 = (VAR_18 & VAR_11) >> 4;
  if (!VAR_19) {
   if (VAR_18 & VAR_13)
    *VAR_16 = VAR_4;
   else if (VAR_18 & VAR_12)
    *VAR_16 = VAR_3;
  }
 }

 if (*VAR_16 == VAR_14 || *VAR_17 == VAR_1) {
  return VAR_20 ? VAR_20 :
   VAR_21 ? VAR_21 : -VAR_0;
 }
 return 0;
}
