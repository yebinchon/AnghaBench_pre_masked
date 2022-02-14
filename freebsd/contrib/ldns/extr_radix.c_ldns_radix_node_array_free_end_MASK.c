
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int len; TYPE_1__* array; } ;
typedef TYPE_2__ ldns_radix_node_t ;
struct TYPE_6__ {int * edge; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(ldns_radix_node_t* VAR_0)
{
 uint16_t VAR_1 = 0;

 while (VAR_1 < VAR_0->len && VAR_0->array[VAR_0->len-1-VAR_1].edge == ((void*)0)) {
  VAR_1++;
 }
 if (VAR_1 == 0) {
  return;
 }
 if (VAR_1 == VAR_0->len) {
  FUNC_2(VAR_0);
  return;
 }
 FUNC_0(VAR_1 < VAR_0->len);
 VAR_0->len -= VAR_1;
 FUNC_1(VAR_0);
 return;
}
