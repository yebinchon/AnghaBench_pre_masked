
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_20__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_23__ {int vdev_children; unsigned long long vdev_crtxg; unsigned long long vdev_guid; scalar_t__ vdev_isl2cache; scalar_t__ vdev_isspare; scalar_t__ vdev_psize; int vdev_notrim; int vdev_guid_sum; struct TYPE_23__* vdev_parent; TYPE_1__* vdev_ops; struct TYPE_23__** vdev_child; TYPE_5__* vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
struct TYPE_24__ {char* vp_nvlist; } ;
typedef TYPE_3__ vdev_phys_t ;
typedef scalar_t__ vdev_labeltype_t ;
typedef unsigned long long uint64_t ;
struct TYPE_25__ {scalar_t__ ub_txg; } ;
typedef TYPE_4__ uberblock_t ;
struct TYPE_22__ {unsigned long long ub_txg; } ;
struct TYPE_26__ {TYPE_20__ spa_uberblock; } ;
typedef TYPE_5__ spa_t ;
typedef int nvlist_t ;
typedef int abd_t ;
struct TYPE_21__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int * FUNC_3 (int,int ) ;
 int * FUNC_4 (int,int ) ;
 int FUNC_5 (int *,TYPE_20__*,int) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int ,unsigned long long) ;
 scalar_t__ FUNC_10 (int **,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char**,size_t*,int ,int ) ;
 int FUNC_13 (int ,int ) ;
 int * FUNC_14 (TYPE_5__*,TYPE_2__*,unsigned long long,int ) ;
 scalar_t__ FUNC_15 (TYPE_5__*,scalar_t__,int ) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (unsigned long long,int *) ;
 int FUNC_18 (TYPE_2__*) ;
 scalar_t__ FUNC_19 (unsigned long long,int *,int *) ;
 unsigned long long FUNC_20 (TYPE_5__*) ;
 int FUNC_21 (TYPE_5__*) ;
 scalar_t__ FUNC_22 (TYPE_2__*,unsigned long long,scalar_t__,unsigned long long*,unsigned long long*) ;
 scalar_t__ FUNC_23 (TYPE_2__*) ;
 int VAR_31 ;
 int FUNC_24 (int *,TYPE_2__*,int,int *,int ,int,int *,int *,int) ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 int * FUNC_25 (TYPE_5__*,int *,int *,int) ;
 int * FUNC_26 (int *,TYPE_5__*,TYPE_2__*,scalar_t__,scalar_t__) ;
 int FUNC_27 (int *) ;

