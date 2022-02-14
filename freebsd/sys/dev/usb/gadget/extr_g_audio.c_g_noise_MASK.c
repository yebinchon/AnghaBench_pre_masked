
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct g_audio_softc {int sc_noise_rem; } ;
typedef int int32_t ;



__attribute__((used)) static int32_t
FUNC_0(struct g_audio_softc *VAR_0)
{
 uint32_t VAR_1;
 const uint32_t VAR_2 = 0xFFFF1D;

 if (VAR_0->sc_noise_rem & 1) {
  VAR_0->sc_noise_rem += VAR_2;
 }
 VAR_0->sc_noise_rem /= 2;

 VAR_1 = VAR_0->sc_noise_rem;



 VAR_1 ^= 0x800000;
 if (VAR_1 & 0x800000) {
  VAR_1 |= (-0x800000);
 }
 return VAR_1;
}
