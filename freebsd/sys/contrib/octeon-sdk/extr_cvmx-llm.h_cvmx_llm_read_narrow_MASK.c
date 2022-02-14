
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int u64; } ;
typedef TYPE_1__ cvmx_llm_data_t ;
struct TYPE_6__ {int u64; } ;
typedef TYPE_2__ cvmx_llm_address_t ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static inline cvmx_llm_data_t FUNC_2(cvmx_llm_address_t VAR_0, int VAR_1)
{
    cvmx_llm_data_t VAR_2;
    if (VAR_1)
    {
        FUNC_1(1, VAR_0.u64);
        FUNC_0(1, VAR_2.u64);
    }
    else
    {
        FUNC_1(0, VAR_0.u64);
        FUNC_0(0, VAR_2.u64);
    }
    return VAR_2;
}
