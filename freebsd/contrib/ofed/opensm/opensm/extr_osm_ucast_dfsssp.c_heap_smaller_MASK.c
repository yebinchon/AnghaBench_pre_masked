
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {TYPE_1__** nodes; } ;
typedef TYPE_2__ binary_heap_t ;
struct TYPE_4__ {scalar_t__ distance; } ;



__attribute__((used)) static inline uint32_t FUNC_0(binary_heap_t * VAR_0, uint32_t VAR_1,
        uint32_t VAR_2)
{
 return (VAR_0->nodes[VAR_1]->distance < VAR_0->nodes[VAR_2]->distance) ? 1 : 0;
}
