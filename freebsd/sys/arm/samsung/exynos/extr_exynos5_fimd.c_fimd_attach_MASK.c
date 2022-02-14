
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_info {int clkval_f; int width; int height; scalar_t__ ivclk; scalar_t__ fixvclk; } ;
struct TYPE_2__ {int fb_width; int fb_height; int fb_stride; int fb_bpp; int fb_depth; int fb_size; intptr_t fb_vbase; intptr_t fb_pbase; int fb_name; } ;
struct fimd_softc {int * dev; int * sc_fbd; TYPE_1__ sc_info; void* bsh_sysreg; void* bst_sysreg; struct panel_info* panel; int * res; void* bsh_disp; void* bst_disp; void* bsh; void* bst; } ;
typedef int int8_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int *) ;
 int FUNC_1 (void*,void*,int) ;
 int FUNC_2 (void*,void*,int,int) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (int *) ;
 struct fimd_softc* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (struct fimd_softc*) ;
 int VAR_5 ;
 scalar_t__ FUNC_12 (struct fimd_softc*,struct panel_info*) ;
 scalar_t__ FUNC_13 (int,int ,int ,int ,int ,int ,int ) ;
 int FUNC_14 (int *,int,int) ;
 int FUNC_15 (char*,intptr_t,...) ;
 void* FUNC_16 (int ) ;
 void* FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (intptr_t) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_6)
{
 struct panel_info VAR_7;
 struct fimd_softc *VAR_8;
 device_t VAR_9;
 int VAR_10;

 VAR_8 = FUNC_7(VAR_6);
 VAR_8->dev = VAR_6;

 if (FUNC_0(VAR_6, VAR_5, VAR_8->res)) {
  FUNC_9(VAR_6, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_8->bst = FUNC_17(VAR_8->res[0]);
 VAR_8->bsh = FUNC_16(VAR_8->res[0]);
 VAR_8->bst_disp = FUNC_17(VAR_8->res[1]);
 VAR_8->bsh_disp = FUNC_16(VAR_8->res[1]);
 VAR_8->bst_sysreg = FUNC_17(VAR_8->res[2]);
 VAR_8->bsh_sysreg = FUNC_16(VAR_8->res[2]);

 if (FUNC_12(VAR_8, &VAR_7)) {
  FUNC_9(VAR_6, "Can't get panel info\n");
  return (VAR_0);
 }

 VAR_7.fixvclk = 0;
 VAR_7.ivclk = 0;
 VAR_7.clkval_f = 2;

 VAR_8->panel = &VAR_7;


 VAR_9 = FUNC_4(FUNC_3("gpio"), 0);
 if (VAR_9 == ((void*)0)) {

 }

 VAR_10 = FUNC_1(VAR_8->bst_sysreg, VAR_8->bsh_sysreg, 0x214);
 VAR_10 |= VAR_1;
 FUNC_2(VAR_8->bst_sysreg, VAR_8->bsh_sysreg, 0x214, VAR_10);

 VAR_8->sc_info.fb_width = VAR_7.width;
 VAR_8->sc_info.fb_height = VAR_7.height;
 VAR_8->sc_info.fb_stride = VAR_8->sc_info.fb_width * 2;
 VAR_8->sc_info.fb_bpp = VAR_8->sc_info.fb_depth = 16;
 VAR_8->sc_info.fb_size = VAR_8->sc_info.fb_height * VAR_8->sc_info.fb_stride;
 VAR_8->sc_info.fb_vbase = (intptr_t)FUNC_13(VAR_8->sc_info.fb_size,
     VAR_2, 0, ~0, VAR_3, 0, VAR_4);
 VAR_8->sc_info.fb_pbase = (intptr_t)FUNC_18(VAR_8->sc_info.fb_vbase);







 FUNC_14((int8_t *)VAR_8->sc_info.fb_vbase, 0x0, VAR_8->sc_info.fb_size);

 FUNC_11(VAR_8);

 VAR_8->sc_info.fb_name = FUNC_6(VAR_6);


 VAR_8->sc_fbd = FUNC_5(VAR_6, "fbd", FUNC_8(VAR_6));
 if (VAR_8->sc_fbd == ((void*)0))
  FUNC_9(VAR_6, "Can't attach fbd device\n");

 if (FUNC_10(VAR_8->sc_fbd) != 0) {
  FUNC_9(VAR_8->dev, "Failed to attach fbd device\n");
 }

 return (0);
}
