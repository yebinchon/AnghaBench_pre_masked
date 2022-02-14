
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int video_adapter_t ;
struct video_adapter_softc {int fb_size; scalar_t__ fb_addr; } ;


 int FUNC_0 (void*,int ,int ) ;

__attribute__((used)) static int
FUNC_1(video_adapter_t *VAR_0, int VAR_1)
{

 struct video_adapter_softc *VAR_2;

 VAR_2 = (struct video_adapter_softc *)VAR_0;
 if (VAR_2 && VAR_2->fb_addr)
  FUNC_0((void*)VAR_2->fb_addr, 0, VAR_2->fb_size);

 return (0);
}
