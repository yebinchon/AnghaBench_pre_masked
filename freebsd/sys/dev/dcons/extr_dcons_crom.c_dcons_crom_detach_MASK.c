
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * post_busreset; } ;
struct dcons_crom_softc {int * dma_tag; int dma_map; scalar_t__ ehand; TYPE_1__ fd; } ;
typedef int device_t ;
struct TYPE_4__ {int * dma_tag; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct dcons_crom_softc *VAR_3;

        VAR_3 = (struct dcons_crom_softc *) FUNC_4(VAR_2);
 VAR_3->fd.post_busreset = ((void*)0);

 if (VAR_3->ehand)
  FUNC_0(VAR_1, VAR_3->ehand);


 if (VAR_0->dma_tag == VAR_3->dma_tag)
  VAR_0->dma_tag = ((void*)0);

 FUNC_3(VAR_3->dma_tag, VAR_3->dma_map);
 FUNC_2(VAR_3->dma_tag, VAR_3->dma_map);
 FUNC_1(VAR_3->dma_tag);

 return 0;
}
