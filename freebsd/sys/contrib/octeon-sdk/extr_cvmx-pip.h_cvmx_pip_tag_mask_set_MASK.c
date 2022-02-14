
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int en; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pip_tag_incx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
    while (VAR_2--)
    {
        cvmx_pip_tag_incx_t VAR_3;
        uint64_t VAR_4 = VAR_0*16 + VAR_1/8;
        VAR_3.u64 = FUNC_1(FUNC_0(VAR_4));
        VAR_3.s.en |= 0x80 >> (VAR_1 & 0x7);
        FUNC_2(FUNC_0(VAR_4), VAR_3.u64);
        VAR_1++;
    }
}
