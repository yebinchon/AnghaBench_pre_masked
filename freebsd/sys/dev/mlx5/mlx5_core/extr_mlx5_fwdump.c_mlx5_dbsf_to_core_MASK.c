
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mlx5_tool_addr {int func; int slot; int bus; int domain; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int * device_t ;
struct TYPE_2__ {scalar_t__ bsdclass; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 struct pci_dev* FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;
 int * FUNC_2 (int ,int ,int ,int ) ;
 struct mlx5_core_dev* FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int
FUNC_4(const struct mlx5_tool_addr *VAR_3,
    struct mlx5_core_dev **VAR_4)
{
 device_t VAR_5;
 struct pci_dev *VAR_6;

 VAR_5 = FUNC_2(VAR_3->domain, VAR_3->bus, VAR_3->slot,
     VAR_3->func);
 if (VAR_5 == ((void*)0))
  return (VAR_1);
 if (FUNC_0(VAR_5) != VAR_2.bsdclass)
  return (VAR_0);
 VAR_6 = FUNC_1(VAR_5);
 *VAR_4 = FUNC_3(VAR_6);
 if (*VAR_4 == ((void*)0))
  return (VAR_1);
 return (0);
}
