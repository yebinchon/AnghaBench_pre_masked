
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t heap_id; } ;
typedef TYPE_1__ vertex_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {TYPE_1__** nodes; } ;
typedef TYPE_2__ binary_heap_t ;



__attribute__((used)) static void FUNC_0(binary_heap_t * VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;
 vertex_t *VAR_4 = ((void*)0);


 VAR_3 = VAR_0->nodes[VAR_1]->heap_id;
 VAR_0->nodes[VAR_1]->heap_id = VAR_0->nodes[VAR_2]->heap_id;
 VAR_0->nodes[VAR_2]->heap_id = VAR_3;

 VAR_4 = VAR_0->nodes[VAR_1];
 VAR_0->nodes[VAR_1] = VAR_0->nodes[VAR_2];
 VAR_0->nodes[VAR_2] = VAR_4;
}
