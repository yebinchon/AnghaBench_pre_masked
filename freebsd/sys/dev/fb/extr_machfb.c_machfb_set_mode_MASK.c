
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
struct machfb_softc {int sc_bg_cache; int sc_fg_cache; scalar_t__ sc_draw_cache; } ;



__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_0, int VAR_1)
{
 struct machfb_softc *VAR_2;

 VAR_2 = (struct machfb_softc *)VAR_0;

 VAR_2->sc_bg_cache = -1;
 VAR_2->sc_fg_cache = -1;
 VAR_2->sc_draw_cache = 0;

 return (0);
}
