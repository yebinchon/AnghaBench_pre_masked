
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; int skip; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pip_bsel_ext_cfgx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(int VAR_1, int VAR_2, int VAR_3)
{
    cvmx_pip_bsel_ext_cfgx_t VAR_4;


    if (!FUNC_3(VAR_0))
        return;

    VAR_4.u64 = FUNC_1(FUNC_0(VAR_1));
    VAR_4.s.offset = VAR_2;
    VAR_4.s.skip = VAR_3;
    FUNC_2(FUNC_0(VAR_1), VAR_4.u64);
}
