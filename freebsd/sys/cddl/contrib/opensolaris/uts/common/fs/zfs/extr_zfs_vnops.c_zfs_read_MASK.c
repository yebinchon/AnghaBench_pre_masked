
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int z_pflags; scalar_t__ z_size; int z_blksz; int z_sa_hdl; int z_rangelock; int z_id; int z_mode; TYPE_3__* z_zfsvfs; } ;
typedef TYPE_2__ znode_t ;
struct TYPE_20__ {scalar_t__ z_log; TYPE_1__* z_os; } ;
typedef TYPE_3__ zfsvfs_t ;
struct TYPE_21__ {scalar_t__ xu_type; } ;
typedef TYPE_4__ xuio_t ;
typedef int vnode_t ;
struct TYPE_22__ {scalar_t__ uio_loffset; int uio_resid; scalar_t__ uio_extflg; scalar_t__ uio_segflg; int uio_fmode; } ;
typedef TYPE_5__ uio_t ;
typedef int uint64_t ;
typedef int ssize_t ;
typedef scalar_t__ offset_t ;
typedef int locked_range_t ;
typedef int cred_t ;
typedef int caller_context_t ;
struct TYPE_18__ {scalar_t__ os_sync; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int,int) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int,int) ;
 int VAR_6 ;
 int FUNC_7 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_2__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (int *,int ,scalar_t__,int,int ,int *) ;
 int FUNC_14 (int ,TYPE_5__*,int) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (TYPE_4__*,int ,int ,int) ;
 int FUNC_17 (TYPE_4__*,int) ;
 int FUNC_18 (int *,int,TYPE_5__*) ;
 int FUNC_19 (int *,int,TYPE_5__*) ;
 int * FUNC_20 (int *,scalar_t__,int,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int *) ;
 scalar_t__ VAR_12 ;
 int FUNC_24 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_25(vnode_t *VAR_13, uio_t *VAR_14, int VAR_15, cred_t *VAR_16, caller_context_t *VAR_17)
{
 znode_t *VAR_18 = FUNC_8(VAR_13);
 zfsvfs_t *VAR_19 = VAR_18->z_zfsvfs;
 ssize_t VAR_20, VAR_21;
 int VAR_22 = 0;
 xuio_t *VAR_23 = ((void*)0);

 FUNC_10(VAR_19);
 FUNC_12(VAR_18);

 if (VAR_18->z_pflags & VAR_10) {
  FUNC_11(VAR_19);
  return (FUNC_7(VAR_0));
 }




 if (VAR_14->uio_loffset < (offset_t)0) {
  FUNC_11(VAR_19);
  return (FUNC_7(VAR_2));
 }




 if (VAR_14->uio_resid == 0) {
  FUNC_11(VAR_19);
  return (0);
 }




 if (FUNC_2(VAR_18->z_mode)) {
  if ((VAR_22 = FUNC_13(VAR_13, VAR_4,
      VAR_14->uio_loffset, VAR_14->uio_resid, VAR_14->uio_fmode, VAR_17))) {
   FUNC_11(VAR_19);
   return (VAR_22);
  }
 }




 if (VAR_19->z_log &&
     (VAR_15 & VAR_5 || VAR_19->z_os->os_sync == VAR_11))
  FUNC_24(VAR_19->z_log, VAR_18->z_id);




 locked_range_t *VAR_24 = FUNC_20(&VAR_18->z_rangelock,
     VAR_14->uio_loffset, VAR_14->uio_resid, VAR_6);





 if (VAR_14->uio_loffset >= VAR_18->z_size) {
  VAR_22 = 0;
  goto out;
 }

 FUNC_0(VAR_14->uio_loffset < VAR_18->z_size);
 VAR_20 = FUNC_3(VAR_14->uio_resid, VAR_18->z_size - VAR_14->uio_loffset);
 while (VAR_20 > 0) {
  VAR_21 = FUNC_3(VAR_20, VAR_12 -
      FUNC_5(VAR_14->uio_loffset, VAR_12));






  if (FUNC_23(VAR_13)) {
   VAR_22 = FUNC_18(VAR_13, VAR_21, VAR_14);
  } else {
   VAR_22 = FUNC_14(FUNC_22(VAR_18->z_sa_hdl),
       VAR_14, VAR_21);
  }
  if (VAR_22) {

   if (VAR_22 == VAR_1)
    VAR_22 = FUNC_7(VAR_3);
   break;
  }

  VAR_20 -= VAR_21;
 }
out:
 FUNC_21(VAR_24);

 FUNC_9(VAR_19, VAR_18);
 FUNC_11(VAR_19);
 return (VAR_22);
}
