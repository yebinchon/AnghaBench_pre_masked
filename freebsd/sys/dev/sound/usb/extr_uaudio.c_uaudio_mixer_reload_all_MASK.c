
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * xfer; } ;
struct uaudio_softc {int * sc_mixer_lock; TYPE_1__ sc_hid; int * sc_mixer_xfer; struct uaudio_mixer_node* sc_mixer_root; } ;
struct uaudio_mixer_node {scalar_t__ ctl; int nchan; int* update; struct uaudio_mixer_node* next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct uaudio_softc *VAR_1)
{
 struct uaudio_mixer_node *VAR_2;
 int VAR_3;

 if (VAR_1->sc_mixer_lock == ((void*)0))
  return;

 FUNC_0(VAR_1->sc_mixer_lock);
 for (VAR_2 = VAR_1->sc_mixer_root; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {

  if (VAR_2->ctl == VAR_0)
   continue;
  for (VAR_3 = 0; VAR_3 < VAR_2->nchan; VAR_3++)
   VAR_2->update[VAR_3 / 8] |= (1 << (VAR_3 % 8));
 }
 FUNC_2(VAR_1->sc_mixer_xfer[0]);


 FUNC_2(VAR_1->sc_hid.xfer[0]);
 FUNC_1(VAR_1->sc_mixer_lock);
}
