
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int multicoredebug; int debug; } ;
struct TYPE_5__ {TYPE_1__ cop0; } ;
typedef TYPE_2__ cvmx_debug_core_context_t ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static inline void FUNC_1(volatile cvmx_debug_core_context_t *VAR_1)
{
    if (!VAR_0)
        return;
    if (VAR_1->cop0.multicoredebug & 1)
        FUNC_0("MCD0 was pulsed\n");
    if (VAR_1->cop0.multicoredebug & (1 << 16))
        FUNC_0("Exception %lld in Debug Mode\n", (long long)((VAR_1->cop0.debug >> 10) & 0x1f));
    if (VAR_1->cop0.debug & (1 << 19))
        FUNC_0("DDBSImpr\n");
    if (VAR_1->cop0.debug & (1 << 18))
        FUNC_0("DDBLImpr\n");
    if (VAR_1->cop0.debug & (1 << 5))
        FUNC_0("DINT\n");
    if (VAR_1->cop0.debug & (1 << 4))
        FUNC_0("Debug Instruction Breakpoint (DIB) exception\n");
    if (VAR_1->cop0.debug & (1 << 3))
        FUNC_0("Debug Date Break Store (DDBS) exception\n");
    if (VAR_1->cop0.debug & (1 << 2))
        FUNC_0("Debug Date Break Load (DDBL) exception\n");
    if (VAR_1->cop0.debug & (1 << 1))
        FUNC_0("Debug Breakpoint (DBp) exception\n");
    if (VAR_1->cop0.debug & (1 << 0))
        FUNC_0("Debug Single Step (DSS) exception\n");
}
