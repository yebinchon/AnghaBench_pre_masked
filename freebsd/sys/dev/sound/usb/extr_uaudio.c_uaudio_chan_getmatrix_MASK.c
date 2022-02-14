
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uaudio_softc {scalar_t__ sc_uq_audio_swap_lr; } ;
struct uaudio_chan {struct uaudio_softc* priv_sc; } ;
struct pcmchan_matrix {int dummy; } ;


 int FUNC_0 (int ) ;
 struct pcmchan_matrix* FUNC_1 (int ) ;
 struct pcmchan_matrix VAR_0 ;

struct pcmchan_matrix *
FUNC_2(struct uaudio_chan *VAR_1, uint32_t VAR_2)
{
 struct uaudio_softc *VAR_3;

 VAR_3 = VAR_1->priv_sc;

 if (VAR_3 != ((void*)0) && VAR_3->sc_uq_audio_swap_lr != 0 &&
     FUNC_0(VAR_2) == 2)
  return (&VAR_0);

 return (FUNC_1(VAR_2));
}
