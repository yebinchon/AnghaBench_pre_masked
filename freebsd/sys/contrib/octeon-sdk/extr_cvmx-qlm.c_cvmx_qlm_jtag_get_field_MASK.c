
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __cvmx_qlm_jtag_field_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int const* VAR_7 ;
 int const* VAR_8 ;
 int const* VAR_9 ;
 int const* VAR_10 ;
 int const* VAR_11 ;

const __cvmx_qlm_jtag_field_t *FUNC_1(void)
{

    if (FUNC_0(VAR_5))
        return VAR_11;
    else if (FUNC_0(VAR_4)
             || FUNC_0(VAR_2)
             || FUNC_0(VAR_6))
        return VAR_10;
    else if (FUNC_0(VAR_3))
        return VAR_9;
    else if (FUNC_0(VAR_1))
        return VAR_8;
    else if (FUNC_0(VAR_0))
        return VAR_7;
    else
    {

        return ((void*)0);
    }
}
