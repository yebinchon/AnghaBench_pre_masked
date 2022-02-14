
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vertex_t ;
struct TYPE_5__ {int size; int ** nodes; } ;
typedef TYPE_1__ binary_heap_t ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static vertex_t *FUNC_2(binary_heap_t * VAR_0)
{
 vertex_t *VAR_1 = ((void*)0);

 if (VAR_0->size > 0)
  VAR_1 = VAR_0->nodes[0];

 if (VAR_1 == ((void*)0))
  return VAR_1;

 if (VAR_0->size > 0) {
  if (VAR_0->size > 1) {
   FUNC_1(VAR_0, 0, VAR_0->size - 1);
   VAR_0->size--;
   FUNC_0(VAR_0, 0);
  } else {
   VAR_0->size--;
  }
 }

 return VAR_1;
}
