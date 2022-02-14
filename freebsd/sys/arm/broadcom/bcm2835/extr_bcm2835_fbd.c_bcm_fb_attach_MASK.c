
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcmsc_softc {int fbswap; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int bootargs ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int,char*,char**,int) ;
 int FUNC_2 (struct bcmsc_softc*) ;
 int FUNC_3 (struct bcmsc_softc*) ;
 struct bcmsc_softc* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_0)
{
 char VAR_1[2048], *VAR_2, *VAR_3, *VAR_4;
 int VAR_5;
 phandle_t VAR_6;
 struct bcmsc_softc *VAR_7;

 VAR_7 = FUNC_4(VAR_0);
 VAR_7->dev = VAR_0;


 VAR_7->fbswap = 0;
 VAR_6 = FUNC_0("/chosen");
 if (VAR_6 != -1 &&
     FUNC_1(VAR_6, "bootargs", &VAR_1, sizeof(VAR_1)) > 0) {
  VAR_3 = VAR_1;
  while ((VAR_4 = FUNC_6(&VAR_3, " ")) != ((void*)0)) {
   if (*VAR_4 == '\0')
    continue;
   VAR_2 = FUNC_6(&VAR_4, "=");
   if (FUNC_5(VAR_2, "bcm2708_fb.fbswap") == 0 && VAR_4 != ((void*)0))
    if (*VAR_4 == '1')
     VAR_7->fbswap = 1;
                }
        }

 FUNC_3(VAR_7);

 VAR_5 = FUNC_2(VAR_7);
 if (VAR_5)
  return (VAR_5);

 return (0);
}
