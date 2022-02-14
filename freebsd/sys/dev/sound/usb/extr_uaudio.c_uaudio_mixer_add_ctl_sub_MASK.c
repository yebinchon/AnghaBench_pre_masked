
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {int sc_mixer_count; struct uaudio_mixer_node* sc_mixer_root; } ;
struct uaudio_mixer_node {int nchan; int val_default; int* wData; int maxval; int minval; struct uaudio_mixer_node* next; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct uaudio_mixer_node* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct uaudio_mixer_node*,struct uaudio_mixer_node*,int) ;

__attribute__((used)) static void
FUNC_3(struct uaudio_softc *VAR_2, struct uaudio_mixer_node *VAR_3)
{
 struct uaudio_mixer_node *VAR_4 =
     FUNC_1(sizeof(*VAR_4), VAR_0, VAR_1);
 int VAR_5;

 if (VAR_4 != ((void*)0)) {
  FUNC_2(VAR_4, VAR_3, sizeof(*VAR_4));
  VAR_4->next = VAR_2->sc_mixer_root;
  VAR_2->sc_mixer_root = VAR_4;
  VAR_2->sc_mixer_count++;


  for (VAR_5 = 0; VAR_5 < VAR_4->nchan; VAR_5++) {
   switch (VAR_4->val_default) {
   case 1:

    VAR_4->wData[VAR_5] = (VAR_4->maxval + VAR_4->minval) / 2;
    break;
   case 2:

    VAR_4->wData[VAR_5] = VAR_4->maxval;
    break;
   default:

    VAR_4->wData[VAR_5] = VAR_4->minval;
    break;
   }
  }
 } else {
  FUNC_0("out of memory\n");
 }
}
