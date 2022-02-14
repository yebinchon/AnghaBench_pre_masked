
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int cvmx_bootmem_named_block_desc_t ;
typedef int ULL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_5(void)
{
    int VAR_6;
    int VAR_7 = 0;

    uint64_t VAR_8 = FUNC_0(VAR_8);
    int VAR_9 = FUNC_0(VAR_4);
    int VAR_10 = FUNC_0(VAR_3);
    uint64_t VAR_11 = VAR_8;





    if (FUNC_3(3))
        return;
    FUNC_4("List of currently allocated named bootmem blocks:\n");
    for (VAR_6 = 0; VAR_6 < VAR_9; VAR_6++)
    {
        uint64_t VAR_12 = FUNC_1(VAR_11, VAR_5);
        if (VAR_12)
        {
            char VAR_13[VAR_10];
            uint64_t VAR_14 = FUNC_1(VAR_11, VAR_0);
            FUNC_2(VAR_11, VAR_13, VAR_10);
            VAR_7++;
            FUNC_4("Name: %s, address: 0x%08llx, size: 0x%08llx, index: %d\n",
                   VAR_13, (ULL)VAR_14, (ULL)VAR_12, VAR_6);
        }
        VAR_11 += sizeof(cvmx_bootmem_named_block_desc_t);
    }
    if (!VAR_7)
    {
        FUNC_4("No named bootmem blocks exist.\n");
    }

}
