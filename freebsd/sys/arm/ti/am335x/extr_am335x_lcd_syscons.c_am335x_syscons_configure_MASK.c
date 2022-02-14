
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_adapter_softc {int initialized; scalar_t__ width; scalar_t__ height; int va; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int cell ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,void**,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int ) ;
 struct video_adapter_softc VAR_2 ;

__attribute__((used)) static int
FUNC_4(int VAR_3)
{
 struct video_adapter_softc *VAR_4;

 VAR_4 = &VAR_2;
 phandle_t VAR_5, VAR_6;
 pcell_t VAR_7;

 if (VAR_4->initialized)
  return (0);

 VAR_4->width = 0;
 VAR_4->height = 0;






 VAR_6 = FUNC_0("/");
 if ((VAR_6 != -1) &&
     (VAR_5 = FUNC_2(VAR_6))) {
  if ((FUNC_1(VAR_5, "panel_width", &VAR_7,
      sizeof(VAR_7))) > 0)
   VAR_4->width = VAR_7;

  if ((FUNC_1(VAR_5, "panel_height", &VAR_7,
      sizeof(VAR_7))) > 0)
   VAR_4->height = VAR_7;
 }

 if (VAR_4->width == 0)
  VAR_4->width = VAR_1;
 if (VAR_4->height == 0)
  VAR_4->height = VAR_0;

 FUNC_3(0, &VAR_4->va, 0);

 VAR_4->initialized = 1;

 return (0);
}
