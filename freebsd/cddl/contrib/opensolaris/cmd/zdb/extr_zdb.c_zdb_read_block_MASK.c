
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_28__ {char* vdev_path; struct TYPE_28__* vdev_top; int vdev_id; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef size_t uchar_t ;
struct TYPE_29__ {int spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef enum zio_compress { ____Placeholder_zio_compress } zio_compress ;
typedef int dva_t ;
struct TYPE_30__ {int * blk_dva; } ;
typedef TYPE_4__ blkptr_t ;
typedef int abd_t ;
struct TYPE_27__ {char* vdev_op_type; } ;


 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*,int) ;
 int FUNC_7 (TYPE_4__*,int) ;
 int FUNC_8 (TYPE_4__*,int ) ;
 int FUNC_9 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int ) ;
 int VAR_3 ;
 int FUNC_14 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_15 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int * FUNC_16 (int,int ) ;
 int FUNC_17 (void*,int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int,int,int ,int *) ;
 void* FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (void*,void*,int) ;
 int* VAR_29 ;
 int FUNC_22 (int ,char*,char*) ;
 int FUNC_23 (char*) ;
 int FUNC_24 (char*,...) ;
 int FUNC_25 (int *,int) ;
 int VAR_30 ;
 int FUNC_26 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_27 (TYPE_3__*,int ,int ) ;
 int VAR_31 ;
 char* FUNC_28 (char const*) ;
 char* FUNC_29 (char*,char*) ;
 int FUNC_30 (char const*,char**,int) ;
 void* FUNC_31 (int,int ) ;
 int FUNC_32 (void*,int) ;
 int FUNC_33 (TYPE_2__*,int) ;
 int FUNC_34 (char*,void*,int,int) ;
 int FUNC_35 (void*,int,int) ;
 int FUNC_36 (void*,int) ;
 int FUNC_37 (TYPE_4__*,int,int) ;
 int FUNC_38 (TYPE_4__*,int) ;
 TYPE_2__* FUNC_39 (int ,char const*) ;
 scalar_t__ FUNC_40 (int,int *,void*,int,int) ;
 scalar_t__ FUNC_41 (int,void*,void*,int,int) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int *,TYPE_3__*,TYPE_4__*,int *,int,int *,int *,int ,int,int *) ;
 int * FUNC_44 (TYPE_3__*,int *,int *,int ) ;
 int FUNC_45 (int *,TYPE_4__*,TYPE_2__*,int,int *,int,int ,int ,int,int *,int *) ;
 int FUNC_46 (int *) ;

