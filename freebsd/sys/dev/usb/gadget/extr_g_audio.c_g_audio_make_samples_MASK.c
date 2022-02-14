
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_audio_softc {scalar_t__ sc_state; scalar_t__ sc_pattern_len; int* sc_pattern; } ;
typedef int int16_t ;


 int FUNC_0 (struct g_audio_softc*) ;

__attribute__((used)) static void
FUNC_1(struct g_audio_softc *VAR_0, int16_t *VAR_1, int VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_3 = 0; VAR_3 != VAR_2; VAR_3++) {

  VAR_4 = FUNC_0(VAR_0);

  if ((VAR_0->sc_state < 0) || (VAR_0->sc_state >= VAR_0->sc_pattern_len))
   VAR_0->sc_state = 0;

  if (VAR_0->sc_pattern_len != 0) {
   VAR_4 = (VAR_4 * VAR_0->sc_pattern[VAR_0->sc_state]) >> 16;
   VAR_0->sc_state++;
  }
  *VAR_1++ = VAR_4 / 256;
  *VAR_1++ = VAR_4 / 256;
 }
}
