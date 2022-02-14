
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct videomode {int vdisplay; int hdisplay; } ;
struct jzlcd_softc {int dev; } ;
struct edid_info {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int **,scalar_t__*) ;
 int FUNC_1 (int ,struct videomode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int *,struct edid_info*) ;
 int FUNC_4 (struct edid_info*) ;
 int FUNC_5 (struct jzlcd_softc*,struct videomode const*) ;
 struct videomode* FUNC_6 (struct edid_info*) ;
 int FUNC_7 (struct jzlcd_softc*) ;
 int FUNC_8 (struct jzlcd_softc*) ;
 struct videomode* FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_4, device_t VAR_5)
{
 const struct videomode *VAR_6;
 struct videomode VAR_7;
 struct jzlcd_softc *VAR_8;
 struct edid_info VAR_9;
 uint8_t *VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 VAR_8 = VAR_4;
 VAR_10 = ((void*)0);
 VAR_11 = 0;
 VAR_6 = ((void*)0);

 VAR_12 = FUNC_0(VAR_5, &VAR_10, &VAR_11);
 if (VAR_12 != 0) {
  FUNC_2(VAR_8->dev, "failed to get EDID: %d\n", VAR_12);
 } else {
  VAR_12 = FUNC_3(VAR_10, &VAR_9);
  if (VAR_12 != 0) {
   FUNC_2(VAR_8->dev, "failed to parse EDID: %d\n",
       VAR_12);
  } else {
   if (VAR_3)
    FUNC_4(&VAR_9);

   VAR_6 = FUNC_6(&VAR_9);
  }
 }


 if (VAR_6 == ((void*)0))
  VAR_6 = FUNC_9(VAR_2, VAR_0,
      VAR_1);

 if (VAR_6 == ((void*)0)) {
  FUNC_2(VAR_8->dev, "failed to find usable video mode\n");
  return;
 }

 if (VAR_3)
  FUNC_2(VAR_8->dev, "using %dx%d\n",
      VAR_6->hdisplay, VAR_6->vdisplay);


 FUNC_8(VAR_8);


 VAR_12 = FUNC_5(VAR_8, VAR_6);
 if (VAR_12 != 0) {
  FUNC_2(VAR_8->dev, "failed to configure FB: %d\n", VAR_12);
  return;
 }


 VAR_7 = *VAR_6;
 FUNC_1(VAR_5, &VAR_7);


 FUNC_7(VAR_8);
}
