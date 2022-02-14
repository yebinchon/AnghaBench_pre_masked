
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int sc_dev; } ;
struct iwn_dma_info {void* vaddr; int map; int * tag; int paddr; int size; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int **) ;
 int FUNC_1 (int *,int ,void*,int ,int ,int *,int) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,void**,int,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct iwn_dma_info*) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct iwn_softc *VAR_7, struct iwn_dma_info *VAR_8,
    void **VAR_9, bus_size_t VAR_10, bus_size_t VAR_11)
{
 int VAR_12;

 VAR_8->tag = ((void*)0);
 VAR_8->size = VAR_10;

 VAR_12 = FUNC_0(FUNC_4(VAR_7->sc_dev), VAR_11,
     0, VAR_5, VAR_4, ((void*)0), ((void*)0), VAR_10,
     1, VAR_10, 0, ((void*)0), ((void*)0), &VAR_8->tag);
 if (VAR_12 != 0)
  goto fail;

 VAR_12 = FUNC_3(VAR_8->tag, (void **)&VAR_8->vaddr,
     VAR_2 | VAR_3 | VAR_1, &VAR_8->map);
 if (VAR_12 != 0)
  goto fail;

 VAR_12 = FUNC_1(VAR_8->tag, VAR_8->map, VAR_8->vaddr, VAR_10,
     VAR_6, &VAR_8->paddr, VAR_2);
 if (VAR_12 != 0)
  goto fail;

 FUNC_2(VAR_8->tag, VAR_8->map, VAR_0);

 if (VAR_9 != ((void*)0))
  *VAR_9 = VAR_8->vaddr;

 return 0;

fail: FUNC_5(VAR_8);
 return VAR_12;
}
