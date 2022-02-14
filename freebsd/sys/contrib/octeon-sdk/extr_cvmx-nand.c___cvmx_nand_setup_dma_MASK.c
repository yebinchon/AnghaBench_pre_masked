
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int en; int rw; int size; scalar_t__ adr; scalar_t__ clr; } ;
union cvmx_mio_ndf_dma_cfg {scalar_t__ u64; TYPE_1__ s; } ;
typedef scalar_t__ uint64_t ;
typedef int ULL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(int VAR_2, int VAR_3, uint64_t VAR_4, int VAR_5)
{
    union cvmx_mio_ndf_dma_cfg VAR_6;
    FUNC_0();
    FUNC_1("%d", VAR_2);
    FUNC_1("%d", VAR_3);
    FUNC_1("0x%llx", (ULL)VAR_4);
    FUNC_1("%d", VAR_5);
    VAR_6.u64 = 0;
    VAR_6.s.en = 1;
    VAR_6.s.rw = VAR_3;
    VAR_6.s.clr = 0;
    VAR_6.s.size = ((VAR_5 + 7) >> 3) - 1;
    VAR_6.s.adr = VAR_4;
    VAR_1;
    FUNC_3(VAR_0, VAR_6.u64);
    FUNC_2();
}