int
FUNC_28(vdev_t *VAR_37, uint64_t VAR_38, vdev_labeltype_t VAR_39)
{
 spa_t *VAR_40 = VAR_37->vdev_spa;
 nvlist_t *VAR_41;
 vdev_phys_t *VAR_42;
 abd_t *VAR_43;
 abd_t *VAR_44;
 uberblock_t *VAR_45;
 abd_t *VAR_46;
 zio_t *VAR_47;
 char *VAR_48;
 size_t VAR_49;
 int VAR_50;
 uint64_t VAR_51, VAR_52;
 int VAR_53 = VAR_25 | VAR_24;

 FUNC_0(FUNC_15(VAR_40, VAR_13, VAR_12) == VAR_13);

 for (int VAR_54 = 0; VAR_54 < VAR_37->vdev_children; VAR_54++)
  if ((VAR_50 = FUNC_28(VAR_37->vdev_child[VAR_54],
      VAR_38, VAR_39)) != 0)
   return (VAR_50);


 VAR_37->vdev_crtxg = VAR_38;

 if (!VAR_37->vdev_ops->vdev_op_leaf || !FUNC_21(VAR_40))
  return (0);




 if (FUNC_23(VAR_37))
  return (FUNC_1(VAR_5));




 if (VAR_39 != VAR_17 && VAR_39 != VAR_20 &&
     FUNC_22(VAR_37, VAR_38, VAR_39, &VAR_51, &VAR_52))
  return (FUNC_1(VAR_2));







 if (VAR_39 != VAR_17 && VAR_39 != VAR_16 &&
     VAR_51 != 0ULL) {
  uint64_t VAR_55 = VAR_51 - VAR_37->vdev_guid;

  VAR_37->vdev_guid += VAR_55;

  for (vdev_t *VAR_56 = VAR_37; VAR_56 != ((void*)0); VAR_56 = VAR_56->vdev_parent)
   VAR_56->vdev_guid_sum += VAR_55;






  if (VAR_39 == VAR_19)
   return (0);
  FUNC_0(VAR_39 == VAR_18 ||
      VAR_39 == VAR_20);
 }

 if (VAR_39 != VAR_17 && VAR_39 != VAR_19 &&
     VAR_52 != 0ULL) {
  uint64_t VAR_57 = VAR_52 - VAR_37->vdev_guid;

  VAR_37->vdev_guid += VAR_57;

  for (vdev_t *VAR_58 = VAR_37; VAR_58 != ((void*)0); VAR_58 = VAR_58->vdev_parent)
   VAR_58->vdev_guid_sum += VAR_57;






  if (VAR_39 == VAR_16)
   return (0);
  FUNC_0(VAR_39 == VAR_18);
 }
 if (VAR_36 && VAR_32 && !VAR_37->vdev_notrim &&
     (VAR_39 == VAR_15 || VAR_39 == VAR_19 ||
     VAR_39 == VAR_16))
  FUNC_27(FUNC_26(((void*)0), VAR_40, VAR_37, VAR_22,
      VAR_37->vdev_psize - VAR_22));




 VAR_43 = FUNC_4(sizeof (vdev_phys_t), VAR_1);
 FUNC_8(VAR_43, sizeof (vdev_phys_t));
 VAR_42 = FUNC_7(VAR_43);







 if (VAR_39 == VAR_19 ||
     (VAR_39 == VAR_17 && VAR_37->vdev_isspare)) {







  FUNC_2(FUNC_10(&VAR_41, VAR_9, VAR_7) == 0);

  FUNC_2(FUNC_9(VAR_41, VAR_30,
      FUNC_20(VAR_40)) == 0);
  FUNC_2(FUNC_9(VAR_41, VAR_29,
      VAR_11) == 0);
  FUNC_2(FUNC_9(VAR_41, VAR_28,
      VAR_37->vdev_guid) == 0);
 } else if (VAR_39 == VAR_16 ||
     (VAR_39 == VAR_17 && VAR_37->vdev_isl2cache)) {



  FUNC_2(FUNC_10(&VAR_41, VAR_9, VAR_7) == 0);

  FUNC_2(FUNC_9(VAR_41, VAR_30,
      FUNC_20(VAR_40)) == 0);
  FUNC_2(FUNC_9(VAR_41, VAR_29,
      VAR_10) == 0);
  FUNC_2(FUNC_9(VAR_41, VAR_28,
      VAR_37->vdev_guid) == 0);
 } else {
  uint64_t VAR_59 = 0ULL;

  if (VAR_39 == VAR_20)
   VAR_59 = VAR_40->spa_uberblock.ub_txg;
  VAR_41 = FUNC_14(VAR_40, VAR_37, VAR_59, VAR_0);






  FUNC_2(FUNC_9(VAR_41, VAR_27,
      VAR_38) == 0);
 }

 VAR_48 = VAR_42->vp_nvlist;
 VAR_49 = sizeof (VAR_42->vp_nvlist);

 VAR_50 = FUNC_12(VAR_41, &VAR_48, &VAR_49, VAR_8, VAR_7);
 if (VAR_50 != 0) {
  FUNC_11(VAR_41);
  FUNC_6(VAR_43);

  return (VAR_50 == VAR_3 ? VAR_6 : VAR_4);
 }




 VAR_46 = FUNC_4(VAR_23, VAR_1);
 FUNC_8(VAR_46, VAR_23);
 FUNC_5(VAR_46, &VAR_40->spa_uberblock, sizeof (uberblock_t));
 VAR_45 = FUNC_7(VAR_46);
 VAR_45->ub_txg = 0;


 VAR_44 = FUNC_3(VAR_21, VAR_1);
 FUNC_8(VAR_44, VAR_21);




retry:
 VAR_47 = FUNC_25(VAR_40, ((void*)0), ((void*)0), VAR_53);

 for (int VAR_60 = 0; VAR_60 < VAR_14; VAR_60++) {

  FUNC_24(VAR_47, VAR_37, VAR_60, VAR_43,
      FUNC_13(VAR_31, VAR_35),
      sizeof (vdev_phys_t), ((void*)0), ((void*)0), VAR_53);






  FUNC_24(VAR_47, VAR_37, VAR_60, VAR_44,
      FUNC_13(VAR_31, VAR_33),
      VAR_21, ((void*)0), ((void*)0), VAR_53);

  FUNC_24(VAR_47, VAR_37, VAR_60, VAR_46,
      FUNC_13(VAR_31, VAR_34),
      VAR_23, ((void*)0), ((void*)0), VAR_53);
 }

 VAR_50 = FUNC_27(VAR_47);

 if (VAR_50 != 0 && !(VAR_53 & VAR_26)) {
  VAR_53 |= VAR_26;
  goto retry;
 }

 FUNC_11(VAR_41);
 FUNC_6(VAR_44);
 FUNC_6(VAR_46);
 FUNC_6(VAR_43);







 if (VAR_50 == 0 && !VAR_37->vdev_isspare &&
     (VAR_39 == VAR_19 ||
     FUNC_19(VAR_37->vdev_guid, ((void*)0), ((void*)0))))
  FUNC_18(VAR_37);

 if (VAR_50 == 0 && !VAR_37->vdev_isl2cache &&
     (VAR_39 == VAR_16 ||
     FUNC_17(VAR_37->vdev_guid, ((void*)0))))
  FUNC_16(VAR_37);

 return (VAR_50);
}
