
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ULL ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(void)
{
    uint64_t VAR_4;

    VAR_4 = FUNC_0(VAR_1);
    FUNC_3("\n\n\nPrinting bootmem block list, descriptor: 0x%llx,  head is 0x%llx\n",
           (ULL)VAR_0, (ULL)VAR_4);
    FUNC_3("Descriptor version: %d.%d\n",
        (int)FUNC_0(VAR_2),
        (int)FUNC_0(VAR_3));
    if (FUNC_0(VAR_2) > 3)
    {
        FUNC_3("Warning: Bootmem descriptor version is newer than expected\n");
    }
    if (!VAR_4)
    {
        FUNC_3("mem list is empty!\n");
    }
    while (VAR_4)
    {
        FUNC_3("Block address: 0x%08llx, size: 0x%08llx, next: 0x%08llx\n",
               (ULL)VAR_4,
               (ULL)FUNC_2(VAR_4),
               (ULL)FUNC_1(VAR_4));
        VAR_4 = FUNC_1(VAR_4);
    }
    FUNC_3("\n\n");

}
