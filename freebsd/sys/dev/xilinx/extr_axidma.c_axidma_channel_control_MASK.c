
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chan; } ;
typedef TYPE_1__ xdma_channel_t ;
struct axidma_softc {int dummy; } ;
struct axidma_channel {int dummy; } ;
typedef int device_t ;





 struct axidma_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, xdma_channel_t *VAR_1, int VAR_2)
{
 struct axidma_channel *VAR_3;
 struct axidma_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_0);

 VAR_3 = (struct axidma_channel *)VAR_1->chan;

 switch (VAR_2) {
 case 130:
 case 128:
 case 129:

  return (-1);
 }

 return (0);
}
