
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netmap_obj_pool {int objtotal; int _clustentries; scalar_t__ _objsize; int name; int _clustsize; TYPE_1__* lut; } ;
struct netmap_lut {TYPE_2__* plut; } ;
struct netmap_adapter {int * pdev; int name; struct netmap_lut na_lut; } ;
typedef int bus_dma_tag_t ;
struct TYPE_4__ {scalar_t__ paddr; } ;
struct TYPE_3__ {int * vaddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct netmap_adapter*,int ,scalar_t__*,int *,int ) ;
 int FUNC_1 (struct netmap_obj_pool*,struct netmap_adapter*) ;
 TYPE_2__* FUNC_2 (int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int
FUNC_5(struct netmap_obj_pool *VAR_1, struct netmap_adapter *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4, VAR_5 = VAR_1->objtotal;
 struct netmap_lut *VAR_6 = &VAR_2->na_lut;

 if (VAR_2->pdev == ((void*)0))
  return 0;
 if (VAR_6->plut != ((void*)0)) {
  FUNC_3("plut already allocated for %s", VAR_2->name);
  return 0;
 }

 FUNC_3("allocating physical lut for %s", VAR_2->name);
 VAR_6->plut = FUNC_2(VAR_5);
 if (VAR_6->plut == ((void*)0)) {
  FUNC_4("Failed to allocate physical lut for %s", VAR_2->name);
  return VAR_0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += VAR_1->_clustentries) {
  VAR_6->plut[VAR_4].paddr = 0;
 }

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += VAR_1->_clustentries) {
  int VAR_7;

  if (VAR_1->lut[VAR_4].vaddr == ((void*)0))
   continue;

  VAR_3 = FUNC_0(VAR_2, (bus_dma_tag_t) VAR_2->pdev, &VAR_6->plut[VAR_4].paddr,
    VAR_1->lut[VAR_4].vaddr, VAR_1->_clustsize);
  if (VAR_3) {
   FUNC_4("Failed to map cluster #%d from the %s pool", VAR_4, VAR_1->name);
   break;
  }

  for (VAR_7 = 1; VAR_7 < VAR_1->_clustentries; VAR_7++) {
   VAR_6->plut[VAR_4 + VAR_7].paddr = VAR_6->plut[VAR_4 + VAR_7 - 1].paddr + VAR_1->_objsize;
  }
 }

 if (VAR_3)
  FUNC_1(VAR_1, VAR_2);



 return VAR_3;
}
