
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvscsi_softc {int dummy; } ;
struct pvscsi_dma {scalar_t__ paddr; int * tag; int map; int * vaddr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (struct pvscsi_dma*,int) ;

__attribute__((used)) static void
FUNC_4(struct pvscsi_softc *VAR_0, struct pvscsi_dma *VAR_1)
{

 if (VAR_1->tag != ((void*)0)) {
  if (VAR_1->paddr != 0) {
   FUNC_1(VAR_1->tag, VAR_1->map);
  }

  if (VAR_1->vaddr != ((void*)0)) {
   FUNC_2(VAR_1->tag, VAR_1->vaddr, VAR_1->map);
  }

  FUNC_0(VAR_1->tag);
 }

 FUNC_3(VAR_1, sizeof(*VAR_1));
}
