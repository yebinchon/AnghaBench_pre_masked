
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t size; scalar_t__ data; } ;
typedef TYPE_1__ FUZZ_dataProducer_t ;



size_t FUNC_0(FUZZ_dataProducer_t *VAR_0, size_t VAR_1)
{
    VAR_1 = VAR_1 > VAR_0->size ? VAR_0->size : VAR_1;

    size_t VAR_2 = VAR_0->size - VAR_1;
    VAR_0->data = VAR_0->data + VAR_2;
    VAR_0->size = VAR_1;
    return VAR_2;
}
