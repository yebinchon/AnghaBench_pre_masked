
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int fixed_mask; int cpuports_mask; } ;
typedef TYPE_1__ e6000sw_softc_t ;



__attribute__((used)) static __inline bool
FUNC_0(e6000sw_softc_t *VAR_0, int VAR_1)
{
 uint32_t VAR_2;
 VAR_2 = ~(VAR_0->fixed_mask | VAR_0->cpuports_mask);

 return ((VAR_2 & (1 << VAR_1)) ? 1 : 0);
}
