
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_paddr_t ;
typedef size_t uint8_t ;
typedef int uint64_t ;
typedef int uint16_t ;
struct vtdmap {int ext_cap; } ;
struct domain {int addrwidth; int id; int ptp; } ;


 size_t FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int** VAR_2 ;
 int FUNC_3 (char*,int ,...) ;
 struct vtdmap* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(void *VAR_3, uint16_t VAR_4)
{
 int VAR_5;
 uint64_t *VAR_6;
 struct domain *VAR_7 = VAR_3;
 vm_paddr_t VAR_8;
 struct vtdmap *VAR_9;
 uint8_t VAR_10;

 VAR_10 = FUNC_0(VAR_4);
 VAR_6 = VAR_2[VAR_10];
 VAR_8 = FUNC_5(VAR_7->ptp);
 VAR_5 = FUNC_2(VAR_4);

 if (VAR_6[VAR_5] & VAR_0) {
  FUNC_3("vtd_add_device: device %x is already owned by "
        "domain %d", VAR_4,
        (uint16_t)(VAR_6[VAR_5 + 1] >> 8));
 }

 if ((VAR_9 = FUNC_4(VAR_4)) == ((void*)0))
  FUNC_3("vtd_add_device: device %x is not in scope for "
        "any DMA remapping unit", VAR_4);





 VAR_6[VAR_5 + 1] = VAR_7->addrwidth | (VAR_7->id << 8);

 if (FUNC_1(VAR_9->ext_cap))
  VAR_6[VAR_5] = VAR_1;
 else
  VAR_6[VAR_5] = 0;

 VAR_6[VAR_5] |= VAR_8 | VAR_0;





}
