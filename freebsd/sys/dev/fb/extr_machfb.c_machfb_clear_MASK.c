
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
struct machfb_softc {int sc_height; int sc_width; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_1)
{
 struct machfb_softc *VAR_2;

 VAR_2 = (struct machfb_softc *)VAR_1;

 FUNC_0(VAR_1, (VAR_0 >> 4) & 0xf, 0, 0, VAR_2->sc_width,
     VAR_2->sc_height);

 return (0);
}
