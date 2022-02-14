
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {struct uaudio_mixer_node* sc_mixer_root; } ;
struct uaudio_mixer_node {unsigned int ctl; int nchan; struct uaudio_mixer_node* next; } ;


 int FUNC_0 (struct uaudio_softc*,struct uaudio_mixer_node*,int,int) ;

void
FUNC_1(struct uaudio_softc *VAR_0, unsigned VAR_1,
    unsigned VAR_2, unsigned VAR_3)
{
 struct uaudio_mixer_node *VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_0->sc_mixer_root; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {

  if (VAR_4->ctl == VAR_1) {
   for (VAR_5 = 0; VAR_5 < VAR_4->nchan; VAR_5++) {
    FUNC_0(VAR_0, VAR_4, VAR_5,
        (int)((VAR_5 == 0 ? VAR_2 : VAR_3) *
        255) / 100);
   }
  }
 }
}
