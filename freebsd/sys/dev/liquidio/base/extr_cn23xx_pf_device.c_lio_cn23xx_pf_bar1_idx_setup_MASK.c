
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct octeon_device {int pcie_port; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 void* FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (struct octeon_device*,int volatile,int ) ;

__attribute__((used)) static void
FUNC_3(struct octeon_device *VAR_1, uint64_t VAR_2,
        uint32_t VAR_3, int VAR_4)
{
 volatile uint64_t VAR_5;
 uint64_t VAR_6;

 if (!VAR_4) {
  VAR_6 = FUNC_1(VAR_1,
    FUNC_0(VAR_1->pcie_port,
             VAR_3));
  VAR_5 = VAR_6;
  FUNC_2(VAR_1, (VAR_5 & 0xFFFFFFFEULL),
          FUNC_0(VAR_1->pcie_port,
            VAR_3));
  VAR_6 = FUNC_1(VAR_1,
    FUNC_0(VAR_1->pcie_port,
             VAR_3));
  VAR_5 = VAR_6;
  return;
 }




 FUNC_2(VAR_1, (((VAR_2 >> 22) << 4) | VAR_0),
         FUNC_0(VAR_1->pcie_port, VAR_3));

 VAR_5 = FUNC_1(VAR_1, FUNC_0(VAR_1->pcie_port,
        VAR_3));
}
