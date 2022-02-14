
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_dma_info {int * map; int * tag; int * vaddr; int paddr; int size; } ;
typedef int bus_size_t ;
typedef int bus_dma_tag_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int **) ;
 int FUNC_1 (int *,int *,int *,int ,int ,int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,void**,int,int **) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (struct iwm_dma_info*) ;
 int VAR_6 ;

int
FUNC_6(bus_dma_tag_t VAR_7, struct iwm_dma_info *VAR_8,
    bus_size_t VAR_9, bus_size_t VAR_10)
{
 int VAR_11;

 VAR_8->tag = ((void*)0);
 VAR_8->map = ((void*)0);
 VAR_8->size = VAR_9;
 VAR_8->vaddr = ((void*)0);

 VAR_11 = FUNC_0(VAR_7, VAR_10,
            0, VAR_5, VAR_4, ((void*)0), ((void*)0), VAR_9,
            1, VAR_9, 0, ((void*)0), ((void*)0), &VAR_8->tag);
        if (VAR_11 != 0)
                goto fail;

        VAR_11 = FUNC_3(VAR_8->tag, (void **)&VAR_8->vaddr,
            VAR_2 | VAR_3 | VAR_1, &VAR_8->map);
        if (VAR_11 != 0)
                goto fail;

        VAR_11 = FUNC_1(VAR_8->tag, VAR_8->map, VAR_8->vaddr, VAR_9,
            VAR_6, &VAR_8->paddr, VAR_2);
        if (VAR_11 != 0) {
  FUNC_4(VAR_8->tag, VAR_8->vaddr, VAR_8->map);
  VAR_8->vaddr = ((void*)0);
  goto fail;
 }

 FUNC_2(VAR_8->tag, VAR_8->map, VAR_0);

 return 0;

fail:
 FUNC_5(VAR_8);

 return VAR_11;
}
