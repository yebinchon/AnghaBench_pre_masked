
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fb_width; int fb_height; int fb_depth; int fb_bpp; int fb_stride; int fb_pbase; int fb_size; intptr_t fb_vbase; int fb_name; } ;
struct aml8726_fb_softc {TYPE_1__ info; int * res; scalar_t__ ih_cookie; int dev; } ;
typedef int prop ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_fb_softc*) ;
 int FUNC_1 (struct aml8726_fb_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,char*,int*,int) ;
 int FUNC_3 (struct aml8726_fb_softc*) ;
 int FUNC_4 (struct aml8726_fb_softc*) ;
 int FUNC_5 (struct aml8726_fb_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int ,int,int *,int ,struct aml8726_fb_softc*,scalar_t__*) ;
 int FUNC_9 (int ,int ,scalar_t__) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int ) ;
 struct aml8726_fb_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int,int) ;
 int FUNC_18 (intptr_t,int) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_5)
{
 struct aml8726_fb_softc *VAR_6 = FUNC_12(VAR_5);
 int VAR_7;
 device_t VAR_8;
 pcell_t VAR_9;
 phandle_t VAR_10;

 VAR_6->dev = VAR_5;

 VAR_6->info.fb_name = FUNC_11(VAR_6->dev);

 VAR_10 = FUNC_16(VAR_5);

 if (FUNC_2(VAR_10, "width", &VAR_9, sizeof(VAR_9)) <= 0) {
  FUNC_14(VAR_5, "missing width attribute in FDT\n");
  return (VAR_0);
 }
 if ((VAR_9 % 8) != 0) {
  FUNC_14(VAR_5,
      "width attribute in FDT must be a multiple of 8\n");
  return (VAR_0);
 }
 VAR_6->info.fb_width = VAR_9;

 if (FUNC_2(VAR_10, "height", &VAR_9, sizeof(VAR_9)) <= 0) {
  FUNC_14(VAR_5, "missing height attribute in FDT\n");
  return (VAR_0);
 }
 VAR_6->info.fb_height = VAR_9;

 if (FUNC_2(VAR_10, "depth", &VAR_9, sizeof(VAR_9)) <= 0) {
  FUNC_14(VAR_5, "missing depth attribute in FDT\n");
  return (VAR_0);
 }
 if (VAR_9 != 24) {
  FUNC_14(VAR_5,
      "depth attribute in FDT is an unsupported value\n");
  return (VAR_0);
 }
 VAR_6->info.fb_depth = VAR_9;
 VAR_6->info.fb_bpp = VAR_9;

 if (FUNC_2(VAR_10, "linebytes", &VAR_9, sizeof(VAR_9)) <= 0) {
  FUNC_14(VAR_5, "missing linebytes attribute in FDT\n");
  return (VAR_0);
 }
 if ((VAR_9 % 8) != 0) {
  FUNC_14(VAR_5,
      "linebytes attribute in FDT must be a multiple of 8\n");
  return (VAR_0);
 }
 if (VAR_9 < (VAR_6->info.fb_width * 3)) {
  FUNC_14(VAR_5,
      "linebytes attribute in FDT is too small\n");
  return (VAR_0);
 }
 VAR_6->info.fb_stride = VAR_9;

 if (FUNC_2(VAR_10, "address", &VAR_9, sizeof(VAR_9)) <= 0) {
  FUNC_14(VAR_5, "missing address attribute in FDT\n");
  return (VAR_0);
 }
 if ((VAR_9 % 8) != 0) {
  FUNC_14(VAR_5,
      "address attribute in FDT must be a multiple of 8\n");
  return (VAR_0);
 }
 VAR_6->info.fb_pbase = VAR_9;
 VAR_6->info.fb_size = VAR_6->info.fb_height * VAR_6->info.fb_stride;
 VAR_6->info.fb_vbase = (intptr_t)FUNC_17(VAR_6->info.fb_pbase,
     VAR_6->info.fb_size);

 if (FUNC_6(VAR_5, VAR_4, VAR_6->res)) {
  FUNC_14(VAR_5, "could not allocate resources for device\n");
  FUNC_18(VAR_6->info.fb_vbase, VAR_6->info.fb_size);
  return (VAR_0);
 }

 FUNC_4(VAR_6);

 FUNC_5(VAR_6);

 FUNC_3(VAR_6);

 FUNC_1(VAR_6);

 VAR_7 = FUNC_8(VAR_5, VAR_6->res[3], VAR_2 | VAR_1,
     ((void*)0), VAR_3, VAR_6, &VAR_6->ih_cookie);

 if (VAR_7) {
  FUNC_14(VAR_5, "could not setup interrupt handler\n");
  goto fail;
 }

 VAR_8 = FUNC_10(VAR_5, "fbd", FUNC_13(VAR_5));

 if (!VAR_8) {
  FUNC_14(VAR_5, "could not add fbd\n");
  VAR_7 = VAR_0;
  goto fail;
 }

 VAR_7 = FUNC_15(VAR_8);

 if (VAR_7) {
  FUNC_14(VAR_5, "could not attach fbd\n");
  goto fail;
 }

 return (0);

fail:
 if (VAR_6->ih_cookie)
  FUNC_9(VAR_5, VAR_6->res[3], VAR_6->ih_cookie);

 FUNC_0(VAR_6);

 FUNC_7(VAR_5, VAR_4, VAR_6->res);

 FUNC_18(VAR_6->info.fb_vbase, VAR_6->info.fb_size);

 return (VAR_7);
}
