
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_info {int width; int height; int backlight_pin; } ;
struct TYPE_2__ {int fb_width; int fb_height; int fb_stride; int fb_bpp; int fb_depth; int fb_size; intptr_t fb_vbase; intptr_t fb_pbase; int fb_name; } ;
struct dcu_softc {int * dev; int * sc_fbd; TYPE_1__ sc_info; struct panel_info* panel; int ih; int * res; int bsh; int bst; } ;
typedef int int8_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *,int ,int,int *,int ,struct dcu_softc*,int *) ;
 scalar_t__ FUNC_4 (int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (struct dcu_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *,char*,int ) ;
 int FUNC_9 (int *) ;
 struct dcu_softc* FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct dcu_softc*,struct panel_info*) ;
 int FUNC_15 (int *,int,int) ;
 int FUNC_16 (char*,intptr_t,...) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (intptr_t) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_10)
{
 struct panel_info VAR_11;
 struct dcu_softc *VAR_12;
 device_t VAR_13;
 int VAR_14;

 VAR_12 = FUNC_10(VAR_10);
 VAR_12->dev = VAR_10;

 if (FUNC_2(VAR_10, VAR_9, VAR_12->res)) {
  FUNC_12(VAR_10, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_12->bst = FUNC_18(VAR_12->res[0]);
 VAR_12->bsh = FUNC_17(VAR_12->res[0]);


 VAR_14 = FUNC_3(VAR_10, VAR_12->res[1], VAR_4 | VAR_3,
     ((void*)0), VAR_8, VAR_12, &VAR_12->ih);
 if (VAR_14) {
  FUNC_12(VAR_10, "Unable to alloc interrupt resource.\n");
  return (VAR_0);
 }

 if (FUNC_14(VAR_12, &VAR_11)) {
  FUNC_12(VAR_10, "Can't get panel info\n");
  return (VAR_0);
 }

 VAR_12->panel = &VAR_11;


 FUNC_19();


 VAR_13 = FUNC_7(FUNC_6("gpio"), 0);
 if (VAR_13 == ((void*)0)) {
  FUNC_12(VAR_12->dev, "Error: failed to get the GPIO dev\n");
  return (1);
 }



 FUNC_1(VAR_13, VAR_11.backlight_pin, VAR_2);
 FUNC_0(VAR_13, VAR_11.backlight_pin, VAR_1);

 VAR_12->sc_info.fb_width = VAR_11.width;
 VAR_12->sc_info.fb_height = VAR_11.height;
 VAR_12->sc_info.fb_stride = VAR_12->sc_info.fb_width * 3;
 VAR_12->sc_info.fb_bpp = VAR_12->sc_info.fb_depth = 24;
 VAR_12->sc_info.fb_size = VAR_12->sc_info.fb_height * VAR_12->sc_info.fb_stride;
 VAR_12->sc_info.fb_vbase = (intptr_t)FUNC_4(VAR_12->sc_info.fb_size,
     VAR_5, VAR_6, 0, ~0, VAR_7, 0);
 VAR_12->sc_info.fb_pbase = (intptr_t)FUNC_20(VAR_12->sc_info.fb_vbase);







 FUNC_15((int8_t *)VAR_12->sc_info.fb_vbase, 0x0, VAR_12->sc_info.fb_size);

 FUNC_5(VAR_12);

 VAR_12->sc_info.fb_name = FUNC_9(VAR_10);


 VAR_12->sc_fbd = FUNC_8(VAR_10, "fbd", FUNC_11(VAR_10));
 if (VAR_12->sc_fbd == ((void*)0))
  FUNC_12(VAR_10, "Can't attach fbd device\n");

 if (FUNC_13(VAR_12->sc_fbd) != 0) {
  FUNC_12(VAR_12->dev, "Failed to attach fbd device\n");
 }

 return (0);
}
