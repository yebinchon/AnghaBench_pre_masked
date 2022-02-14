
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdma_channel {scalar_t__ chan; } ;
struct pdma_softc {int dummy; } ;
struct pdma_channel {scalar_t__ used; } ;
typedef int device_t ;


 struct pdma_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, struct xdma_channel *VAR_1)
{
 struct pdma_channel *VAR_2;
 struct pdma_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_0);

 VAR_2 = (struct pdma_channel *)VAR_1->chan;
 VAR_2->used = 0;

 return (0);
}
