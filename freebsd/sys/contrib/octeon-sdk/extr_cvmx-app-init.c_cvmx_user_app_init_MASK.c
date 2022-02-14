
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ board_type; int bootloader_config_flags; int system_dram_size; int core_mask; int phy_mem_desc_addr; } ;
typedef TYPE_1__ cvmx_sysinfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int,int,int ) ;
 int FUNC_6 (int,int,int,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ) ;
 TYPE_1__* FUNC_10 () ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (char*,...) ;

int FUNC_14(void)
{
    uint64_t VAR_14;
    uint64_t VAR_15;
    int VAR_16 = 0;
    uint64_t VAR_17;
    uint64_t VAR_18;



    if (FUNC_10()->board_type != VAR_0)
        FUNC_11("CVMX    ");


    FUNC_0(VAR_14);
    VAR_15 = (0x3fULL<<32);
    VAR_14 &= VAR_15;
    if (VAR_14)
    {
        FUNC_13("BIST FAILURE: COP0_CACHE_ERR: 0x%llx\n", (unsigned long long)VAR_14);
        VAR_16++;
    }

    VAR_15 = 0xfc00000000000000ull;
    FUNC_1(VAR_14);
    VAR_14 &= VAR_15;
    if (VAR_14)
    {
        FUNC_13("BIST FAILURE: COP0_CVM_MEM_CTL: 0x%llx\n", (unsigned long long)VAR_14);
        VAR_16++;
    }


    FUNC_1(VAR_17);
    VAR_17 &= ~0x1ffull;
    VAR_17 |= 0x104ull;

    if (FUNC_3(VAR_8))
    {
        VAR_17 &= ~(0xfull << 11);
        VAR_17 |= 4 << 11;
    }
    FUNC_2(VAR_17);

    if (FUNC_3(VAR_9))
    {


        uint64_t VAR_19;
        unsigned VAR_20;
        FUNC_1(VAR_17);
        VAR_20 = VAR_17 & 0x3f;
        for (VAR_19 = 0; VAR_19 < VAR_2 * VAR_20; VAR_19 += 8)
            FUNC_9(VAR_19, 0);
    }
    cvmx_sysinfo_t *VAR_21 = FUNC_10();
    FUNC_4(VAR_21->phy_mem_desc_addr);


    if (FUNC_7(FUNC_10()->core_mask))
        FUNC_8();

    return(0);
}
