
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_softc {scalar_t__ kva; int * kva_free; scalar_t__ gnt_base_addr; int * pseudo_phys_res; int pseudo_phys_res_id; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct xbb_softc *VAR_1)
{
 if (VAR_1->kva != 0) {
  if (VAR_1->pseudo_phys_res != ((void*)0)) {
   FUNC_1(VAR_1->dev, VAR_1->pseudo_phys_res_id,
       VAR_1->pseudo_phys_res);
   VAR_1->pseudo_phys_res = ((void*)0);
  }
 }
 VAR_1->kva = 0;
 VAR_1->gnt_base_addr = 0;
 if (VAR_1->kva_free != ((void*)0)) {
  FUNC_0(VAR_1->kva_free, VAR_0);
  VAR_1->kva_free = ((void*)0);
 }
}
