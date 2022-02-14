
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct a10fb_softc {int hdmi_evh; int res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct a10fb_softc*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 struct a10fb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4)
{
 struct a10fb_softc *VAR_5;

 VAR_5 = FUNC_2(VAR_4);

 VAR_5->dev = VAR_4;

 if (FUNC_1(VAR_4, VAR_2, VAR_5->res)) {
  FUNC_3(VAR_4, "cannot allocate resources for device\n");
  return (VAR_0);
 }

 VAR_5->hdmi_evh = FUNC_0(VAR_3,
     VAR_1, VAR_5, 0);

 return (0);
}
