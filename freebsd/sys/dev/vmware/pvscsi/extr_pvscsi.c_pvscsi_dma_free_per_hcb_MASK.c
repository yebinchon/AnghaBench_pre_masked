
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pvscsi_softc {int sg_list_dma; int sense_buffer_dma; int buffer_dmat; struct pvscsi_hcb* hcbs; int lock; } ;
struct pvscsi_hcb {int dma_map; int callout; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pvscsi_softc*,int *) ;

__attribute__((used)) static void
FUNC_6(struct pvscsi_softc *VAR_0, uint32_t VAR_1)
{
 int VAR_2;
 int VAR_3;
 struct pvscsi_hcb *VAR_4;

 VAR_3 = FUNC_3(&VAR_0->lock);

 if (VAR_3) {
  FUNC_4(&VAR_0->lock);
 }
 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  VAR_4 = VAR_0->hcbs + VAR_2;
  FUNC_1(&VAR_4->callout);
 };
 if (VAR_3) {
  FUNC_2(&VAR_0->lock);
 }

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  VAR_4 = VAR_0->hcbs + VAR_2;
  FUNC_0(VAR_0->buffer_dmat, VAR_4->dma_map);
 };

 FUNC_5(VAR_0, &VAR_0->sense_buffer_dma);
 FUNC_5(VAR_0, &VAR_0->sg_list_dma);
}
