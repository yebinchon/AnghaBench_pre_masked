
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int width ;
typedef char uint32_t ;
typedef int type ;
struct vt_device {struct creatorfb_softc* vd_softc; } ;
struct TYPE_2__ {char fb_height; char fb_width; int fb_bpp; int fb_depth; int fb_stride; int fb_size; int fb_cmsize; int fb_cmap; int fb_pbase; } ;
struct creatorfb_softc {TYPE_1__ fb; int * memt; int memh; } ;
typedef int phandle_t ;
typedef int name ;
typedef char ihandle_t ;
typedef int height ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ,int*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (char) ;
 char FUNC_5 (char*) ;
 struct creatorfb_softc VAR_4 ;
 int FUNC_6 (int,int ,int *) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (struct vt_device*) ;
 int FUNC_9 (int ,int ,int,int ,int,int,int,int) ;

__attribute__((used)) static int
FUNC_10(struct vt_device *VAR_5)
{
 struct creatorfb_softc *VAR_6;
 phandle_t VAR_7;
 phandle_t VAR_8;
 ihandle_t VAR_9;
 uint32_t VAR_10, VAR_11;
 char VAR_12[64], VAR_13[64];
 bus_addr_t VAR_14;
 int VAR_15;


 VAR_5->vd_softc = VAR_6 = &VAR_4;

 VAR_7 = FUNC_1("/chosen");
 FUNC_2(VAR_7, "stdout", &VAR_9, sizeof(ihandle_t));
 VAR_8 = FUNC_4(VAR_9);
 if (VAR_8 == -1) {




  VAR_8 = FUNC_1("screen");
  VAR_9 = FUNC_5("screen");
 }
 FUNC_2(VAR_8, "device_type", VAR_12, sizeof(VAR_12));
 if (FUNC_7(VAR_12, "display") != 0)
  return (VAR_0);

 FUNC_2(VAR_8, "name", VAR_13, sizeof(VAR_13));
 if (FUNC_7(VAR_13, "SUNW,ffb") != 0 && FUNC_7(VAR_13, "SUNW,afb") != 0)
  return (VAR_0);


 if (FUNC_3(VAR_8, "height") != sizeof(VAR_10) ||
     FUNC_3(VAR_8, "width") != sizeof(VAR_11))
  return (VAR_0);

 FUNC_2(VAR_8, "height", &VAR_10, sizeof(VAR_10));
 FUNC_2(VAR_8, "width", &VAR_11, sizeof(VAR_11));

 VAR_6->fb.fb_height = VAR_10;
 VAR_6->fb.fb_width = VAR_11;
 VAR_6->fb.fb_bpp = VAR_6->fb.fb_depth = 32;
 VAR_6->fb.fb_stride = 8192;
 VAR_6->fb.fb_size = VAR_6->fb.fb_height * VAR_6->fb.fb_stride;


 if (FUNC_0(VAR_8, VAR_3, &VAR_15, &VAR_14) != 0)
  return (VAR_0);
 VAR_6->fb.fb_pbase = VAR_14;
 VAR_6->memh = FUNC_6(VAR_15, VAR_14, &VAR_6->memt[0]);


 FUNC_9(VAR_6->fb.fb_cmap, VAR_2,
     255, 0, 255, 8, 255, 16);
 VAR_6->fb.fb_cmsize = 16;

 FUNC_8(VAR_5);

 return (VAR_1);
}
