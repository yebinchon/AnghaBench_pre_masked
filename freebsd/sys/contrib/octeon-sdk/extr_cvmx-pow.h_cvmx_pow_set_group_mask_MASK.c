
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_5__ {void* grp_msk; } ;
struct TYPE_7__ {int u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_sso_ppx_grp_msk_t ;
struct TYPE_6__ {void* grp_msk; } ;
struct TYPE_8__ {int u64; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_pow_pp_grp_mskx_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(uint64_t VAR_1, uint64_t VAR_2)
{

    if (FUNC_4(VAR_0))
    {
        cvmx_sso_ppx_grp_msk_t VAR_3;
        VAR_3.s.grp_msk = VAR_2;
        FUNC_3(FUNC_1(VAR_1), VAR_3.u64);
    }
    else
    {
        cvmx_pow_pp_grp_mskx_t VAR_4;
        VAR_4.u64 = FUNC_2(FUNC_0(VAR_1));
        VAR_4.s.grp_msk = VAR_2;
        FUNC_3(FUNC_0(VAR_1), VAR_4.u64);
    }
}
