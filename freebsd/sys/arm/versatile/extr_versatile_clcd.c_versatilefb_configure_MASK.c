
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_adapter_softc {int initialized; int va; int depth; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct video_adapter_softc VAR_3 ;
 int FUNC_0 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_1(int VAR_4)
{
 struct video_adapter_softc *VAR_5;

 VAR_5 = &VAR_3;

 if (VAR_5->initialized)
  return (0);

 VAR_5->width = VAR_2;
 VAR_5->height = VAR_1;
 VAR_5->depth = VAR_0;

 FUNC_0(0, &VAR_5->va, 0);

 VAR_5->initialized = 1;

 return (0);
}
