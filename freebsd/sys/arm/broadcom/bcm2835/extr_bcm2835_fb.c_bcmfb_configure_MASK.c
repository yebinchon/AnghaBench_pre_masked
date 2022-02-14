
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcmsc_softc {int initialized; unsigned int width; unsigned int height; int fbswap; int va; } ;
typedef int phandle_t ;
typedef void* pcell_t ;
typedef int cell ;
typedef int bootargs ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,void**,int) ;
 scalar_t__ FUNC_2 (int,char*,char**,int) ;
 int FUNC_3 (int ,int *,int ) ;
 struct bcmsc_softc VAR_2 ;
 int FUNC_4 (int,char*,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char**,char*) ;
 scalar_t__ FUNC_7 (char*,int *,int ) ;

__attribute__((used)) static int
FUNC_8(int VAR_3)
{
 char VAR_4[2048], *VAR_5, *VAR_6, *VAR_7;
 pcell_t VAR_8;
 phandle_t VAR_9, VAR_10, VAR_11;
 struct bcmsc_softc *VAR_12;

 VAR_12 = &VAR_2;
 if (VAR_12->initialized)
  return (0);

 VAR_12->width = 0;
 VAR_12->height = 0;







 VAR_9 = FUNC_0("/chosen");
 if (VAR_9 != -1 &&
     FUNC_2(VAR_9, "bootargs", &VAR_4, sizeof(VAR_4)) > 0) {
  VAR_6 = VAR_4;
  while ((VAR_7 = FUNC_6(&VAR_6, " ")) != ((void*)0)) {
   if (*VAR_7 == '\0')
    continue;
   VAR_5 = FUNC_6(&VAR_7, "=");
   if (FUNC_5(VAR_5, "bcm2708_fb.fbwidth") == 0 && VAR_7 != ((void*)0))
    VAR_12->width = (unsigned int)FUNC_7(VAR_7, ((void*)0), 0);
   else if (FUNC_5(VAR_5, "bcm2708_fb.fbheight") == 0 &&
       VAR_7 != ((void*)0))
    VAR_12->height = (unsigned int)FUNC_7(VAR_7, ((void*)0), 0);
   else if (FUNC_5(VAR_5, "bcm2708_fb.fbswap") == 0 &&
       VAR_7 != ((void*)0))
    if (*VAR_7 == '1')
     VAR_12->fbswap = 1;
  }
 }

 VAR_11 = FUNC_0("/");
 if ((VAR_11 != -1) &&
     (VAR_10 = FUNC_4(VAR_11, "broadcom,bcm2835-fb", 1))) {
  if (VAR_12->width == 0) {
   if ((FUNC_1(VAR_10, "broadcom,width",
       &VAR_8, sizeof(VAR_8))) > 0)
    VAR_12->width = VAR_8;
  }

  if (VAR_12->height == 0) {
   if ((FUNC_1(VAR_10, "broadcom,height",
       &VAR_8, sizeof(VAR_8))) > 0)
    VAR_12->height = VAR_8;
  }
 }

 if (VAR_12->width == 0)
  VAR_12->width = VAR_1;
 if (VAR_12->height == 0)
  VAR_12->height = VAR_0;

 FUNC_3(0, &VAR_12->va, 0);
 VAR_12->initialized = 1;

 return (0);
}
