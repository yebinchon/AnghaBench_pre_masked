
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dmat; int mapp; int virt; int phys; int size; } ;
typedef TYPE_1__ cp_dma_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_3 (int ,void**,int,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static int
FUNC_6 (int VAR_5, int VAR_6, cp_dma_mem_t *VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_0 (((void*)0), 16, 0, VAR_3,
  VAR_2, ((void*)0), ((void*)0), VAR_7->size, 1,
  VAR_7->size, 0, ((void*)0), ((void*)0), &VAR_7->dmat);
 if (VAR_8) {
  if (VAR_6 >= 0) FUNC_5 ("cp%d-%d: ", VAR_5, VAR_6);
  else FUNC_5 ("cp%d: ", VAR_5);
  FUNC_5 ("couldn't allocate tag for dma memory\n");
   return 0;
 }
 VAR_8 = FUNC_3 (VAR_7->dmat, (void **)&VAR_7->virt,
  VAR_0 | VAR_1, &VAR_7->mapp);
 if (VAR_8) {
  if (VAR_6 >= 0) FUNC_5 ("cp%d-%d: ", VAR_5, VAR_6);
  else FUNC_5 ("cp%d: ", VAR_5);
  FUNC_5 ("couldn't allocate mem for dma memory\n");
  FUNC_1 (VAR_7->dmat);
   return 0;
 }
 VAR_8 = FUNC_2 (VAR_7->dmat, VAR_7->mapp, VAR_7->virt,
  VAR_7->size, VAR_4, &VAR_7->phys, 0);
 if (VAR_8) {
  if (VAR_6 >= 0) FUNC_5 ("cp%d-%d: ", VAR_5, VAR_6);
  else FUNC_5 ("cp%d: ", VAR_5);
  FUNC_5 ("couldn't load mem map for dma memory\n");
  FUNC_4 (VAR_7->dmat, VAR_7->virt, VAR_7->mapp);
  FUNC_1 (VAR_7->dmat);
   return 0;
 }
 return 1;
}
