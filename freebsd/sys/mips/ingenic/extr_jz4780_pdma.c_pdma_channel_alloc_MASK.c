
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {void* chan; } ;
struct pdma_softc {int dummy; } ;
struct pdma_channel {int used; int index; struct xdma_channel* xchan; } ;
typedef int device_t ;


 int VAR_0 ;
 struct pdma_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct pdma_channel*) ;
 struct pdma_channel* VAR_1 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_2, struct xdma_channel *VAR_3)
{
 struct pdma_channel *VAR_4;
 struct pdma_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_2);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = &VAR_1[VAR_6];
  if (VAR_4->used == 0) {
   VAR_4->xchan = VAR_3;
   VAR_3->chan = (void *)VAR_4;
   VAR_4->used = 1;
   VAR_4->index = VAR_6;

   FUNC_1(VAR_2, VAR_4);

   return (0);
  }
 }

 return (-1);
}
