
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct al_pcie_port {scalar_t__ rev_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static void
FUNC_1(
 struct al_pcie_port *VAR_1,
 uint32_t *VAR_2,
 uint32_t VAR_3)
{
 uintptr_t VAR_4 =
  (VAR_1->rev_id == VAR_0) ? 0x4000 : 0x1000;

 FUNC_0((uint32_t *)((uintptr_t)VAR_2 | VAR_4), VAR_3);
}
