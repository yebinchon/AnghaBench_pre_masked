
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scb {int sg_count; int sg_list; TYPE_2__* sg_map; } ;
struct ahc_softc {TYPE_1__* scb_data; } ;
struct ahc_dma_seg {int dummy; } ;
struct TYPE_4__ {int sg_vaddr; int sg_dmamap; } ;
struct TYPE_3__ {int sg_dmat; } ;


 int FUNC_0 (struct ahc_softc*,int ,int ,int,int,int) ;

__attribute__((used)) static __inline void
FUNC_1(struct ahc_softc *VAR_0, struct scb *VAR_1, int VAR_2)
{
 if (VAR_1->sg_count == 0)
  return;

 FUNC_0(VAR_0, VAR_0->scb_data->sg_dmat, VAR_1->sg_map->sg_dmamap,
             (VAR_1->sg_list - VAR_1->sg_map->sg_vaddr)
    * sizeof(struct ahc_dma_seg),
          sizeof(struct ahc_dma_seg) * VAR_1->sg_count, VAR_2);
}
