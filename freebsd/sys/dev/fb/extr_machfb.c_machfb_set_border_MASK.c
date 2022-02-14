
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
struct machfb_softc {scalar_t__ sc_height; scalar_t__ sc_xmargin; scalar_t__ sc_width; scalar_t__ sc_ymargin; } ;


 int FUNC_0 (int *,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, int VAR_1)
{
 struct machfb_softc *VAR_2;

 VAR_2 = (struct machfb_softc *)VAR_0;

 FUNC_0(VAR_0, VAR_1, 0, 0, VAR_2->sc_width, VAR_2->sc_ymargin);
 FUNC_0(VAR_0, VAR_1, 0, VAR_2->sc_height - VAR_2->sc_ymargin,
     VAR_2->sc_width, VAR_2->sc_ymargin);
 FUNC_0(VAR_0, VAR_1, 0, 0, VAR_2->sc_xmargin, VAR_2->sc_height);
 FUNC_0(VAR_0, VAR_1, VAR_2->sc_width - VAR_2->sc_xmargin, 0,
     VAR_2->sc_xmargin, VAR_2->sc_height);

 return (0);
}
