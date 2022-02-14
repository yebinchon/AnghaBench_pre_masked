
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dcons_softc {int dummy; } ;
struct TYPE_2__ {int dma_map; int * dma_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (struct dcons_softc*,int ) ;
 int FUNC_2 (struct dcons_softc*) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static int
FUNC_3(struct dcons_softc *VAR_3)
{
 int VAR_4;

 if (VAR_2.dma_tag != ((void*)0))
  FUNC_0(VAR_2.dma_tag, VAR_2.dma_map, VAR_0);

 VAR_4 = FUNC_1(VAR_3, FUNC_2(VAR_3));

 if (VAR_2.dma_tag != ((void*)0))
  FUNC_0(VAR_2.dma_tag, VAR_2.dma_map, VAR_1);

 return (VAR_4);
}
