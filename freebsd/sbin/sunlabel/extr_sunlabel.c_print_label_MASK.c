
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
struct sun_disklabel {scalar_t__ sl_vtoc_sane; int sl_nsectors; int sl_ntracks; char* sl_text; int sl_ncylinders; char* sl_vtoc_volname; TYPE_2__* sl_vtoc_map; TYPE_1__* sl_part; } ;
struct TYPE_4__ {int svtoc_flag; int svtoc_tag; } ;
struct TYPE_3__ {int sdkp_nsectors; scalar_t__ sdkp_cyloffset; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (char) ;
 char* FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char,int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_5 (char*,char*,char) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct sun_disklabel *VAR_8, const char *VAR_9, FILE *VAR_10)
{
 int VAR_11, VAR_12;
 int VAR_13;
 uintmax_t VAR_14;

 char VAR_15[4 * VAR_1 + 1];

 VAR_13 = VAR_8->sl_vtoc_sane == VAR_2;
 VAR_14 = VAR_8->sl_nsectors * VAR_8->sl_ntracks;

 FUNC_1(VAR_10,
"# /dev/%s:\n"
"text: %s\n"
"bytes/sector: %d\n"
"sectors/cylinder: %ju\n",
     VAR_9,
     VAR_8->sl_text,
     VAR_7,
     VAR_14);
 if (VAR_4)
  FUNC_1(VAR_10,
      "# max sectors/unit (including alt cylinders): %ju\n",
      (uintmax_t)VAR_6 / VAR_7);
 FUNC_1(VAR_10,
"sectors/unit: %ju\n",
     VAR_14 * VAR_8->sl_ncylinders);
 if (VAR_13 && VAR_8->sl_vtoc_volname[0] != '\0') {
  for (VAR_11 = VAR_12 = 0; VAR_11 < VAR_1; VAR_11++) {
   if (VAR_8->sl_vtoc_volname[VAR_11] == '\0')
    break;
   if (FUNC_2(VAR_8->sl_vtoc_volname[VAR_11]))
    VAR_15[VAR_12++] = VAR_8->sl_vtoc_volname[VAR_11];
   else
    VAR_12 += FUNC_5(VAR_15 + VAR_12, "\\x%02X",
        VAR_8->sl_vtoc_volname[VAR_11]);
  }
  VAR_15[VAR_12] = '\0';
  FUNC_1(VAR_10, "volume name: %s\n", VAR_15);
 }
 FUNC_1(VAR_10,
"\n"
"%d partitions:\n"
"#\n",
     VAR_0);
 if (!VAR_5) {
  FUNC_1(VAR_10, "# Size is in %s.", VAR_3? "cylinders": "sectors");
  if (VAR_4)
   FUNC_1(VAR_10,
"  Use %%d%c, %%dK, %%dM or %%dG to specify in %s,\n"
"# kilobytes, megabytes or gigabytes respectively, or '*' to specify rest of\n"
"# disk.\n",
       VAR_3? 's': 'c',
       VAR_3? "sectors": "cylinders");
  else
   FUNC_4('\n', VAR_10);
  FUNC_1(VAR_10, "# Offset is in cylinders.");
  if (VAR_4)
   FUNC_1(VAR_10,
"  Use '*' to calculate offsets automatically.\n"
"#\n");
  else
   FUNC_4('\n', VAR_10);
 }
 if (VAR_13)
  FUNC_1(VAR_10,
"#    size       offset      tag         flag\n"
"#    ---------- ----------  ----------  ----\n"
   );
 else
  FUNC_1(VAR_10,
"#    size       offset\n"
"#    ---------- ----------\n"
   );

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (VAR_8->sl_part[VAR_11].sdkp_nsectors == 0)
   continue;
  if (VAR_5) {
   FUNC_1(VAR_10, "  %c: %10s",
       'a' + VAR_11,
       FUNC_3((uintmax_t)
    VAR_8->sl_part[VAR_11].sdkp_nsectors * 512));
   FUNC_1(VAR_10, " %10s",
       FUNC_3((uintmax_t)
    VAR_8->sl_part[VAR_11].sdkp_cyloffset * 512
    * VAR_14));
  } else {
   FUNC_1(VAR_10, "  %c: %10ju %10u",
       'a' + VAR_11,
       VAR_8->sl_part[VAR_11].sdkp_nsectors / (VAR_3? VAR_14: 1),
       VAR_8->sl_part[VAR_11].sdkp_cyloffset);
  }
  if (VAR_13)
   FUNC_1(VAR_10, " %11s %5s",
       FUNC_6(VAR_8->sl_vtoc_map[VAR_11].svtoc_tag),
       FUNC_0(VAR_8->sl_vtoc_map[VAR_11].svtoc_flag));
  FUNC_4('\n', VAR_10);
 }
}
