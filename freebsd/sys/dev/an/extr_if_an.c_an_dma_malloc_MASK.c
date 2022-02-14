
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct an_softc {int an_dtag; } ;
struct an_dma_alloc {int an_dma_map; int an_dma_vaddr; int an_dma_size; int an_dma_paddr; } ;
typedef int bus_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int *,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct an_softc *VAR_2, bus_size_t VAR_3, struct an_dma_alloc *VAR_4,
    int VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2->an_dtag, (void**) &VAR_4->an_dma_vaddr,
        VAR_0, &VAR_4->an_dma_map);
 if (VAR_6 != 0)
  goto fail_1;

 VAR_6 = FUNC_0(VAR_2->an_dtag, VAR_4->an_dma_map, VAR_4->an_dma_vaddr,
       VAR_3,
       VAR_1,
       &VAR_4->an_dma_paddr,
       VAR_5 | VAR_0);
 if (VAR_6 != 0)
  goto fail_2;

 VAR_4->an_dma_size = VAR_3;
 return (0);

fail_2:
 FUNC_1(VAR_2->an_dtag, VAR_4->an_dma_map);
fail_1:
 FUNC_3(VAR_2->an_dtag, VAR_4->an_dma_vaddr, VAR_4->an_dma_map);
 return (VAR_6);
}
