
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {scalar_t__ xxor; int dat; scalar_t__ mbz; } ;
struct TYPE_6__ {int u64; TYPE_1__ s; } ;
typedef TYPE_2__ cvmx_llm_data_t ;
struct TYPE_7__ {int u64; } ;
typedef TYPE_3__ cvmx_llm_address_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline void FUNC_2(cvmx_llm_address_t VAR_0, uint64_t VAR_1, int VAR_2)
{
    cvmx_llm_data_t VAR_3;
    VAR_3.s.mbz = 0;

    VAR_3.s.dat = VAR_1;

    VAR_3.s.xxor = 0;

    if (VAR_2)
    {
        FUNC_0(1, VAR_3.u64);
        FUNC_1(1, VAR_0.u64);
    }
    else
    {
        FUNC_0(0, VAR_3.u64);
        FUNC_1(0, VAR_0.u64);
    }
}
