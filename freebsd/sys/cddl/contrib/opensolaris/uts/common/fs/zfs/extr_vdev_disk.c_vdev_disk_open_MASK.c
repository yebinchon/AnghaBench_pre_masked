
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {void* vs_aux; } ;
struct TYPE_12__ {char* vdev_path; char* vdev_devid; unsigned long long vdev_wholedisk; char* vdev_physpath; void* vdev_nowritecache; TYPE_1__ vdev_stat; TYPE_3__* vdev_tsd; int vdev_reopening; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_13__ {int * vd_lh; int vd_ldi_cbs; int vd_minor; int vd_devid; scalar_t__ vd_ldi_offline; } ;
typedef TYPE_3__ vdev_disk_t ;
struct TYPE_14__ {int lcb_id; } ;
typedef TYPE_4__ vdev_disk_ldi_cb_t ;
typedef int uint64_t ;
struct dk_minfo_ext {int dki_capacity; int dki_lbsize; int dki_pbsize; } ;
struct dk_minfo {int dki_capacity; int dki_lbsize; } ;
typedef int spa_t ;
typedef int ldi_ev_cookie_t ;
typedef int dev_t ;
typedef int ddi_devid_t ;
typedef void* boolean_t ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int) ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (int ,char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (int ,int,char*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (char*,int *,int *) ;
 char* FUNC_9 (int ,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ) ;
 int VAR_19 ;
 char* FUNC_13 (int,int ) ;
 int FUNC_14 (char*,int) ;
 TYPE_4__* FUNC_15 (int,int ) ;
 int FUNC_16 (int *,int ,int ) ;
 scalar_t__ FUNC_17 (int *,int ,int *) ;
 int FUNC_18 (int *,int ,int *,void*,int *) ;
 scalar_t__ FUNC_19 (int *,int *) ;
 scalar_t__ FUNC_20 (int *,int *) ;
 scalar_t__ FUNC_21 (int *,char**) ;
 scalar_t__ FUNC_22 (int *,int*) ;
 scalar_t__ FUNC_23 (int *,int*) ;
 int FUNC_24 (int *,int ,intptr_t,int ,int ,int *) ;
 int FUNC_25 (int *,int ,int ,int ,int **,int ) ;
 int FUNC_26 (int ,int ,int ,int ,int **,int ) ;
 int FUNC_27 (char*,int ,int ,int **,int ) ;
 int FUNC_28 (int *,TYPE_4__*) ;
 int FUNC_29 (char*,size_t,char*,char*) ;
 int FUNC_30 (int *) ;
 void* FUNC_31 (char*) ;
 int FUNC_32 (char*) ;
 scalar_t__ FUNC_33 (int *) ;
 scalar_t__ FUNC_34 (char*,char*) ;
 int FUNC_35 (char*,char*,int) ;
 int FUNC_36 (char*) ;
 int FUNC_37 (TYPE_2__*,char*,...) ;
 int FUNC_38 (TYPE_2__*) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_39 (TYPE_2__*) ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int
FUNC_40(vdev_t *VAR_24, uint64_t *VAR_25, uint64_t *VAR_26,
    uint64_t *VAR_27)
{
 spa_t *VAR_28 = VAR_24->vdev_spa;
 vdev_disk_t *VAR_29 = VAR_24->vdev_tsd;
 ldi_ev_cookie_t VAR_30;
 vdev_disk_ldi_cb_t *VAR_31;
 union {
  struct dk_minfo_ext ude;
  struct dk_minfo ud;
 } VAR_32;
 struct dk_minfo_ext *VAR_33 = &VAR_32.ude;
 struct dk_minfo *VAR_34 = &VAR_32.ud;
 int VAR_35;
 dev_t VAR_36;
 int VAR_37;
 boolean_t VAR_38 = VAR_0;
 ddi_devid_t VAR_39;
 uint64_t VAR_40 = 0, VAR_41 = 0, VAR_42;




 if (VAR_24->vdev_path == ((void*)0) || VAR_24->vdev_path[0] != '/') {
  VAR_24->vdev_stat.vs_aux = VAR_17;
  return (FUNC_2(VAR_7));
 }





 if (VAR_29 != ((void*)0)) {
  if (VAR_29->vd_ldi_offline && VAR_29->vd_lh == ((void*)0)) {





   FUNC_39(VAR_24);
  } else {
   FUNC_0(VAR_24->vdev_reopening);
   goto skip_open;
  }
 }




 FUNC_38(VAR_24);
 VAR_29 = VAR_24->vdev_tsd;




 if (VAR_24->vdev_devid != ((void*)0) && VAR_20) {
  FUNC_37(VAR_24, "vdev_disk_open, devid %s bypassed",
      VAR_24->vdev_devid);
  FUNC_32(VAR_24->vdev_devid);
  VAR_24->vdev_devid = ((void*)0);
 }
 if (VAR_24->vdev_devid != ((void*)0)) {
  if (FUNC_8(VAR_24->vdev_devid, &VAR_29->vd_devid,
      &VAR_29->vd_minor) != 0) {
   VAR_24->vdev_stat.vs_aux = VAR_17;
   FUNC_37(VAR_24, "vdev_disk_open: invalid "
       "vdev_devid '%s'", VAR_24->vdev_devid);
   return (FUNC_2(VAR_7));
  }
 }

 VAR_35 = VAR_7;

 if (VAR_24->vdev_path != ((void*)0)) {

  if (VAR_24->vdev_wholedisk == -1ULL) {
   size_t VAR_43 = FUNC_36(VAR_24->vdev_path) + 3;
   char *VAR_44 = FUNC_13(VAR_43, VAR_9);

   (void) FUNC_29(VAR_44, VAR_43, "%ss0", VAR_24->vdev_path);

   VAR_35 = FUNC_27(VAR_44, FUNC_30(VAR_28), VAR_19,
       &VAR_29->vd_lh, VAR_23);
   if (VAR_35 == 0) {
    FUNC_32(VAR_24->vdev_path);
    VAR_24->vdev_path = VAR_44;
    VAR_24->vdev_wholedisk = 1ULL;
   } else {
    FUNC_14(VAR_44, VAR_43);
   }
  }





  if (VAR_35 != 0) {
   VAR_35 = FUNC_27(VAR_24->vdev_path, FUNC_30(VAR_28),
       VAR_19, &VAR_29->vd_lh, VAR_23);
  }




  if (VAR_35 == 0 && VAR_24->vdev_devid != ((void*)0) &&
      FUNC_20(VAR_29->vd_lh, &VAR_39) == 0) {
   if (FUNC_6(VAR_39, VAR_29->vd_devid) != 0) {



    char *VAR_45 = FUNC_9(VAR_39,
        VAR_29->vd_minor);
    FUNC_37(VAR_24, "vdev_disk_open: devid "
        "mismatch: %s != %s", VAR_24->vdev_devid,
        VAR_45);
    FUNC_4(VAR_2, "vdev_disk_open %s: devid "
        "mismatch: %s != %s", VAR_24->vdev_path,
        VAR_24->vdev_devid, VAR_45);
    FUNC_10(VAR_45);

    VAR_35 = FUNC_2(VAR_7);
    (void) FUNC_16(VAR_29->vd_lh, FUNC_30(VAR_28),
        VAR_19);
    VAR_29->vd_lh = ((void*)0);
   }
   FUNC_7(VAR_39);
  }





  if (VAR_35 == 0 && VAR_24->vdev_wholedisk == -1ULL)
   VAR_24->vdev_wholedisk = 0;
 }





 if (VAR_35 != 0 && VAR_24->vdev_devid != ((void*)0)) {
  VAR_35 = FUNC_26(VAR_29->vd_devid, VAR_29->vd_minor,
      FUNC_30(VAR_28), VAR_19, &VAR_29->vd_lh, VAR_23);
  if (VAR_35 != 0) {
   FUNC_37(VAR_24, "Failed to open by devid (%s)",
       VAR_24->vdev_devid);
  }
 }







 if (VAR_35) {
  if (VAR_24->vdev_devid != ((void*)0))
   VAR_38 = VAR_1;

  if (VAR_24->vdev_physpath != ((void*)0) &&
      (VAR_36 = FUNC_11(VAR_24->vdev_physpath)) != VAR_14)
   VAR_35 = FUNC_25(&VAR_36, VAR_15, FUNC_30(VAR_28),
       VAR_19, &VAR_29->vd_lh, VAR_23);






  if (VAR_35 && VAR_24->vdev_path != ((void*)0))
   VAR_35 = FUNC_27(VAR_24->vdev_path, FUNC_30(VAR_28),
       VAR_19, &VAR_29->vd_lh, VAR_23);
 }

 if (VAR_35) {
  VAR_24->vdev_stat.vs_aux = VAR_18;
  FUNC_37(VAR_24, "vdev_disk_open: failed to open [error=%d]",
      VAR_35);
  return (VAR_35);
 }





 if (VAR_38 && FUNC_33(VAR_28) &&
     FUNC_20(VAR_29->vd_lh, &VAR_39) == 0) {
  if (FUNC_6(VAR_39, VAR_29->vd_devid) != 0) {
   char *VAR_46;

   VAR_46 = FUNC_9(VAR_39, VAR_29->vd_minor);
   FUNC_37(VAR_24, "vdev_disk_open: update devid from "
       "'%s' to '%s'", VAR_24->vdev_devid, VAR_46);
   FUNC_4(VAR_2, "vdev_disk_open %s: update devid "
       "from '%s' to '%s'", VAR_24->vdev_path != ((void*)0) ?
       VAR_24->vdev_path : "?", VAR_24->vdev_devid, VAR_46);
   FUNC_32(VAR_24->vdev_devid);
   VAR_24->vdev_devid = FUNC_31(VAR_46);
   FUNC_10(VAR_46);
  }
  FUNC_7(VAR_39);
 }





 if (FUNC_19(VAR_29->vd_lh, &VAR_36) == 0 &&
     FUNC_22(VAR_29->vd_lh, &VAR_37) == 0) {
  char *VAR_47, *VAR_48;

  VAR_47 = FUNC_13(VAR_13, VAR_9);
  VAR_48 = ((void*)0);
  if (FUNC_5(VAR_36, VAR_37, VAR_47) == 0 &&
      FUNC_21(VAR_29->vd_lh, &VAR_48) == 0 &&
      (VAR_24->vdev_physpath == ((void*)0) ||
      FUNC_34(VAR_24->vdev_physpath, VAR_47) != 0)) {
   if (VAR_24->vdev_physpath)
    FUNC_32(VAR_24->vdev_physpath);
   (void) FUNC_35(VAR_47, ":", VAR_13);
   (void) FUNC_35(VAR_47, VAR_48, VAR_13);
   VAR_24->vdev_physpath = FUNC_31(VAR_47);
  }
  if (VAR_48)
   FUNC_14(VAR_48, FUNC_36(VAR_48) + 1);
  FUNC_14(VAR_47, VAR_13);
 }




 if (FUNC_17(VAR_29->vd_lh, VAR_11, &VAR_30) ==
     VAR_12) {
  VAR_31 = FUNC_15(sizeof (vdev_disk_ldi_cb_t), VAR_9);
  FUNC_28(&VAR_29->vd_ldi_cbs, VAR_31);
  (void) FUNC_18(VAR_29->vd_lh, VAR_30,
      &VAR_22, (void *) VAR_24, &VAR_31->lcb_id);
 }




 if (FUNC_17(VAR_29->vd_lh, VAR_10, &VAR_30) ==
     VAR_12) {
  VAR_31 = FUNC_15(sizeof (vdev_disk_ldi_cb_t), VAR_9);
  FUNC_28(&VAR_29->vd_ldi_cbs, VAR_31);
  (void) FUNC_18(VAR_29->vd_lh, VAR_30,
      &VAR_21, (void *) VAR_24, &VAR_31->lcb_id);
 }
skip_open:



 if (FUNC_23(VAR_29->vd_lh, VAR_25) != 0) {
  VAR_24->vdev_stat.vs_aux = VAR_18;
  FUNC_37(VAR_24, "vdev_disk_open: failed to get size");
  return (FUNC_2(VAR_7));
 }

 *VAR_26 = *VAR_25;





 if ((VAR_35 = FUNC_24(VAR_29->vd_lh, VAR_5,
     (intptr_t)VAR_33, VAR_8, VAR_19, ((void*)0))) == 0) {
  VAR_40 = VAR_33->dki_capacity - 1;
  VAR_41 = VAR_33->dki_lbsize;
  VAR_42 = VAR_33->dki_pbsize;
 } else if ((VAR_35 = FUNC_24(VAR_29->vd_lh, VAR_4,
     (intptr_t)VAR_34, VAR_8, VAR_19, ((void*)0))) == 0) {
  FUNC_3(
      "vdev_disk_open(\"%s\"): fallback to DKIOCGMEDIAINFO\n",
      VAR_24->vdev_path);
  VAR_40 = VAR_34->dki_capacity - 1;
  VAR_41 = VAR_34->dki_lbsize;
  VAR_42 = VAR_41;
 } else {
  FUNC_3("vdev_disk_open(\"%s\"): "
      "both DKIOCGMEDIAINFO{,EXT} calls failed, %d\n",
      VAR_24->vdev_path, VAR_35);
  VAR_42 = VAR_3;
 }

 *VAR_27 = FUNC_12(FUNC_1(VAR_42, VAR_16)) - 1;

 if (VAR_24->vdev_wholedisk == 1) {
  int VAR_49 = 1;

  if (VAR_35 == 0) {






   *VAR_26 = VAR_40 * VAR_41;
  }





  (void) FUNC_24(VAR_29->vd_lh, VAR_6, (intptr_t)&VAR_49,
      VAR_8, VAR_19, ((void*)0));
 }





 VAR_24->vdev_nowritecache = VAR_0;

 return (0);
}
