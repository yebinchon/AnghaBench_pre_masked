
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_obj_pool {int objtotal; int _clustsize; scalar_t__ _clustentries; } ;
struct netmap_lut {TYPE_1__* plut; } ;
struct netmap_adapter {int * pdev; int name; struct netmap_lut na_lut; } ;
typedef int bus_dma_tag_t ;
struct TYPE_2__ {scalar_t__ paddr; } ;


 int FUNC_0 (struct netmap_adapter*,int ,scalar_t__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct netmap_obj_pool *VAR_0, struct netmap_adapter *VAR_1)
{
 int VAR_2, VAR_3 = VAR_0->objtotal;
 struct netmap_lut *VAR_4 = &VAR_1->na_lut;

 if (VAR_1 == ((void*)0) || VAR_1->pdev == ((void*)0))
  return 0;
 FUNC_2("unmapping and freeing plut for %s", VAR_1->name);
 if (VAR_4->plut == ((void*)0))
  return 0;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2 += VAR_0->_clustentries) {
  if (VAR_4->plut[VAR_2].paddr)
   FUNC_0(VAR_1, (bus_dma_tag_t) VAR_1->pdev, &VAR_4->plut[VAR_2].paddr, VAR_0->_clustsize);
 }
 FUNC_1(VAR_4->plut);
 VAR_4->plut = ((void*)0);


 return 0;
}
