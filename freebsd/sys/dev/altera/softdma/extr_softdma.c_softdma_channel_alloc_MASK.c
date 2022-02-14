
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {int caps; void* chan; } ;
struct softdma_softc {struct softdma_channel* channels; } ;
struct softdma_channel {int used; int index; int descs_num; struct softdma_softc* sc; scalar_t__ descs_used_count; scalar_t__ idx_tail; scalar_t__ idx_head; struct xdma_channel* xchan; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct softdma_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct softdma_channel*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct xdma_channel *VAR_3)
{
 struct softdma_channel *VAR_4;
 struct softdma_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = &VAR_5->channels[VAR_6];
  if (VAR_4->used == 0) {
   VAR_4->xchan = VAR_3;
   VAR_3->chan = (void *)VAR_4;
   VAR_3->caps |= VAR_1;
   VAR_4->index = VAR_6;
   VAR_4->idx_head = 0;
   VAR_4->idx_tail = 0;
   VAR_4->descs_used_count = 0;
   VAR_4->descs_num = 1024;
   VAR_4->sc = VAR_5;

   if (FUNC_1(VAR_4) != 0) {
    return (-1);
   }

   VAR_4->used = 1;

   return (0);
  }
 }

 return (-1);
}
