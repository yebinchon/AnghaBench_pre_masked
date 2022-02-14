
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t u_int ;
struct sun_disklabel {size_t sl_rpm; size_t sl_pcylinders; size_t sl_sparespercyl; size_t sl_interleave; size_t sl_ncylinders; size_t sl_acylinders; size_t sl_ntracks; size_t sl_nsectors; size_t sl_magic; scalar_t__ sl_vtoc_sane; size_t sl_vtoc_nparts; scalar_t__ sl_vtoc_vers; TYPE_2__* sl_vtoc_map; int sl_vtoc_volname; TYPE_1__* sl_part; int * sl_text; } ;
struct TYPE_4__ {size_t svtoc_tag; size_t svtoc_flag; } ;
struct TYPE_3__ {scalar_t__ sdkp_cyloffset; scalar_t__ sdkp_nsectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 size_t VAR_26 ;
 int VAR_27 ;
 size_t FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int ,int ) ;

void
FUNC_4(void *VAR_28, struct sun_disklabel *VAR_29)
{
 uint8_t *VAR_30;
 size_t VAR_31;
 u_int VAR_32;

 VAR_30 = VAR_28;
 for (VAR_31 = 0; VAR_31 < VAR_15; VAR_31++)
  VAR_30[VAR_14 + VAR_31] = VAR_29->sl_text[VAR_31];
 FUNC_1(VAR_30 + VAR_12, VAR_29->sl_rpm);
 FUNC_1(VAR_30 + VAR_11, VAR_29->sl_pcylinders);
 FUNC_1(VAR_30 + VAR_13, VAR_29->sl_sparespercyl);
 FUNC_1(VAR_30 + VAR_5, VAR_29->sl_interleave);
 FUNC_1(VAR_30 + VAR_7, VAR_29->sl_ncylinders);
 FUNC_1(VAR_30 + VAR_3, VAR_29->sl_acylinders);
 FUNC_1(VAR_30 + VAR_9, VAR_29->sl_ntracks);
 FUNC_1(VAR_30 + VAR_8, VAR_29->sl_nsectors);
 for (VAR_31 = 0; VAR_31 < VAR_21; VAR_31++) {
  FUNC_2(VAR_30 + VAR_10 + (VAR_31 * VAR_2) + VAR_0,
      VAR_29->sl_part[VAR_31].sdkp_cyloffset);
  FUNC_2(VAR_30 + VAR_10 + (VAR_31 * VAR_2) + VAR_1,
      VAR_29->sl_part[VAR_31].sdkp_nsectors);
 }
 FUNC_1(VAR_30 + VAR_6, VAR_29->sl_magic);
 if (VAR_29->sl_vtoc_sane == VAR_24
     && VAR_29->sl_vtoc_nparts == VAR_21) {



  FUNC_2(VAR_30 + VAR_19, VAR_29->sl_vtoc_vers);
  FUNC_2(VAR_30 + VAR_18, VAR_24);
  FUNC_3(VAR_30 + VAR_20, VAR_29->sl_vtoc_volname,
      VAR_23);
  FUNC_1(VAR_30 + VAR_17, VAR_21);
  for (VAR_31 = 0; VAR_31 < VAR_21; VAR_31++) {
   FUNC_1(VAR_30 + VAR_16 + (VAR_31 * VAR_26)
    + VAR_27,
    VAR_29->sl_vtoc_map[VAR_31].svtoc_tag);
   FUNC_1(VAR_30 + VAR_16 + (VAR_31 * VAR_26)
    + VAR_25,
    VAR_29->sl_vtoc_map[VAR_31].svtoc_flag);
  }
 }
 for (VAR_31 = VAR_32 = 0; VAR_31 < VAR_22; VAR_31 += 2)
  VAR_32 ^= FUNC_0(VAR_30 + VAR_31);
 FUNC_1(VAR_30 + VAR_4, VAR_32);
}
