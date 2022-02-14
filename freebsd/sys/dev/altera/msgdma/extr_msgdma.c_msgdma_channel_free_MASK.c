
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {scalar_t__ chan; } ;
struct msgdma_softc {int dummy; } ;
struct msgdma_channel {scalar_t__ used; } ;
typedef int device_t ;


 struct msgdma_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct msgdma_softc*,struct msgdma_channel*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct xdma_channel *VAR_1)
{
 struct msgdma_channel *VAR_2;
 struct msgdma_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 VAR_2 = (struct msgdma_channel *)VAR_1->chan;

 FUNC_1(VAR_3, VAR_2);

 VAR_2->used = 0;

 return (0);
}
