
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_9__ {size_t parent_index; size_t len; TYPE_1__* array; struct TYPE_9__* parent; } ;
typedef TYPE_2__ ldns_radix_node_t ;
struct TYPE_8__ {int * edge; scalar_t__ len; int * str; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_6(ldns_radix_node_t* VAR_0)
{
 uint8_t VAR_1 = VAR_0->parent_index;
 ldns_radix_node_t* VAR_2 = VAR_0->parent;

 FUNC_1(VAR_1 < VAR_2->len);
 FUNC_5(VAR_0, ((void*)0));
 FUNC_0(VAR_2->array[VAR_1].str);
 VAR_2->array[VAR_1].str = ((void*)0);
 VAR_2->array[VAR_1].len = 0;
 VAR_2->array[VAR_1].edge = ((void*)0);

 if (VAR_2->len == 1) {
  FUNC_2(VAR_2);
 } else if (VAR_1 == 0) {
  FUNC_4(VAR_2);
 } else {
  FUNC_3(VAR_2);
 }
 return;
}
