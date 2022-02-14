
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ en; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pip_tag_incx_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(uint64_t VAR_0)
{
    uint64_t VAR_1;
    cvmx_pip_tag_incx_t VAR_2;
    VAR_2.u64 = 0;
    VAR_2.s.en = 0;
    for (VAR_1=VAR_0*16; VAR_1<(VAR_0+1)*16; VAR_1++)
        FUNC_1(FUNC_0(VAR_1), VAR_2.u64);
}
