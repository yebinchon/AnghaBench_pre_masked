
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_adapter_softc {int initialized; int width; int height; int bpp; int stride; int va; } ;


 int FUNC_0 (int ,int *,int ) ;
 struct video_adapter_softc VAR_0 ;

__attribute__((used)) static int
FUNC_1(int VAR_1)
{
 struct video_adapter_softc *VAR_2;

 VAR_2 = &VAR_0;

 if (VAR_2->initialized)
  return 0;

 VAR_2->width = 640;
 VAR_2->height = 480;
 VAR_2->bpp = 2;
 VAR_2->stride = VAR_2->width * VAR_2->bpp;

 FUNC_0(0, &VAR_2->va, 0);

 VAR_2->initialized = 1;

 return (0);
}
