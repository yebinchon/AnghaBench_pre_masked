
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; TYPE_1__* data; } ;
typedef TYPE_2__ param_values_t ;
struct TYPE_7__ {TYPE_2__ param_values; } ;
typedef TYPE_3__ config_t ;
struct TYPE_5__ {scalar_t__ param; scalar_t__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(config_t const* VAR_2)
{
    param_values_t const VAR_3 = VAR_2->param_values;
    size_t VAR_4;
    for (VAR_4 = 0; VAR_4 < VAR_3.size; ++VAR_4) {
        if (VAR_3.data[VAR_4].param == VAR_1)
            return (int)VAR_3.data[VAR_4].value;
    }
    return VAR_0;
}
