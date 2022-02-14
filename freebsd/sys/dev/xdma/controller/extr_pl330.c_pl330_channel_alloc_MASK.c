
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {int caps; void* chan; } ;
struct pl330_softc {struct pl330_channel* channels; } ;
struct pl330_channel {int used; int index; void* ibuf; int ibuf_phys; struct pl330_softc* sc; struct xdma_channel* xchan; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pl330_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int,int ,int ,int ,int,int ,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, struct xdma_channel *VAR_6)
{
 struct pl330_channel *VAR_7;
 struct pl330_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_5);

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  VAR_7 = &VAR_8->channels[VAR_9];
  if (VAR_7->used == 0) {
   VAR_7->xchan = VAR_6;
   VAR_6->chan = (void *)VAR_7;
   VAR_6->caps |= VAR_4;
   VAR_7->index = VAR_9;
   VAR_7->sc = VAR_8;
   VAR_7->used = 1;

   VAR_7->ibuf = (void *)FUNC_1(VAR_1 * 8,
       VAR_0, 0, ~0, VAR_1, 0,
       VAR_3);
   VAR_7->ibuf_phys = FUNC_2(VAR_7->ibuf);

   return (0);
  }
 }

 return (-1);
}
