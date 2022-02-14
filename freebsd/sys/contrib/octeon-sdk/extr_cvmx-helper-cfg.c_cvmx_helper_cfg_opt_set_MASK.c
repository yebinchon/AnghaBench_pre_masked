
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef size_t cvmx_helper_cfg_option_t ;


 size_t VAR_0 ;
 int * VAR_1 ;

int FUNC_0(cvmx_helper_cfg_option_t VAR_2, uint64_t VAR_3)
{
    if (VAR_2 >= VAR_0)
        return -1;

    VAR_1[VAR_2] = VAR_3;

    return 0;
}
