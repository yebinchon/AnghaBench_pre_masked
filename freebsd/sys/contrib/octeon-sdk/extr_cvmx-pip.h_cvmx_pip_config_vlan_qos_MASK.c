
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int qos; } ;
struct TYPE_4__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_pip_qos_vlanx_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(uint64_t VAR_1, uint64_t VAR_2)
{
    if (FUNC_2(VAR_0))
    {

    }
    else
    {
        cvmx_pip_qos_vlanx_t VAR_3;
        VAR_3.u64 = 0;
        VAR_3.s.qos = VAR_2;
        FUNC_1(FUNC_0(VAR_1), VAR_3.u64);
    }
}
