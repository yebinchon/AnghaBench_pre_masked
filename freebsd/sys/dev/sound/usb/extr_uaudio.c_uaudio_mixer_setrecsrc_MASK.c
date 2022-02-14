
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct uaudio_softc {struct uaudio_mixer_node* sc_mixer_root; } ;
struct uaudio_mixer_node {scalar_t__ ctl; scalar_t__ type; int minval; int maxval; int* slctrtype; struct uaudio_mixer_node* next; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uaudio_softc*,struct uaudio_mixer_node*,int ,int) ;

uint32_t
FUNC_1(struct uaudio_softc *VAR_2, uint32_t VAR_3)
{
 struct uaudio_mixer_node *VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;
 int32_t VAR_7;

 for (VAR_4 = VAR_2->sc_mixer_root; VAR_4;
     VAR_4 = VAR_4->next) {

  if ((VAR_4->ctl == VAR_1) &&
      (VAR_4->type == VAR_0)) {



   VAR_5 = 0;
   for (VAR_7 = VAR_4->minval; (VAR_7 > 0) && (VAR_7 <= VAR_4->maxval); VAR_7++) {
    VAR_5 |= (1 << VAR_4->slctrtype[VAR_7 - 1]);
   }

   VAR_6 = VAR_5 & VAR_3;
   if (VAR_6 == 0) {
    continue;
   }

   VAR_6 = (-VAR_6) & VAR_6;


   VAR_3 &= ~VAR_5;
   VAR_3 |= VAR_6;

   for (VAR_7 = VAR_4->minval; (VAR_7 > 0) && (VAR_7 <= VAR_4->maxval); VAR_7++) {
    if (VAR_6 != (1 << VAR_4->slctrtype[VAR_7 - 1])) {
     continue;
    }
    FUNC_0(VAR_2, VAR_4, 0, VAR_7);
    break;
   }
  }
 }
 return (VAR_3);
}
