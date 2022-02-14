
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* datahi; void* data; } ;
struct TYPE_5__ {TYPE_1__ u128; } ;
typedef TYPE_2__ cvmx_tra_data_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int ) ;

cvmx_tra_data_t FUNC_3(int VAR_0)
{
    cvmx_tra_data_t VAR_1;

    VAR_1.u128.data = FUNC_2(FUNC_0(VAR_0));
    VAR_1.u128.datahi = FUNC_2(FUNC_1(VAR_0));

    return VAR_1;
}
