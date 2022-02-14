
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ capacity; int * array; scalar_t__ len; scalar_t__ offset; } ;
typedef TYPE_1__ ldns_radix_node_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(ldns_radix_node_t* VAR_0)
{
 VAR_0->offset = 0;
 VAR_0->len = 0;
 FUNC_0(VAR_0->array);
 VAR_0->array = ((void*)0);
 VAR_0->capacity = 0;
 return;
}
