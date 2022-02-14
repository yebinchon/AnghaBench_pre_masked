
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t heap_id; } ;
typedef TYPE_1__ vertex_t ;
typedef size_t uint32_t ;
struct TYPE_8__ {size_t size; TYPE_1__** nodes; } ;
typedef TYPE_2__ binary_heap_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(vertex_t * VAR_0, uint32_t VAR_1,
         binary_heap_t ** VAR_2)
{
 binary_heap_t *VAR_3 = ((void*)0);
 uint32_t VAR_4 = 0;


 VAR_3 = (binary_heap_t *) FUNC_2(sizeof(binary_heap_t));
 if (!VAR_3)
  return 1;


 VAR_3->size = VAR_1;


 VAR_3->nodes = (vertex_t **) FUNC_2(VAR_3->size * sizeof(vertex_t *));
 if (!VAR_3->nodes) {
  FUNC_0(VAR_3);
  return 1;
 }
 for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
  VAR_3->nodes[VAR_4] = &VAR_0[VAR_4];
  VAR_3->nodes[VAR_4]->heap_id = VAR_4;
 }


 for (VAR_4 = VAR_3->size; VAR_4 > 0; VAR_4--)
  FUNC_1(VAR_3, VAR_4 - 1);

 *VAR_2 = VAR_3;
 return 0;
}
