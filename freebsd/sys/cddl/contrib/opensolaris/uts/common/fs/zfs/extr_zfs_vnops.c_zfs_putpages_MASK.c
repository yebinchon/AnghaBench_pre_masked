
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_6__ ;
typedef struct TYPE_36__ TYPE_5__ ;
typedef struct TYPE_35__ TYPE_4__ ;
typedef struct TYPE_34__ TYPE_3__ ;
typedef struct TYPE_33__ TYPE_2__ ;
typedef struct TYPE_32__ TYPE_20__ ;
typedef struct TYPE_31__ TYPE_1__ ;


struct TYPE_34__ {int z_blksz; int z_id; int z_sa_hdl; int * z_pflags; int z_rangelock; TYPE_4__* z_zfsvfs; } ;
typedef TYPE_3__ znode_t ;
struct TYPE_35__ {int z_log; TYPE_20__* z_os; } ;
typedef TYPE_4__ zfsvfs_t ;
typedef TYPE_5__* vm_page_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_6__* vm_object_t ;
typedef int uint_t ;
typedef int uint64_t ;
struct vnode {TYPE_6__* v_object; } ;
struct sf_buf {int dummy; } ;
typedef int sa_bulk_attr_t ;
typedef int locked_range_t ;
typedef int dmu_tx_t ;
typedef int caddr_t ;
struct TYPE_31__ {scalar_t__ vnp_size; } ;
struct TYPE_33__ {TYPE_1__ vnp; } ;
struct TYPE_37__ {TYPE_2__ un_pager; } ;
struct TYPE_36__ {int pindex; TYPE_6__* object; } ;
struct TYPE_32__ {scalar_t__ os_sync; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int,int ,int *,int **,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (struct vnode*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ VAR_8 ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (size_t) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int * FUNC_17 (TYPE_20__*) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *,int ,scalar_t__,size_t) ;
 int FUNC_20 (TYPE_20__*,int ,scalar_t__,size_t,int ,int *) ;
 int FUNC_21 (TYPE_20__*,int ,scalar_t__,size_t,TYPE_5__**,int *) ;
 int FUNC_22 (TYPE_5__*) ;
 int * FUNC_23 (int *,scalar_t__,size_t,int ) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (scalar_t__,int) ;
 size_t FUNC_26 (scalar_t__,int) ;
 int FUNC_27 (int ,int *,int,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_28 (TYPE_5__*) ;
 int FUNC_29 (TYPE_5__*,int,int) ;
 int FUNC_30 (TYPE_5__*) ;
 int FUNC_31 (int ,int *,int ,TYPE_3__*,scalar_t__,size_t,int ) ;
 int FUNC_32 (TYPE_5__*,struct sf_buf**) ;
 scalar_t__ FUNC_33 (TYPE_4__*,TYPE_3__*,int ) ;
 int FUNC_34 (int *,TYPE_3__*) ;
 int FUNC_35 (TYPE_3__*,int ,int *,int *,int ) ;
 int FUNC_36 (struct sf_buf*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_37 (TYPE_6__*) ;
 int FUNC_38 (TYPE_6__*) ;
 int FUNC_39 (int ,int ) ;

__attribute__((used)) static int
FUNC_40(struct vnode *VAR_16, vm_page_t *VAR_17, size_t VAR_18, int VAR_19,
    int *VAR_20)
{
 znode_t *VAR_21 = FUNC_9(VAR_16);
 zfsvfs_t *VAR_22 = VAR_21->z_zfsvfs;
 locked_range_t *VAR_23;
 dmu_tx_t *VAR_24;
 struct sf_buf *VAR_25;
 vm_object_t VAR_26;
 vm_page_t VAR_27;
 caddr_t VAR_28;
 size_t VAR_29;
 size_t VAR_30;
 vm_ooffset_t VAR_31;
 vm_ooffset_t VAR_32;
 uint_t VAR_33;
 int VAR_34;
 int VAR_35;
 int VAR_36;
 int VAR_37;

 FUNC_10(VAR_22);
 FUNC_12(VAR_21);

 VAR_26 = VAR_16->v_object;
 VAR_35 = FUNC_13(VAR_18);
 VAR_34 = VAR_35;

 FUNC_2(VAR_17[0]->object == VAR_26, ("mismatching object"));
 FUNC_2(VAR_18 > 0 && (VAR_18 & VAR_3) == 0, ("unexpected length"));

 for (VAR_37 = 0; VAR_37 < VAR_35; VAR_37++)
  VAR_20[VAR_37] = VAR_14;

 VAR_32 = FUNC_1(VAR_17[0]->pindex);
 VAR_33 = VAR_21->z_blksz;
 VAR_31 = FUNC_25(VAR_32, VAR_33);
 VAR_30 = FUNC_26(VAR_18 + (VAR_32 - VAR_31), VAR_33);
 VAR_23 = FUNC_23(&VAR_21->z_rangelock, VAR_31, VAR_30, VAR_5);

 FUNC_37(VAR_26);
 if (VAR_18 + VAR_32 > VAR_26->un_pager.vnp.vnp_size) {
  if (VAR_26->un_pager.vnp.vnp_size > VAR_32) {
   int VAR_38;

   VAR_18 = VAR_26->un_pager.vnp.vnp_size - VAR_32;
   VAR_34 = FUNC_13(VAR_18);
   if ((VAR_38 = (int)VAR_18 & VAR_3) != 0) {






    VAR_27 = VAR_17[VAR_34 - 1];
    FUNC_28(VAR_27);
    FUNC_2(!FUNC_22(VAR_27),
        ("zfs_putpages: page %p is not read-only", VAR_27));
    FUNC_29(VAR_27, VAR_38, VAR_4 -
        VAR_38);
   }
  } else {
   VAR_18 = 0;
   VAR_34 = 0;
  }
  if (VAR_34 < VAR_35) {
   for (VAR_37 = VAR_34; VAR_37 < VAR_35; VAR_37++) {
    VAR_20[VAR_37] = VAR_13;
   }
  }
 }
 FUNC_38(VAR_26);

 if (VAR_34 == 0)
  goto out;

 if (FUNC_33(VAR_22, VAR_21, VAR_0) ||
     FUNC_33(VAR_22, VAR_21, VAR_1)) {
  goto out;
 }

 VAR_24 = FUNC_17(VAR_22->z_os);
 FUNC_19(VAR_24, VAR_21->z_id, VAR_32, VAR_18);

 FUNC_18(VAR_24, VAR_21->z_sa_hdl, VAR_0);
 FUNC_34(VAR_24, VAR_21);
 VAR_36 = FUNC_15(VAR_24, VAR_6);
 if (VAR_36 != 0) {
  FUNC_14(VAR_24);
  goto out;
 }

 if (VAR_21->z_blksz < VAR_4) {
  for (VAR_37 = 0; VAR_18 > 0; VAR_32 += VAR_29, VAR_18 -= VAR_29, VAR_37++) {
   VAR_29 = VAR_18 > VAR_4 ? VAR_4 : VAR_18;
   VAR_28 = FUNC_32(VAR_17[VAR_37], &VAR_25);
   FUNC_20(VAR_22->z_os, VAR_21->z_id, VAR_32, VAR_29, VAR_28, VAR_24);
   FUNC_36(VAR_25);
  }
 } else {
  VAR_36 = FUNC_21(VAR_22->z_os, VAR_21->z_id, VAR_32, VAR_18, VAR_17, VAR_24);
 }

 if (VAR_36 == 0) {
  uint64_t VAR_39[2], VAR_40[2];
  sa_bulk_attr_t VAR_41[3];
  int VAR_42 = 0;

  FUNC_3(VAR_41, VAR_42, FUNC_6(VAR_22), ((void*)0),
      &VAR_39, 16);
  FUNC_3(VAR_41, VAR_42, FUNC_4(VAR_22), ((void*)0),
      &VAR_40, 16);
  FUNC_3(VAR_41, VAR_42, FUNC_5(VAR_22), ((void*)0),
      &VAR_21->z_pflags, 8);
  FUNC_35(VAR_21, VAR_2, VAR_39, VAR_40,
      VAR_1);
  VAR_36 = FUNC_27(VAR_21->z_sa_hdl, VAR_41, VAR_42, VAR_24);
  FUNC_0(VAR_36);
  FUNC_31(VAR_22->z_log, VAR_24, VAR_7, VAR_21, VAR_32, VAR_18, 0);

  FUNC_37(VAR_26);
  for (VAR_37 = 0; VAR_37 < VAR_34; VAR_37++) {
   VAR_20[VAR_37] = VAR_15;
   FUNC_30(VAR_17[VAR_37]);
  }
  FUNC_38(VAR_26);
  FUNC_8(VAR_9);
  FUNC_7(VAR_10, VAR_34);
 }
 FUNC_16(VAR_24);

out:
 FUNC_24(VAR_23);
 if ((VAR_19 & (VAR_12 | VAR_11)) != 0 ||
     VAR_22->z_os->os_sync == VAR_8)
  FUNC_39(VAR_22->z_log, VAR_21->z_id);
 FUNC_11(VAR_22);
 return (VAR_20[0]);
}
