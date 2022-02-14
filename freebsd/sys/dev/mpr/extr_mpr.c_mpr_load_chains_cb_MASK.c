
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpr_softc {scalar_t__ chain_frame_size; int chain_free_lowwater; scalar_t__ chain_frames; struct mpr_chain* chains; } ;
struct mpr_chain {scalar_t__ chain_busaddr; int * chain; } ;
typedef scalar_t__ bus_size_t ;
struct TYPE_3__ {scalar_t__ ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;
typedef int MPI2_SGE_IO_UNION ;


 int FUNC_0 (struct mpr_softc*,struct mpr_chain*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, bus_dma_segment_t *VAR_1, int VAR_2, int VAR_3)
{
 struct mpr_softc *VAR_4 = VAR_0;
 struct mpr_chain *VAR_5;
 bus_size_t VAR_6;
 int VAR_7, VAR_8, VAR_9;

 if (VAR_3 != 0)
  return;

 for (VAR_7 = 0, VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  for (VAR_6 = 0; VAR_6 + VAR_4->chain_frame_size <= VAR_1[VAR_9].ds_len;
      VAR_6 += VAR_4->chain_frame_size) {
   VAR_5 = &VAR_4->chains[VAR_7++];
   VAR_5->chain =(MPI2_SGE_IO_UNION *)(VAR_4->chain_frames+VAR_8);
   VAR_5->chain_busaddr = VAR_1[VAR_9].ds_addr + VAR_6;
   VAR_8 += VAR_4->chain_frame_size;
   FUNC_0(VAR_4, VAR_5);
  }
  if (VAR_6 != VAR_1[VAR_9].ds_len)
   VAR_8 += VAR_1[VAR_9].ds_len - VAR_6;
 }
 VAR_4->chain_free_lowwater = VAR_7;
}
