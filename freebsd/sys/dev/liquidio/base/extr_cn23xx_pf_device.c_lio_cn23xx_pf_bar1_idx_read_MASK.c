
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct octeon_device {int pcie_port; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct octeon_device*,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct octeon_device *VAR_0, uint32_t VAR_1)
{

 return ((uint32_t)FUNC_1(VAR_0,
    FUNC_0(VAR_0->pcie_port,
             VAR_1)));
}
