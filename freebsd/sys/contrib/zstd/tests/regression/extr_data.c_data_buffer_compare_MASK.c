
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; int data; } ;
typedef TYPE_1__ data_buffer_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,size_t const) ;

int FUNC_2(data_buffer_t VAR_0, data_buffer_t VAR_1) {
    size_t const VAR_2 =
        VAR_0 < VAR_1 ? VAR_0 : VAR_1;
    int const VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_3 != 0)
        return VAR_3;
    if (VAR_0 < VAR_1)
        return -1;
    if (VAR_0 == VAR_1)
        return 0;
    FUNC_0(VAR_0 > VAR_1);
    return 1;
}
