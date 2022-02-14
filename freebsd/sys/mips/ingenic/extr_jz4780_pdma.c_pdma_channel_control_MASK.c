
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ chan; } ;
typedef TYPE_1__ xdma_channel_t ;
struct pdma_softc {int dummy; } ;
struct pdma_channel {int dummy; } ;
typedef int device_t ;





 int FUNC_0 (struct pdma_softc*,struct pdma_channel*) ;
 int FUNC_1 (struct pdma_softc*,struct pdma_channel*) ;
 struct pdma_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, xdma_channel_t *VAR_1, int VAR_2)
{
 struct pdma_channel *VAR_3;
 struct pdma_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_0);

 VAR_3 = (struct pdma_channel *)VAR_1->chan;

 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_4, VAR_3);
  break;
 case 128:
  FUNC_1(VAR_4, VAR_3);
  break;
 case 129:

  return (-1);
 }

 return (0);
}
