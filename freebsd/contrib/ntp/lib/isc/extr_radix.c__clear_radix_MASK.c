
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_active_node; int mctx; TYPE_2__* head; } ;
typedef TYPE_1__ isc_radix_tree_t ;
struct TYPE_6__ {int ** data; int * prefix; struct TYPE_6__* r; struct TYPE_6__* l; } ;
typedef TYPE_2__ isc_radix_node_t ;
typedef int (* isc_radix_destroyfunc_t ) (int **) ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_5(isc_radix_tree_t *VAR_1, isc_radix_destroyfunc_t VAR_2) {

 FUNC_1(VAR_1 != ((void*)0));

 if (VAR_1->head != ((void*)0)) {

  isc_radix_node_t *VAR_3[VAR_0+1];
  isc_radix_node_t **VAR_4 = VAR_3;
  isc_radix_node_t *VAR_5 = VAR_1->head;

  while (VAR_5 != ((void*)0)) {
   isc_radix_node_t *VAR_6 = VAR_5->l;
   isc_radix_node_t *VAR_7 = VAR_5->r;

   if (VAR_5->prefix != ((void*)0)) {
    FUNC_3(VAR_1->mctx, VAR_5->prefix);
    if (VAR_2 != ((void*)0) && (VAR_5->data[0] != ((void*)0) ||
           VAR_5->data[1] != ((void*)0)))
     VAR_2(VAR_5->data);
   } else {
    FUNC_0(VAR_5->data[0] == ((void*)0) &&
           VAR_5->data[1] == ((void*)0));
   }

   FUNC_4(VAR_1->mctx, VAR_5, sizeof(*VAR_5));
   VAR_1->num_active_node--;

   if (VAR_6 != ((void*)0)) {
    if (VAR_7 != ((void*)0)) {
     *VAR_4++ = VAR_7;
    }
    VAR_5 = VAR_6;
   } else if (VAR_7 != ((void*)0)) {
    VAR_5 = VAR_7;
   } else if (VAR_4 != VAR_3) {
    VAR_5 = *(--VAR_4);
   } else {
    VAR_5 = ((void*)0);
   }
  }
 }
 FUNC_2(VAR_1->num_active_node == 0);
}
