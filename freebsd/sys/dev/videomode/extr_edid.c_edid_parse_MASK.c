
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct videomode {int dot_clock; } ;
struct TYPE_3__ {int er_max_clock; } ;
struct TYPE_4__ {int ec_whitey; int ec_whitex; int ec_bluey; int ec_bluex; int ec_greeny; int ec_greenx; void* ec_redy; void* ec_redx; } ;
struct edid_info {int edid_product; char* edid_vendorname; char* edid_productname; char* edid_serial; size_t edid_nmodes; char* edid_comment; TYPE_1__ edid_range; scalar_t__ edid_have_range; struct videomode* edid_modes; int * edid_preferred_mode; int edid_ext_block_count; TYPE_2__ edid_chroma; int edid_features; int edid_gamma; int edid_max_vsize; int edid_max_hsize; int edid_video_input; int edid_revision; int edid_version; int edid_year; int edid_week; int * edid_vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 void* FUNC_4 (int*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 int FUNC_8 (int*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int*) ;
 int FUNC_15 (int*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_16 (int*) ;
 int FUNC_17 (int*) ;
 int VAR_5 ;
 int FUNC_18 (int*) ;
 int FUNC_19 (int*) ;
 int FUNC_20 (int*) ;
 int FUNC_21 (int*) ;
 int FUNC_22 (int*) ;
 char** VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_23 (struct edid_info*,int*) ;
 char* FUNC_24 (int *,int) ;
 char* FUNC_25 (int *) ;
 scalar_t__ FUNC_26 (int*) ;
 struct videomode* FUNC_27 (char*) ;
 struct videomode* FUNC_28 (struct edid_info*,struct videomode*) ;
 scalar_t__ FUNC_29 (int*,struct videomode*) ;
 int FUNC_30 (char*) ;
 int FUNC_31 (char*,...) ;
 int FUNC_32 (char*,int,char*,int) ;
 int FUNC_33 (char*,char const*,int) ;

int
FUNC_34(uint8_t *VAR_8, struct edid_info *VAR_9)
{
 uint16_t VAR_10, VAR_11;
 const struct videomode *VAR_12;
 int VAR_13;
 const char *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 if (FUNC_26(VAR_8) != 0)
  return -1;


 VAR_10 = FUNC_18(VAR_8);
 VAR_9->edid_vendor[0] = FUNC_11(VAR_10);
 VAR_9->edid_vendor[1] = FUNC_12(VAR_10);
 VAR_9->edid_vendor[2] = FUNC_13(VAR_10);
 VAR_9->edid_vendor[3] = 0;

 VAR_9->edid_product = VAR_8[VAR_3] +
     (VAR_8[VAR_3 + 1] << 8);

 VAR_14 = FUNC_25(VAR_9->edid_vendor);
 if (VAR_14 != ((void*)0))
  FUNC_33(VAR_9->edid_vendorname, VAR_14,
      sizeof(VAR_9->edid_vendorname));
 else
  VAR_9->edid_vendorname[0] = '\0';

 VAR_14 = FUNC_24(VAR_9->edid_vendor, VAR_9->edid_product);
 if (VAR_14 != ((void*)0))
  FUNC_33(VAR_9->edid_productname, VAR_14,
      sizeof(VAR_9->edid_productname));
 else
     VAR_9->edid_productname[0] = '\0';

 FUNC_32(VAR_9->edid_serial, sizeof(VAR_9->edid_serial), "%08x",
     FUNC_17(VAR_8));

 VAR_9->edid_week = FUNC_21(VAR_8);
 VAR_9->edid_year = FUNC_22(VAR_8);


 VAR_9->edid_version = FUNC_19(VAR_8);
 VAR_9->edid_revision = FUNC_16(VAR_8);

 VAR_9->edid_video_input = FUNC_20(VAR_8);
 VAR_9->edid_max_hsize = FUNC_14(VAR_8);
 VAR_9->edid_max_vsize = FUNC_15(VAR_8);

 VAR_9->edid_gamma = FUNC_10(VAR_8);
 VAR_9->edid_features = FUNC_9(VAR_8);

 VAR_9->edid_chroma.ec_redx = FUNC_4(VAR_8);
 VAR_9->edid_chroma.ec_redy = FUNC_4(VAR_8);
 VAR_9->edid_chroma.ec_greenx = FUNC_2(VAR_8);
 VAR_9->edid_chroma.ec_greeny = FUNC_3(VAR_8);
 VAR_9->edid_chroma.ec_bluex = FUNC_0(VAR_8);
 VAR_9->edid_chroma.ec_bluey = FUNC_1(VAR_8);
 VAR_9->edid_chroma.ec_whitex = FUNC_5(VAR_8);
 VAR_9->edid_chroma.ec_whitey = FUNC_6(VAR_8);

 VAR_9->edid_ext_block_count = FUNC_8(VAR_8);


 VAR_9->edid_nmodes = 0;
 VAR_9->edid_preferred_mode = ((void*)0);
 VAR_11 = FUNC_7(VAR_8);

 for (VAR_13 = 15; VAR_13 >= 0; VAR_13--) {
  if (VAR_11 & (1 << VAR_13)) {
   VAR_12 = FUNC_27(VAR_6[VAR_13]);
   if (VAR_12 != ((void*)0)) {
    VAR_9->edid_modes[VAR_9->edid_nmodes] = *VAR_12;
    VAR_9->edid_nmodes++;
   }





  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  struct videomode VAR_17, *VAR_18;
  if (FUNC_29(VAR_8 + VAR_4 + VAR_13 * 2,
   &VAR_17)) {

   VAR_18 = FUNC_28(VAR_9, &VAR_17);
   if (VAR_18 == ((void*)0)) {
    VAR_9->edid_modes[VAR_9->edid_nmodes] = VAR_17;
    VAR_9->edid_nmodes++;
   }
  }
 }


 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  FUNC_23(VAR_9, VAR_8 + VAR_2 +
      VAR_13 * VAR_1);
 }

 FUNC_30(VAR_9->edid_vendorname);
 FUNC_30(VAR_9->edid_productname);
 FUNC_30(VAR_9->edid_serial);
 FUNC_30(VAR_9->edid_comment);
 for (VAR_13 = 0; VAR_13 < VAR_9->edid_nmodes; VAR_13++)
  if (VAR_9->edid_modes[VAR_13].dot_clock > VAR_15)
   VAR_15 = VAR_9->edid_modes[VAR_13].dot_clock;
 if (VAR_7) {
  FUNC_31("edid: max_dotclock according to supported modes: %d\n",
      VAR_15);
 }
 VAR_16 = (VAR_15 + 999) / 1000;

 if (VAR_9->edid_have_range) {
  if (VAR_16 > VAR_9->edid_range.er_max_clock)
   VAR_9->edid_range.er_max_clock = VAR_16;
 } else
  VAR_9->edid_range.er_max_clock = VAR_16;

 return 0;
}
