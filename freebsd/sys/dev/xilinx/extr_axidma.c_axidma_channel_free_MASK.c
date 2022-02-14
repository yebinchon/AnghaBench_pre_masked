
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {scalar_t__ chan; } ;
struct axidma_softc {int dummy; } ;
struct axidma_channel {int used; } ;
typedef int device_t ;


 int FUNC_0 (struct axidma_softc*,struct axidma_channel*) ;
 struct axidma_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, struct xdma_channel *VAR_1)
{
 struct axidma_channel *VAR_2;
 struct axidma_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_0);

 VAR_2 = (struct axidma_channel *)VAR_1->chan;

 FUNC_0(VAR_3, VAR_2);

 VAR_2->used = 0;

 return (0);
}
