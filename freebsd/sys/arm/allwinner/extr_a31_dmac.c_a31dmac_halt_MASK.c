
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a31dmac_softc {int dummy; } ;
struct a31dmac_channel {int index; struct a31dmac_softc* sc; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct a31dmac_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(device_t VAR_0, void *VAR_1)
{
 struct a31dmac_channel *VAR_2;
 struct a31dmac_softc *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->sc;

 FUNC_1(VAR_3, FUNC_0(VAR_2->index), 0);
}
