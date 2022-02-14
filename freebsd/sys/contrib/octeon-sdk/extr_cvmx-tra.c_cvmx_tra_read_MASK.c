
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {void* datahi; void* data; } ;
struct TYPE_5__ {TYPE_1__ u128; } ;
typedef TYPE_2__ cvmx_tra_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;

cvmx_tra_data_t FUNC_2(void)
{
    uint64_t VAR_5 = VAR_0;
    cvmx_tra_data_t VAR_6;



    if (FUNC_0(VAR_4))
    {

        VAR_6.u128.data = FUNC_1(VAR_5);
        VAR_6.u128.datahi = FUNC_1(VAR_5);
    }
    else if (!FUNC_0(VAR_2) && !FUNC_0(VAR_3))
    {


        VAR_6.u128.data = FUNC_1(VAR_5);
        VAR_6.u128.datahi = FUNC_1(VAR_1);
    }
    else
    {
        VAR_6.u128.data = FUNC_1(VAR_5);
        VAR_6.u128.datahi = 0;
    }

    return VAR_6;
}
