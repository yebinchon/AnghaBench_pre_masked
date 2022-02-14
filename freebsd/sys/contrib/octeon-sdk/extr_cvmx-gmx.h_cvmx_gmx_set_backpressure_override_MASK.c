
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int en; int ign_full; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_gmxx_tx_ovr_bp_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(uint32_t VAR_0, uint32_t VAR_1)
{
    cvmx_gmxx_tx_ovr_bp_t VAR_2;

    if (VAR_1 & ~0xf || VAR_0 & ~0x1)
        return(-1);
    VAR_2.u64 = 0;
    VAR_2.s.en = VAR_1;
    VAR_2.s.ign_full = VAR_1;
    FUNC_1(FUNC_0(VAR_0), VAR_2.u64);
    return(0);

}
