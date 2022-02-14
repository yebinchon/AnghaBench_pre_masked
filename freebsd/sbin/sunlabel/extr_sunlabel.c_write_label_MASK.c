
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun_disklabel {int sl_ntracks; int sl_nsectors; TYPE_1__* sl_part; int sl_magic; } ;
struct gctl_req {int dummy; } ;
typedef int path ;
typedef int off_t ;
typedef int buf ;
typedef int boot ;
struct TYPE_2__ {scalar_t__ sdkp_nsectors; int sdkp_cyloffset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (struct sun_disklabel*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct gctl_req*) ;
 struct gctl_req* FUNC_7 () ;
 char* FUNC_8 (struct gctl_req*) ;
 int FUNC_9 (struct gctl_req*,char*,int,char const*) ;
 scalar_t__ FUNC_10 (int,int,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_11 (char const*,int ) ;
 int FUNC_12 (struct sun_disklabel*,char const*,int ) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (char*,int,char*,char*,char const*) ;
 int VAR_11 ;
 int FUNC_15 (char*,struct sun_disklabel*) ;
 int FUNC_16 (int,char*,int) ;

__attribute__((used)) static void
FUNC_17(struct sun_disklabel *VAR_12, const char *VAR_13, const char *VAR_14)
{
 char VAR_15[VAR_1];
 char VAR_16[VAR_5];
 char VAR_17[VAR_8];
 const char *VAR_18;
 off_t VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
 struct gctl_req *VAR_23;

 VAR_12->sl_magic = VAR_6;

 if (FUNC_1(VAR_12) != 0)
  FUNC_4(1, "invalid label");

 FUNC_0(VAR_17, sizeof(VAR_17));
 FUNC_15(VAR_17, VAR_12);

 if (VAR_10) {
  FUNC_12(VAR_12, VAR_13, VAR_11);
  return;
 }
 if (VAR_0) {
  if ((VAR_20 = FUNC_11(VAR_14, VAR_2)) < 0)
   FUNC_3(1, "open %s", VAR_14);
  VAR_22 = FUNC_13(VAR_20, VAR_16, sizeof(VAR_16));
  if (VAR_22 < 0)
   FUNC_3(1, "read");
  else if (VAR_22 != sizeof (VAR_16))
   FUNC_4(1, "read wrong size boot code (%d)", VAR_22);
  FUNC_2(VAR_20);
 }
 FUNC_14(VAR_15, sizeof(VAR_15), "%s%s", VAR_9, VAR_13);
 VAR_21 = FUNC_11(VAR_15, VAR_3);
 if (VAR_21 < 0) {
  VAR_23 = FUNC_7();
  FUNC_9(VAR_23, "verb", -1, "write label");
  FUNC_9(VAR_23, "class", -1, "SUN");
  FUNC_9(VAR_23, "geom", -1, VAR_13);
  FUNC_9(VAR_23, "label", sizeof VAR_17, VAR_17);
  VAR_18 = FUNC_8(VAR_23);
  if (VAR_18 != ((void*)0))
   FUNC_4(1, "%s", VAR_18);
  FUNC_6(VAR_23);
  if (VAR_0) {
   VAR_23 = FUNC_7();
   FUNC_9(VAR_23, "verb", -1, "write bootcode");
   FUNC_9(VAR_23, "class", -1, "SUN");
   FUNC_9(VAR_23, "geom", -1, VAR_13);
   FUNC_9(VAR_23, "bootcode", sizeof VAR_16, VAR_16);
   VAR_18 = FUNC_8(VAR_23);
   if (VAR_18 != ((void*)0))
    FUNC_4(1, "%s", VAR_18);
   FUNC_6(VAR_23);
  }
 } else {
  if (FUNC_10(VAR_21, 0, VAR_4) < 0)
   FUNC_3(1, "lseek");
  if (FUNC_16(VAR_21, VAR_17, sizeof(VAR_17)) != sizeof(VAR_17))
   FUNC_3 (1, "write");
  if (VAR_0) {
   for (VAR_22 = 0; VAR_22 < VAR_7; VAR_22++) {
    if (VAR_12->sl_part[VAR_22].sdkp_nsectors == 0)
     continue;
    VAR_19 = VAR_12->sl_part[VAR_22].sdkp_cyloffset *
        VAR_12->sl_ntracks * VAR_12->sl_nsectors * 512;




    if (FUNC_10(VAR_21, VAR_19 + VAR_8, VAR_4) < 0)
     FUNC_3(1, "lseek");
    if (FUNC_16(VAR_21, VAR_16 + VAR_8,
        sizeof(VAR_16) - VAR_8) !=
        sizeof(VAR_16) - VAR_8)
     FUNC_3(1, "write");
   }
  }
  FUNC_2(VAR_21);
 }
 FUNC_5(0);
}
