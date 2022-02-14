
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_audio_softc {int sc_throughput; } ;


 int VAR_0 ;
 int FUNC_0 (struct g_audio_softc*) ;

__attribute__((used)) static void
FUNC_1(void *VAR_1)
{
 struct g_audio_softc *VAR_2 = VAR_1;
 int VAR_3;

 VAR_3 = VAR_2->sc_throughput;

 VAR_2->sc_throughput = 0;

 VAR_0 = VAR_3;

 FUNC_0(VAR_2);
}
