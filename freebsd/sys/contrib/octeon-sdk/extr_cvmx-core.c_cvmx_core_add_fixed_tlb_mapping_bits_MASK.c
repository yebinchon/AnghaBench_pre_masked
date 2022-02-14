
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int cvmx_tlb_pagemask_t ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (char*,unsigned long long) ;

int FUNC_2(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2, cvmx_tlb_pagemask_t VAR_3)
{

    if ((VAR_0 & (VAR_3 | 0x7ff))
        || ((VAR_1 & ~0x7ULL) & ((VAR_3 | 0x7ff) >> 1))
        || ((VAR_2 & ~0x7ULL) & ((VAR_3 | 0x7ff) >> 1)))
    {
        FUNC_1("Error adding tlb mapping: invalid address alignment at vaddr: 0x%llx\n", (unsigned long long)VAR_0);
        return(-1);
    }


    return(FUNC_0(VAR_0,
                                         (VAR_1 >> 6) | (VAR_1 & 0x7),
                                         (VAR_2 >> 6) | (VAR_2 & 0x7),
                                         VAR_3));

}
