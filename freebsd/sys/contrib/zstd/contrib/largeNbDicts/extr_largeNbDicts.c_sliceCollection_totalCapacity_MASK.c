
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nbSlices; scalar_t__* capacities; } ;
typedef TYPE_1__ slice_collection_t ;



__attribute__((used)) static size_t FUNC_0(slice_collection_t VAR_0)
{
    size_t VAR_1 = 0;
    for (size_t VAR_2=0; VAR_2<VAR_0.nbSlices; VAR_2++)
        VAR_1 += VAR_0.capacities[VAR_2];
    return VAR_1;
}
