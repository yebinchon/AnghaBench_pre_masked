
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
typedef int cvmx_bootmem_named_block_desc_t ;
typedef int cvmx_bootmem_desc_t ;
typedef int ULL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (scalar_t__,scalar_t__,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int,int ,int,int ,int ) ;
 int FUNC_5 (char*,...) ;
 unsigned long FUNC_6 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

int64_t FUNC_7(uint64_t VAR_24, uint32_t VAR_25, cvmx_bootmem_desc_t *VAR_26)
{
    uint64_t VAR_27;
    int64_t VAR_28;
    int VAR_29;
    if (!VAR_26)
    {
        FUNC_5("ERROR: no memory for cvmx_bootmem descriptor provided\n");
        return 0;
    }

    if (VAR_24 > VAR_10)
    {
        VAR_24 = VAR_10;
        FUNC_5("ERROR: requested memory size too large, truncating to maximum size\n");
    }

    if (VAR_14)
        return 1;



    FUNC_3(FUNC_6(VAR_26));





    FUNC_0(VAR_17, 0);
    FUNC_0(VAR_15, 0);
    FUNC_0(VAR_16, 0);
    FUNC_0(VAR_18, VAR_0);
    FUNC_0(VAR_19, VAR_1);
    FUNC_0(VAR_11, 0);
    FUNC_0(VAR_12, 0);


    VAR_27 = (VAR_5 + VAR_25);

    if (VAR_24 <= VAR_6)
    {
        FUNC_2(VAR_27, VAR_24 - VAR_25, 0);
        goto frees_done;
    }

    FUNC_2(VAR_27, VAR_6 - VAR_25, 0);

    VAR_24 -= VAR_6;


    if (VAR_24 > VAR_8)
    {
        FUNC_2(VAR_7, VAR_8, 0);
        FUNC_2(VAR_9, VAR_24 - VAR_8, 0);
    }
    else
    {
        FUNC_2(VAR_7, VAR_24, 0);

    }
frees_done:


    FUNC_0(VAR_21, VAR_3);
    FUNC_0(VAR_22, VAR_4);
    FUNC_0(VAR_20, 0);


    VAR_28 = FUNC_4(VAR_4 * sizeof(cvmx_bootmem_named_block_desc_t),0, 0x10000000, 0 ,VAR_2);
    if (VAR_28 >= 0)
        FUNC_0(VAR_20, VAR_28);





    if (!VAR_28)
    {
        FUNC_5("FATAL ERROR: unable to allocate memory for bootmem descriptor!\n");
        return(0);
    }
    for (VAR_29=0; VAR_29<VAR_4; VAR_29++)
    {
        FUNC_1(VAR_28, VAR_13, 0);
        FUNC_1(VAR_28, VAR_23, 0);
        VAR_28 += sizeof(cvmx_bootmem_named_block_desc_t);
    }

    return(1);
}
