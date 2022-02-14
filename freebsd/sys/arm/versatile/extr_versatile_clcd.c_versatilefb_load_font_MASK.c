
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
typedef int u_char ;
struct video_adapter_softc {int * font; } ;



__attribute__((used)) static int
FUNC_0(video_adapter_t *VAR_0, int VAR_1, int VAR_2, int VAR_3,
    u_char *VAR_4, int VAR_5, int VAR_6)
{
 struct video_adapter_softc *VAR_7 = (struct video_adapter_softc *)VAR_0;

 VAR_7->font = VAR_4;

 return (0);
}
