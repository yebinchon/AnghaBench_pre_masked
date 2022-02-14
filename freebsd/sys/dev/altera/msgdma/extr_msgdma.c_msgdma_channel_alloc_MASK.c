
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {int caps; void* chan; } ;
struct msgdma_softc {struct msgdma_channel* channels; } ;
struct msgdma_channel {int used; int index; int descs_num; scalar_t__ descs_used_count; scalar_t__ idx_tail; scalar_t__ idx_head; struct msgdma_softc* sc; struct xdma_channel* xchan; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct msgdma_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_3, struct xdma_channel *VAR_4)
{
 struct msgdma_channel *VAR_5;
 struct msgdma_softc *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_0(VAR_3);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_5 = &VAR_6->channels[VAR_7];
  if (VAR_5->used == 0) {
   VAR_5->xchan = VAR_4;
   VAR_4->chan = (void *)VAR_5;
   if ((VAR_4->caps & VAR_2) == 0)
    VAR_4->caps |= VAR_1;
   VAR_5->index = VAR_7;
   VAR_5->sc = VAR_6;
   VAR_5->used = 1;
   VAR_5->idx_head = 0;
   VAR_5->idx_tail = 0;
   VAR_5->descs_used_count = 0;
   VAR_5->descs_num = 1024;

   return (0);
  }
 }

 return (-1);
}
