
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint8_t ;
typedef size_t radix_strlen_t ;
struct TYPE_5__ {unsigned int len; TYPE_1__* array; scalar_t__ data; } ;
typedef TYPE_2__ ldns_radix_node_t ;
struct TYPE_4__ {unsigned int* str; size_t len; TYPE_2__* edge; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
FUNC_1(FILE* VAR_0, ldns_radix_node_t* VAR_1,
 uint8_t VAR_2, uint8_t* VAR_3, radix_strlen_t VAR_4, unsigned VAR_5)
{
 uint8_t VAR_6;
 if (!VAR_1) {
  return;
 }
 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  FUNC_0(VAR_0, "--");
 }
 if (VAR_3) {
  radix_strlen_t VAR_7;
  FUNC_0(VAR_0, "| [%u+", (unsigned) VAR_2);
  for (VAR_7=0; VAR_7 < VAR_4; VAR_7++) {
   FUNC_0(VAR_0, "%c", (char) VAR_3[VAR_7]);
  }
  FUNC_0(VAR_0, "]%u", (unsigned) VAR_4);
 } else {
  FUNC_0(VAR_0, "| [%u]", (unsigned) VAR_2);
 }

 if (VAR_1->data) {
  FUNC_0(VAR_0, " %s", (char*) VAR_1->data);
 }
 FUNC_0(VAR_0, "\n");

 for (VAR_6 = 0; VAR_6 < VAR_1->len; VAR_6++) {
  if (VAR_1->array[VAR_6].edge) {
   FUNC_1(VAR_0, VAR_1->array[VAR_6].edge, VAR_6,
    VAR_1->array[VAR_6].str, VAR_1->array[VAR_6].len, VAR_5+1);
  }
 }
 return;
}
