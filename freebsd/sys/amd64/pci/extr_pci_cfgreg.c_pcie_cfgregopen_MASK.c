
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 () ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int,int ,int ,int) ;
 int FUNC_2 (int ,int,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (char*,int ) ;

int
FUNC_5(uint64_t VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
 uint32_t VAR_12, VAR_13;
 int VAR_14;

 if (!VAR_4)
  return (0);

 if (VAR_10 != 0)
  return (0);

 if (VAR_2)
  FUNC_4("PCIe: Memory Mapped configuration base @ 0x%lx\n",
      VAR_9);


 VAR_6 = (vm_offset_t)FUNC_3(VAR_9, (VAR_11 + 1) << 20);
 VAR_8 = VAR_10;
 VAR_7 = VAR_11;
 VAR_3 = VAR_0;







 if (FUNC_0() != 0) {
  for (VAR_14 = 0; VAR_14 <= VAR_1; VAR_14++) {
   VAR_12 = FUNC_2(0, VAR_14, 0, 0, 4);
   if (VAR_12 == 0xffffffff)
    continue;

   VAR_13 = FUNC_1(0, VAR_14, 0, 0, 4);
   if (VAR_13 != VAR_12)
    VAR_5 |= (1 << VAR_14);
  }
 }

 return (1);
}
