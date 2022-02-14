
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mps_busdma_context {int error; int completed; scalar_t__ abandoned; scalar_t__* addr; int buffer_dmamap; int buffer_dmat; int softc; } ;
struct TYPE_3__ {scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mps_busdma_context*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mps_busdma_context*) ;

void
FUNC_5(void *VAR_1, bus_dma_segment_t *VAR_2, int VAR_3, int VAR_4)
{
 struct mps_busdma_context *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = (struct mps_busdma_context *)VAR_1;
 VAR_6 = 0;
 VAR_7 = 0;

 FUNC_2(VAR_5->softc);
 VAR_5->error = VAR_4;
 VAR_5->completed = 1;
 if ((VAR_4 == 0) && (VAR_5->abandoned == 0)) {
  *VAR_5->addr = VAR_2[0].ds_addr;
 } else {
  if (VAR_3 != 0)
   VAR_6 = 1;
  if (VAR_5->abandoned != 0)
   VAR_7 = 1;
 }
 if (VAR_7 == 0)
  FUNC_4(VAR_5);

 FUNC_3(VAR_5->softc);

 if (VAR_6 != 0) {
  FUNC_0(VAR_5->buffer_dmat,
      VAR_5->buffer_dmamap);
  *VAR_5->addr = 0;
 }

 if (VAR_7 != 0)
  FUNC_1(VAR_5, VAR_0);
}
