
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {int iv; } ;
struct TYPE_7__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_pip_crc_ivx_t ;
struct TYPE_6__ {void* reflect; void* invres; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_2__ s; } ;
typedef TYPE_4__ cvmx_pip_crc_ctlx_t ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_4(uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4, uint32_t VAR_5)
{
    if ((FUNC_2(VAR_0) || FUNC_2(VAR_1)))
    {
        cvmx_pip_crc_ctlx_t VAR_6;
        cvmx_pip_crc_ivx_t VAR_7;

        VAR_6.u64 = 0;
        VAR_6.s.invres = VAR_3;
        VAR_6.s.reflect = VAR_4;
        FUNC_3(FUNC_0(VAR_2), VAR_6.u64);

        VAR_7.u64 = 0;
        VAR_7.s.iv = VAR_5;
        FUNC_3(FUNC_1(VAR_2), VAR_7.u64);
    }
}
