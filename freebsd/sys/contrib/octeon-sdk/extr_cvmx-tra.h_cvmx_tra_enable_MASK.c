
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ena; } ;
struct TYPE_4__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_tra_ctl_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static inline void FUNC_3(int VAR_1)
{
    cvmx_tra_ctl_t VAR_2;
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    {
        VAR_2.u64 = FUNC_1(FUNC_0(VAR_3));
        VAR_2.s.ena = VAR_1;
        FUNC_2(FUNC_0(VAR_3), VAR_2.u64);
        FUNC_1(FUNC_0(VAR_3));
    }
}
