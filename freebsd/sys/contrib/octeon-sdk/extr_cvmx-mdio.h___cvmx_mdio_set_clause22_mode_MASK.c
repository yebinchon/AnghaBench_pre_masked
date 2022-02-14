
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_smix_clk_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(int VAR_0)
{
    cvmx_smix_clk_t VAR_1;

    VAR_1.u64 = FUNC_1(FUNC_0(VAR_0));
    VAR_1.s.mode = 0;
    FUNC_2(FUNC_0(VAR_0), VAR_1.u64);
}
