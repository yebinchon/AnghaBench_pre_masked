
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uaudio_softc {struct uaudio_mixer_node* sc_mixer_root; } ;
struct uaudio_mixer_node {struct uaudio_mixer_node* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct uaudio_mixer_node*,int ) ;

__attribute__((used)) static void
FUNC_1(struct uaudio_softc *VAR_1)
{
 struct uaudio_mixer_node *VAR_2;

 while ((VAR_2 = VAR_1->sc_mixer_root) != ((void*)0)) {
  VAR_1->sc_mixer_root = VAR_2->next;
  FUNC_0(VAR_2, VAR_0);
 }
}
