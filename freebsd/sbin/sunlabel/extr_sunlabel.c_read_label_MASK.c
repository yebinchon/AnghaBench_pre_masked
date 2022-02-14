
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sun_disklabel {int sl_rpm; int sl_pcylinders; int sl_interleave; int sl_ncylinders; int sl_acylinders; int sl_nsectors; int sl_ntracks; int sl_text; TYPE_1__* sl_part; scalar_t__ sl_sparespercyl; } ;
typedef int path ;
typedef long off_t ;
typedef int intmax_t ;
typedef int buf ;
struct TYPE_2__ {int sdkp_nsectors; scalar_t__ sdkp_cyloffset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_0 (struct sun_disklabel*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (int,int ,int*) ;
 int VAR_9 ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int,char*,int) ;
 int VAR_10 ;
 int FUNC_6 (char*,int,char*,char*,char const*) ;
 int FUNC_7 (int ,char*,int,int,int,int,int) ;
 int FUNC_8 (char*,struct sun_disklabel*) ;

__attribute__((used)) static void
FUNC_9(struct sun_disklabel *VAR_11, const char *VAR_12)
{
 char VAR_13[VAR_4];
 uint32_t VAR_14;
 uint32_t VAR_15;
 char VAR_16[VAR_7];
 int VAR_17, VAR_18;

 FUNC_6(VAR_13, sizeof(VAR_13), "%s%s", VAR_8, VAR_12);
 if ((VAR_17 = FUNC_4(VAR_13, VAR_5)) < 0)
  FUNC_2(1, "open %s", VAR_13);
 if (FUNC_5(VAR_17, VAR_16, sizeof(VAR_16)) != sizeof(VAR_16))
  FUNC_2(1, "read");
 VAR_18 = FUNC_8(VAR_16, VAR_11);
 if (FUNC_3(VAR_17, VAR_2, &VAR_9) != 0)
  if (VAR_18)
   FUNC_2(1, "%s: ioctl(DIOCGMEDIASIZE) failed", VAR_12);
 if (FUNC_3(VAR_17, VAR_3, &VAR_10) != 0) {
  if (VAR_18)
   FUNC_2(1, "%s: DIOCGSECTORSIZE failed", VAR_12);
  else
   VAR_10 = 512;
 }
 if (VAR_18) {
  FUNC_0(VAR_11, sizeof(*VAR_11));
  if (FUNC_3(VAR_17, VAR_1, &VAR_14) != 0)
   VAR_14 = 63;
  if (FUNC_3(VAR_17, VAR_0, &VAR_15) != 0) {
   if (VAR_9 <= 63 * 1024 * VAR_10)
    VAR_15 = 1;
   else if (VAR_9 <= 63 * 16 * 1024 * VAR_10)
    VAR_15 = 16;
   else
    VAR_15 = 255;
  }
  VAR_11->sl_rpm = 3600;
  VAR_11->sl_pcylinders = VAR_9 / (VAR_14 * VAR_15 *
      VAR_10);
  VAR_11->sl_sparespercyl = 0;
  VAR_11->sl_interleave = 1;
  VAR_11->sl_ncylinders = VAR_11->sl_pcylinders - 2;
  VAR_11->sl_acylinders = 2;
  VAR_11->sl_nsectors = VAR_14;
  VAR_11->sl_ntracks = VAR_15;
  VAR_11->sl_part[VAR_6].sdkp_cyloffset = 0;
  VAR_11->sl_part[VAR_6].sdkp_nsectors = VAR_11->sl_ncylinders *
      VAR_11->sl_ntracks * VAR_11->sl_nsectors;
  if (VAR_9 > (off_t)4999L * 1024L * 1024L) {
   FUNC_7(VAR_11->sl_text,
       "FreeBSD%jdG cyl %u alt %u hd %u sec %u",
       (intmax_t)(VAR_9 + 512 * 1024 * 1024) /
           (1024 * 1024 * 1024),
       VAR_11->sl_ncylinders, VAR_11->sl_acylinders,
       VAR_11->sl_ntracks, VAR_11->sl_nsectors);
  } else {
   FUNC_7(VAR_11->sl_text,
       "FreeBSD%jdM cyl %u alt %u hd %u sec %u",
       (intmax_t)(VAR_9 + 512 * 1024) / (1024 * 1024),
       VAR_11->sl_ncylinders, VAR_11->sl_acylinders,
       VAR_11->sl_ntracks, VAR_11->sl_nsectors);
  }
 }
 FUNC_1(VAR_17);
}
