
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct TYPE_2__ {void* base; int size; int starting_element_count; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline int FUNC_0(uint64_t VAR_1, void *VAR_2)
{
    return ((VAR_2 >= VAR_0[VAR_1].base) &&
            ((char*)VAR_2 < ((char*)(VAR_0[VAR_1].base)) + VAR_0[VAR_1].size * VAR_0[VAR_1].starting_element_count));
}
