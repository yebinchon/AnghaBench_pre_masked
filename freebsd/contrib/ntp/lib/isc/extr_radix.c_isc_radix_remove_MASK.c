
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* head; int num_active_node; int mctx; } ;
typedef TYPE_1__ isc_radix_tree_t ;
struct TYPE_7__ {struct TYPE_7__* l; struct TYPE_7__* r; int * prefix; struct TYPE_7__* parent; int ** data; } ;
typedef TYPE_2__ isc_radix_node_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,TYPE_2__*,int) ;

void
FUNC_4(isc_radix_tree_t *VAR_0, isc_radix_node_t *VAR_1) {
 isc_radix_node_t *VAR_2, *VAR_3;

 FUNC_1(VAR_0 != ((void*)0));
 FUNC_1(VAR_1 != ((void*)0));

 if (VAR_1->r && VAR_1->l) {




  if (VAR_1->prefix != ((void*)0))
   FUNC_2(VAR_0->mctx, VAR_1->prefix);

  VAR_1->prefix = ((void*)0);
  VAR_1->data[0] = VAR_1->data[1] = ((void*)0);
  return;
 }

 if (VAR_1->r == ((void*)0) && VAR_1->l == ((void*)0)) {
  VAR_2 = VAR_1->parent;
  FUNC_2(VAR_0->mctx, VAR_1->prefix);
  FUNC_3(VAR_0->mctx, VAR_1, sizeof(*VAR_1));
  VAR_0->num_active_node--;

  if (VAR_2 == ((void*)0)) {
   FUNC_0(VAR_0->head == VAR_1);
   VAR_0->head = ((void*)0);
   return;
  }

  if (VAR_2->r == VAR_1) {
   VAR_2->r = ((void*)0);
   VAR_3 = VAR_2->l;
  } else {
   FUNC_0(VAR_2->l == VAR_1);
   VAR_2->l = ((void*)0);
   VAR_3 = VAR_2->r;
  }

  if (VAR_2->prefix)
   return;



  if (VAR_2->parent == ((void*)0)) {
   FUNC_0(VAR_0->head == VAR_2);
   VAR_0->head = VAR_3;
  } else if (VAR_2->parent->r == VAR_2) {
   VAR_2->parent->r = VAR_3;
  } else {
   FUNC_0(VAR_2->parent->l == VAR_2);
   VAR_2->parent->l = VAR_3;
  }
  VAR_3->parent = VAR_2->parent;
  FUNC_3(VAR_0->mctx, VAR_2, sizeof(*VAR_2));
  VAR_0->num_active_node--;
  return;
 }

 if (VAR_1->r) {
  VAR_3 = VAR_1->r;
 } else {
  FUNC_0(VAR_1->l != ((void*)0));
  VAR_3 = VAR_1->l;
 }
 VAR_2 = VAR_1->parent;
 VAR_3->parent = VAR_2;

 FUNC_2(VAR_0->mctx, VAR_1->prefix);
 FUNC_3(VAR_0->mctx, VAR_1, sizeof(*VAR_1));
 VAR_0->num_active_node--;

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_0->head == VAR_1);
  VAR_0->head = VAR_3;
  return;
 }

 if (VAR_2->r == VAR_1) {
  VAR_2->r = VAR_3;
 } else {
  FUNC_0(VAR_2->l == VAR_1);
  VAR_2->l = VAR_3;
 }
}
