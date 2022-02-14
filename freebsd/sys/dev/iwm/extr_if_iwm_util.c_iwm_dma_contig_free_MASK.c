
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_dma_info {int * tag; int * vaddr; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

void
FUNC_4(struct iwm_dma_info *VAR_2)
{
 if (VAR_2->vaddr != ((void*)0)) {
  FUNC_1(VAR_2->tag, VAR_2->map,
      VAR_0 | VAR_1);
  FUNC_2(VAR_2->tag, VAR_2->map);
  FUNC_3(VAR_2->tag, VAR_2->vaddr, VAR_2->map);
  VAR_2->vaddr = ((void*)0);
 }
 if (VAR_2->tag != ((void*)0)) {
  FUNC_0(VAR_2->tag);
  VAR_2->tag = ((void*)0);
 }
}