__attribute__((used)) static void
FUNC_47(char *VAR_32, spa_t *VAR_33)
{
 blkptr_t VAR_34, *VAR_35 = &VAR_34;
 dva_t *VAR_36 = VAR_35->blk_dva;
 int VAR_37 = 0;
 uint64_t VAR_38 = 0, VAR_39 = 0, VAR_40 = 0, VAR_41 = 0, VAR_42 = 0;
 zio_t *VAR_43;
 vdev_t *VAR_44;
 abd_t *VAR_45;
 void *VAR_46, *VAR_47;
 const char *VAR_48, *VAR_49;
 char *VAR_50, *VAR_51, *VAR_52;
 int VAR_53, VAR_54;

 VAR_51 = FUNC_28(VAR_32);
 VAR_48 = FUNC_29(VAR_51, ":");
 VAR_49 = VAR_48 ? VAR_48 : "";
 VAR_48 = FUNC_29(((void*)0), ":");
 VAR_38 = FUNC_30(VAR_48 ? VAR_48 : "", ((void*)0), 16);
 VAR_48 = FUNC_29(((void*)0), ":");
 VAR_39 = FUNC_30(VAR_48 ? VAR_48 : "", ((void*)0), 16);
 VAR_48 = FUNC_29(((void*)0), ":");
 if (VAR_48)
  VAR_52 = FUNC_28(VAR_48);
 else
  VAR_52 = FUNC_28("");

 VAR_48 = ((void*)0);
 if (VAR_39 == 0)
  VAR_48 = "size must not be zero";
 if (!FUNC_14(VAR_39, VAR_1))
  VAR_48 = "size must be a multiple of sector size";
 if (!FUNC_14(VAR_38, VAR_1))
  VAR_48 = "offset must be a multiple of sector size";
 if (VAR_48) {
  (void) FUNC_24("Invalid block specifier: %s  - %s\n", VAR_32, VAR_48);
  FUNC_23(VAR_52);
  FUNC_23(VAR_51);
  return;
 }

 for (VAR_48 = FUNC_29(VAR_52, ":"); VAR_48; VAR_48 = FUNC_29(((void*)0), ":")) {
  for (VAR_53 = 0; VAR_52[VAR_53]; VAR_53++) {
   int VAR_55 = VAR_29[(uchar_t)VAR_52[VAR_53]];

   if (VAR_55 == 0) {
    (void) FUNC_24("***Invalid flag: %c\n",
        VAR_52[VAR_53]);
    continue;
   }
   VAR_37 |= VAR_55;


   if ((VAR_55 & (VAR_10 |
       VAR_14)) == 0)
    continue;

   VAR_50 = &VAR_52[VAR_53 + 1];
   if (VAR_55 == VAR_14)
    VAR_42 = FUNC_30(VAR_50, &VAR_50, 16);
   if (*VAR_50 != ':' && *VAR_50 != '\0') {
    (void) FUNC_24("***Invalid flag arg: '%s'\n", VAR_48);
    FUNC_23(VAR_52);
    FUNC_23(VAR_51);
    return;
   }
   VAR_53 += VAR_50 - &VAR_52[VAR_53 + 1];
  }
 }
 FUNC_23(VAR_52);

 VAR_44 = FUNC_39(VAR_33->spa_root_vdev, VAR_49);
 if (VAR_44 == ((void*)0)) {
  (void) FUNC_24("***Invalid vdev: %s\n", VAR_49);
  FUNC_23(VAR_51);
  return;
 } else {
  if (VAR_44->vdev_path)
   (void) FUNC_22(VAR_31, "Found vdev: %s\n",
       VAR_44->vdev_path);
  else
   (void) FUNC_22(VAR_31, "Found vdev type: %s\n",
       VAR_44->vdev_ops->vdev_op_type);
 }

 VAR_40 = VAR_39;
 VAR_41 = VAR_39;

 VAR_45 = FUNC_16(VAR_6, VAR_0);
 VAR_46 = FUNC_31(VAR_6, VAR_9);

 FUNC_9(VAR_35);

 FUNC_13(&VAR_36[0], VAR_44->vdev_id);
 FUNC_12(&VAR_36[0], VAR_38);
 FUNC_11(&VAR_36[0], !!(VAR_37 & VAR_12));
 FUNC_10(&VAR_36[0], FUNC_33(VAR_44, VAR_40));

 FUNC_0(VAR_35, VAR_8, VAR_8);

 FUNC_6(VAR_35, VAR_41);
 FUNC_7(VAR_35, VAR_40);
 FUNC_3(VAR_35, VAR_19);
 FUNC_2(VAR_35, VAR_17);
 FUNC_8(VAR_35, VAR_2);
 FUNC_5(VAR_35, 0);
 FUNC_4(VAR_35, 0);
 FUNC_1(VAR_35, VAR_16);

 FUNC_26(VAR_33, VAR_5, VAR_3, VAR_4);
 VAR_43 = FUNC_44(VAR_33, ((void*)0), ((void*)0), 0);

 if (VAR_44 == VAR_44->vdev_top) {



  FUNC_42(FUNC_43(VAR_43, VAR_33, VAR_35, VAR_45, VAR_40, ((void*)0), ((void*)0),
      VAR_27,
      VAR_20 | VAR_26, ((void*)0)));
 } else {



  FUNC_42(FUNC_45(VAR_43, VAR_35, VAR_44, VAR_38, VAR_45,
      VAR_40, VAR_28, VAR_27,
      VAR_21 | VAR_23 |
      VAR_22 | VAR_24 |
      VAR_20 | VAR_26 | VAR_25,
      ((void*)0), ((void*)0)));
 }

 VAR_54 = FUNC_46(VAR_43);
 FUNC_27(VAR_33, VAR_5, VAR_3);

 if (VAR_54) {
  (void) FUNC_24("Read of %s failed, error: %d\n", VAR_32, VAR_54);
  goto out;
 }

 if (VAR_37 & VAR_11) {




  enum zio_compress VAR_56;
  void *VAR_57 = FUNC_31(VAR_6, VAR_9);
  void *VAR_58 = FUNC_31(VAR_6, VAR_9);

  FUNC_17(VAR_57, VAR_45, VAR_40);

  FUNC_15(FUNC_19(VAR_45, VAR_40, VAR_6 - VAR_40,
      VAR_30, ((void*)0)));

  FUNC_15(FUNC_25((uint8_t *)VAR_57 + VAR_40,
      VAR_6 - VAR_40));

  for (VAR_41 = VAR_6; VAR_41 > VAR_40;
      VAR_41 -= VAR_7) {
   for (VAR_56 = 0; VAR_56 < VAR_18; VAR_56++) {
    if (FUNC_40(VAR_56, VAR_45,
        VAR_46, VAR_40, VAR_41) == 0 &&
        FUNC_41(VAR_56, VAR_57,
        VAR_58, VAR_40, VAR_41) == 0 &&
        FUNC_21(VAR_46, VAR_58, VAR_41) == 0)
     break;
   }
   if (VAR_56 != VAR_18)
    break;
   VAR_41 -= VAR_7;
  }

  FUNC_32(VAR_57, VAR_6);
  FUNC_32(VAR_58, VAR_6);

  if (VAR_41 <= VAR_40) {
   (void) FUNC_24("Decompress of %s failed\n", VAR_32);
   goto out;
  }
  VAR_47 = VAR_46;
  VAR_39 = VAR_41;
 } else {
  VAR_47 = FUNC_20(VAR_45);
  VAR_39 = VAR_40;
 }

 if (VAR_37 & VAR_14)
  FUNC_38((blkptr_t *)(void *)
      ((uintptr_t)VAR_47 + (uintptr_t)VAR_42), VAR_37);
 else if (VAR_37 & VAR_15)
  FUNC_35(VAR_47, VAR_39, VAR_37);
 else if (VAR_37 & VAR_13)
  FUNC_37((blkptr_t *)VAR_47, VAR_39 / sizeof (blkptr_t),
      VAR_37);
 else if (VAR_37 & VAR_12)
  FUNC_36(VAR_47, VAR_37);
 else
  FUNC_34(VAR_32, VAR_47, VAR_39, VAR_37);

out:
 FUNC_18(VAR_45);
 FUNC_32(VAR_46, VAR_6);
 FUNC_23(VAR_51);
}
