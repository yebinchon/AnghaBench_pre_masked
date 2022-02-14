
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct netmap_obj_pool {size_t objtotal; scalar_t__ alloc_done; scalar_t__ objfree; scalar_t__ numclusters; scalar_t__ memtotal; TYPE_1__* lut; int _clustsize; scalar_t__ _clustentries; int * invalid_bitmap; int * bitmap; } ;
struct TYPE_2__ {int vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,size_t) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct netmap_obj_pool *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->bitmap)
  FUNC_2(VAR_1->bitmap);
 VAR_1->bitmap = ((void*)0);
 if (VAR_1->invalid_bitmap)
  FUNC_2(VAR_1->invalid_bitmap);
 VAR_1->invalid_bitmap = ((void*)0);
 if (!VAR_1->alloc_done) {



  return;
 }
 if (VAR_1->lut) {
  u_int VAR_2;







  for (VAR_2 = 0; VAR_2 < VAR_1->objtotal; VAR_2 += VAR_1->_clustentries) {
   FUNC_0(VAR_1->lut[VAR_2].vaddr, VAR_1->_clustsize, VAR_0);
  }
  FUNC_1(VAR_1->lut, VAR_1->objtotal);
 }
 VAR_1->lut = ((void*)0);
 VAR_1->objtotal = 0;
 VAR_1->memtotal = 0;
 VAR_1->numclusters = 0;
 VAR_1->objfree = 0;
 VAR_1->alloc_done = 0;
}
