
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {int sc_mix_info; int sc_recsrc_info; struct uaudio_mixer_node* sc_mixer_root; } ;
struct uaudio_mixer_node {int ctl; scalar_t__ type; int minval; int maxval; int* slctrtype; struct uaudio_mixer_node* next; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct uaudio_softc *VAR_2)
{
 struct uaudio_mixer_node *VAR_3;
 int32_t VAR_4;

 for (VAR_3 = VAR_2->sc_mixer_root; VAR_3;
     VAR_3 = VAR_3->next) {

  if (VAR_3->ctl != VAR_1) {




   VAR_2->sc_mix_info |= (1 << VAR_3->ctl);
  }
  if ((VAR_3->ctl == VAR_1) &&
      (VAR_3->type == VAR_0)) {

   for (VAR_4 = VAR_3->minval; (VAR_4 > 0) && (VAR_4 <= VAR_3->maxval); VAR_4++) {
    if (VAR_3->slctrtype[VAR_4 - 1] == VAR_1) {
     continue;
    }
    VAR_2->sc_recsrc_info |= 1 << VAR_3->slctrtype[VAR_4 - 1];
   }
  }
 }
}
