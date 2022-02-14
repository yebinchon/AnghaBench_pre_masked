
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_audio_softc {scalar_t__ sc_mode; int * sc_xfer; scalar_t__* sc_pattern; int sc_pattern_len; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct g_audio_softc*) ;
 int FUNC_1 (scalar_t__*,int ,int) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void *VAR_6)
{
 struct g_audio_softc *VAR_7 = VAR_6;

 VAR_7->sc_mode = VAR_4;

 FUNC_1(VAR_7->sc_pattern, VAR_5, sizeof(VAR_7->sc_pattern));

 VAR_7->sc_pattern[VAR_2 - 1] = 0;

 VAR_7->sc_pattern_len = FUNC_2(VAR_7->sc_pattern);

 if (VAR_7->sc_mode != VAR_3) {
  FUNC_3(VAR_7->sc_xfer[VAR_0]);
  FUNC_3(VAR_7->sc_xfer[VAR_1]);
 }
 FUNC_0(VAR_7);
}
