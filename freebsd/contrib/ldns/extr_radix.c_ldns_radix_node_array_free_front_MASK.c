
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_9__ {size_t len; TYPE_3__* array; scalar_t__ offset; } ;
typedef TYPE_2__ ldns_radix_node_t ;
typedef int ldns_radix_array_t ;
struct TYPE_10__ {TYPE_1__* edge; } ;
struct TYPE_8__ {size_t parent_index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,size_t) ;

__attribute__((used)) static void
FUNC_4(ldns_radix_node_t* VAR_0)
{
 uint16_t VAR_1, VAR_2 = 0;

    while (VAR_2 < VAR_0->len && VAR_0->array[VAR_2].edge == ((void*)0)) {
  VAR_2++;
 }
 if (VAR_2 == 0) {
  return;
 }
 if (VAR_2 == VAR_0->len) {
  FUNC_2(VAR_0);
  return;
 }
 FUNC_0(VAR_2 < VAR_0->len);
 FUNC_0((int) VAR_2 <= (255 - (int) VAR_0->offset));
 FUNC_3(&VAR_0->array[0], &VAR_0->array[VAR_2],
  (VAR_0->len - VAR_2)*sizeof(ldns_radix_array_t));
 VAR_0->offset += VAR_2;
 VAR_0->len -= VAR_2;
 for (VAR_1=0; VAR_1 < VAR_0->len; VAR_1++) {
  if (VAR_0->array[VAR_1].edge) {
   VAR_0->array[VAR_1].edge->parent_index = VAR_1;
  }
 }
 FUNC_1(VAR_0);
 return;
}
