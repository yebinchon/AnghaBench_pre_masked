
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct sun_disklabel {scalar_t__ sl_vtoc_sane; int sl_ncylinders; int sl_ntracks; int sl_nsectors; TYPE_2__* sl_part; TYPE_1__* sl_vtoc_map; } ;
struct TYPE_4__ {scalar_t__ sdkp_cyloffset; int sdkp_nsectors; } ;
struct TYPE_3__ {scalar_t__ svtoc_tag; int svtoc_flag; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(struct sun_disklabel *VAR_5)
{
 uint64_t VAR_6;
 uint64_t VAR_7;
 uint64_t VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_11 = VAR_5->sl_vtoc_sane == VAR_2;

 VAR_6 = VAR_5->sl_ncylinders * VAR_5->sl_ntracks * VAR_5->sl_nsectors;
 if (VAR_5->sl_part[VAR_1].sdkp_cyloffset != 0 ||
     VAR_5->sl_part[VAR_1].sdkp_nsectors != VAR_6) {
  FUNC_0("partition c is incorrect, must start at 0 and cover "
      "whole disk");
  return (1);
 }
 if (VAR_11 && VAR_5->sl_vtoc_map[2].svtoc_tag != VAR_3) {
  FUNC_0("partition c must have tag \"backup\"");
  return (1);
 }
 for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++) {
  if (VAR_13 == 2 || VAR_5->sl_part[VAR_13].sdkp_nsectors == 0)
   continue;
  VAR_8 = (uint64_t)VAR_5->sl_part[VAR_13].sdkp_cyloffset *
      VAR_5->sl_ntracks * VAR_5->sl_nsectors;
  VAR_10 = VAR_8 + VAR_5->sl_part[VAR_13].sdkp_nsectors;
  if (VAR_10 > VAR_6) {
   FUNC_0("partition %c extends past end of disk",
       'a' + VAR_13);
   return (1);
  }
  if (VAR_11) {
   if (VAR_5->sl_vtoc_map[VAR_13].svtoc_tag == VAR_3) {
    FUNC_0("only partition c is allowed to have "
        "tag \"backup\"");
    return (1);
   }
  }
  for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {




   VAR_12 = VAR_11 &&
    ((VAR_5->sl_vtoc_map[VAR_13].svtoc_flag & VAR_4) != 0 ||
     (VAR_5->sl_vtoc_map[VAR_14].svtoc_flag & VAR_4) != 0);

   if (VAR_14 == 2 || VAR_14 == VAR_13 ||
       VAR_5->sl_part[VAR_14].sdkp_nsectors == 0)
    continue;
   VAR_7 = (uint64_t)VAR_5->sl_part[VAR_14].sdkp_cyloffset *
       VAR_5->sl_ntracks * VAR_5->sl_nsectors;
   VAR_9 = VAR_7 + VAR_5->sl_part[VAR_14].sdkp_nsectors;
   if ((VAR_8 <= VAR_7 && VAR_10 >= VAR_9) ||
       (VAR_8 > VAR_7 && VAR_8 < VAR_9) ||
       (VAR_10 > VAR_7 && VAR_10 < VAR_9)) {
    FUNC_0("partition %c overlaps partition %c",
        'a' + VAR_13, 'a' + VAR_14);
    if (!VAR_12)
     return (1);
   }
  }
 }
 return (0);
}
