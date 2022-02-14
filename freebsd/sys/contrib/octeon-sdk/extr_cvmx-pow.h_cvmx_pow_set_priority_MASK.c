
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int qos0_pri; int qos1_pri; int qos2_pri; int qos3_pri; int qos4_pri; int qos5_pri; int qos6_pri; int qos7_pri; } ;
struct TYPE_7__ {void* u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_sso_ppx_qos_pri_t ;
struct TYPE_6__ {int qos0_pri; int qos1_pri; int qos2_pri; int qos3_pri; int qos4_pri; int qos5_pri; int qos6_pri; int qos7_pri; } ;
struct TYPE_8__ {void* u64; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_pow_pp_grp_mskx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,unsigned long long) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,void*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static inline void FUNC_8(uint64_t VAR_2, const uint8_t VAR_3[])
{
    if (FUNC_2(VAR_0))
        return;


    {
        int VAR_4;
        uint32_t VAR_5 = 0;

        for(VAR_4=0; VAR_4<8; VAR_4++)
            if (VAR_3[VAR_4] != 0xF)
                VAR_5 |= 1<<VAR_3[VAR_4];

        if ( VAR_5 ^ ((1<<FUNC_4(VAR_5)) - 1))
        {
            FUNC_3("ERROR: POW static priorities should be contiguous (0x%llx)\n", (unsigned long long)VAR_5);
            return;
        }
    }


    if (FUNC_7(VAR_1))
    {
        cvmx_sso_ppx_qos_pri_t VAR_6;

        VAR_6.u64 = FUNC_5(FUNC_1(VAR_2));
        VAR_6.s.qos0_pri = VAR_3[0];
        VAR_6.s.qos1_pri = VAR_3[1];
        VAR_6.s.qos2_pri = VAR_3[2];
        VAR_6.s.qos3_pri = VAR_3[3];
        VAR_6.s.qos4_pri = VAR_3[4];
        VAR_6.s.qos5_pri = VAR_3[5];
        VAR_6.s.qos6_pri = VAR_3[6];
        VAR_6.s.qos7_pri = VAR_3[7];
        FUNC_6(FUNC_1(VAR_2), VAR_6.u64);
    }
    else
    {
        cvmx_pow_pp_grp_mskx_t VAR_7;

        VAR_7.u64 = FUNC_5(FUNC_0(VAR_2));
        VAR_7.s.qos0_pri = VAR_3[0];
        VAR_7.s.qos1_pri = VAR_3[1];
        VAR_7.s.qos2_pri = VAR_3[2];
        VAR_7.s.qos3_pri = VAR_3[3];
        VAR_7.s.qos4_pri = VAR_3[4];
        VAR_7.s.qos5_pri = VAR_3[5];
        VAR_7.s.qos6_pri = VAR_3[6];
        VAR_7.s.qos7_pri = VAR_3[7];

        FUNC_6(FUNC_0(VAR_2), VAR_7.u64);
    }
}
