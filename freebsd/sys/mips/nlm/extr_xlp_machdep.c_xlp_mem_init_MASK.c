
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_paddr_t ;
typedef int uint64_t ;
typedef int intmax_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 void** VAR_2 ;
 int FUNC_4 (void**,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 void** VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (char*,...) ;
 int VAR_5 ;
 void* FUNC_8 (void*) ;
 void** VAR_6 ;

__attribute__((used)) static void
FUNC_9(void)
{
 vm_paddr_t VAR_7, VAR_8;
 uint64_t VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;


 VAR_8 = (vm_paddr_t)FUNC_2(&VAR_1);
 VAR_8 = FUNC_8(VAR_8) + 0x20000;
 VAR_6[1] = VAR_8;

 FUNC_7("Memory (from DRAM BARs):\n");
 VAR_9 = FUNC_5(0);
 VAR_7 = 0;
        for (VAR_13 = 0, VAR_14 = 0; VAR_13 < 8; VAR_13++) {
  VAR_12 = FUNC_6(VAR_9, FUNC_0(VAR_13));
                VAR_12 = (VAR_12 >> 12) & 0xfffff;
  VAR_10 = VAR_12 << 20;
  VAR_12 = FUNC_6(VAR_9, FUNC_1(VAR_13));
                VAR_12 = (VAR_12 >> 12) & 0xfffff;
  if (VAR_12 == 0)
   continue;
                VAR_11 = (VAR_12 + 1) << 20;
  FUNC_7("  BAR %d: %#jx - %#jx : ", VAR_13, (intmax_t)VAR_10,
      (intmax_t)VAR_11);

  if (VAR_11 <= VAR_10) {
   FUNC_7("\tskipped - malformed %#jx -> %#jx\n",
       (intmax_t)VAR_10, (intmax_t)VAR_11);
   continue;
  } else if (VAR_10 >= VAR_0) {
   FUNC_7(" skipped - outside usable limit %#jx.\n",
       (intmax_t)VAR_0);
   continue;
  } else if (VAR_11 >= VAR_0) {
   VAR_11 = VAR_0;
   FUNC_7(" truncated to %#jx.\n", (intmax_t)VAR_0);
  } else
   FUNC_7(" usable\n");


  VAR_16 = FUNC_4(&VAR_3[VAR_14], VAR_10, VAR_11);
  for (VAR_15 = VAR_14; VAR_15 < VAR_14 + VAR_16; VAR_15 += 2) {
   VAR_7 += VAR_3[VAR_15 + 1] - VAR_3[VAR_15];
   FUNC_7("\tMem[%d]: %#jx - %#jx\n", VAR_15/2,
       (intmax_t)VAR_3[VAR_15], (intmax_t)VAR_3[VAR_15+1]);
  }
  VAR_14 = VAR_15;
        }


 VAR_3[VAR_14] = VAR_3[VAR_14 + 1] = 0;


 for (VAR_13 = 0; VAR_13 <= VAR_14 + 1; VAR_13++)
  VAR_2[VAR_13] = VAR_3[VAR_13];

 VAR_5 = VAR_4 = FUNC_3(VAR_7);
}
