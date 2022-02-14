
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uaudio_softc {int * sc_mixer_xfer; } ;
struct uaudio_mixer_node {int* update; int * wData; } ;
typedef int int32_t ;


 int FUNC_0 (struct uaudio_mixer_node*,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct uaudio_softc *VAR_0, struct uaudio_mixer_node *VAR_1,
    uint8_t VAR_2, int32_t VAR_3)
{
 VAR_3 = FUNC_0(VAR_1, VAR_3);

 VAR_1->update[VAR_2 / 8] |= (1 << (VAR_2 % 8));
 VAR_1->wData[VAR_2] = VAR_3;



 FUNC_1(VAR_0->sc_mixer_xfer[0]);
}
