
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int u64; } ;
typedef TYPE_1__ cvmx_pip_prt_tagx_t ;
struct TYPE_6__ {int u64; } ;
typedef TYPE_2__ cvmx_pip_prt_cfgx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(uint64_t VAR_1,
                                        cvmx_pip_prt_cfgx_t VAR_2,
                                        cvmx_pip_prt_tagx_t VAR_3)
{

    if (FUNC_6(VAR_0))
    {
        int VAR_4, VAR_5, VAR_6;

        VAR_4 = FUNC_3(VAR_1);
        VAR_5 = FUNC_2(VAR_1);
 VAR_6 = FUNC_4(VAR_4, VAR_5);

 VAR_1 = VAR_6;
    }

    FUNC_5(FUNC_0(VAR_1), VAR_2.u64);
    FUNC_5(FUNC_1(VAR_1), VAR_3.u64);
}
