
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * root; } ;
typedef TYPE_1__ ldns_radix_t ;
struct TYPE_9__ {int len; struct TYPE_9__* parent; scalar_t__ data; } ;
typedef TYPE_2__ ldns_radix_node_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_3(ldns_radix_t* VAR_0, ldns_radix_node_t* VAR_1)
{
 while (VAR_1) {
  if (VAR_1->data) {

   return;
  } else if (VAR_1->len == 1 && VAR_1->parent) {

   FUNC_1(VAR_1);
   return;
  } else if (VAR_1->len == 0) {

   ldns_radix_node_t* VAR_2 = VAR_1->parent;
   if (!VAR_2) {

    FUNC_2(VAR_1, ((void*)0));
    VAR_0->root = ((void*)0);
    return;
   }

   FUNC_0(VAR_1);
   VAR_1 = VAR_2;
  } else {




   return;
  }
 }

 return;
}
