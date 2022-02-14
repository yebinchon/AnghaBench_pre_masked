
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct AdapterControlBlock {int parent_dmat; int dm_segs_dmat; int srb_dmat; int srb_dmamap; int * ioctl_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct AdapterControlBlock *VAR_0)
{

 if(VAR_0->ioctl_dev != ((void*)0)) {
  FUNC_3(VAR_0->ioctl_dev);
 }
 FUNC_2(VAR_0->srb_dmat, VAR_0->srb_dmamap);
 FUNC_1(VAR_0->srb_dmat, VAR_0->srb_dmamap);
 FUNC_0(VAR_0->srb_dmat);
 FUNC_0(VAR_0->dm_segs_dmat);
 FUNC_0(VAR_0->parent_dmat);
}
