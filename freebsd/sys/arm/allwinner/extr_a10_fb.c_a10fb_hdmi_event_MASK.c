
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct videomode {int flags; scalar_t__ hsync_start; scalar_t__ hsync_end; scalar_t__ hskew; int vdisplay; int hdisplay; } ;
struct edid_info {struct videomode* edid_preferred_mode; } ;
struct a10fb_softc {int dev; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int **,scalar_t__*) ;
 int FUNC_3 (int ,struct videomode*) ;
 int VAR_4 ;
 int FUNC_4 (struct a10fb_softc*,struct videomode const*) ;
 int FUNC_5 (struct a10fb_softc*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,struct edid_info*) ;
 int FUNC_8 (struct edid_info*) ;
 struct videomode* FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_10(void *VAR_6, device_t VAR_7)
{
 const struct videomode *VAR_8;
 struct videomode VAR_9;
 struct a10fb_softc *VAR_10;
 struct edid_info VAR_11;
 uint8_t *VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 VAR_10 = VAR_6;
 VAR_12 = ((void*)0);
 VAR_13 = 0;
 VAR_8 = ((void*)0);

 VAR_14 = FUNC_2(VAR_7, &VAR_12, &VAR_13);
 if (VAR_14 != 0) {
  FUNC_6(VAR_10->dev, "failed to get EDID: %d\n", VAR_14);
 } else {
  VAR_14 = FUNC_7(VAR_12, &VAR_11);
  if (VAR_14 != 0) {
   FUNC_6(VAR_10->dev, "failed to parse EDID: %d\n",
       VAR_14);
  } else {
   if (VAR_5)
    FUNC_8(&VAR_11);
   VAR_8 = VAR_11.edid_preferred_mode;
  }
 }


 if (VAR_8 == ((void*)0))
  VAR_8 = FUNC_9(VAR_2, VAR_0,
      VAR_1);

 if (VAR_8 == ((void*)0)) {
  FUNC_6(VAR_10->dev, "failed to find usable video mode\n");
  return;
 }

 if (VAR_5)
  FUNC_6(VAR_10->dev, "using %dx%d\n",
      VAR_8->hdisplay, VAR_8->vdisplay);


 FUNC_1(VAR_7, 0);


 FUNC_5(VAR_10, 0);


 VAR_14 = FUNC_4(VAR_10, VAR_8);
 if (VAR_14 != 0) {
  FUNC_6(VAR_10->dev, "failed to configure FB: %d\n", VAR_14);
  return;
 }

 VAR_9 = *VAR_8;
 VAR_9.hskew = VAR_8->hsync_end - VAR_8->hsync_start;
 VAR_9.flags |= VAR_4;
 FUNC_3(VAR_7, &VAR_9);


 FUNC_5(VAR_10, 1);

 FUNC_0(VAR_3);


 FUNC_1(VAR_7, 1);
}
