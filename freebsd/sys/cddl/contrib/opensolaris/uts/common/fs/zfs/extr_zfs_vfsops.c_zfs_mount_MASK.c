
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_13__ ;
typedef struct TYPE_26__ TYPE_12__ ;


struct TYPE_28__ {scalar_t__ z_issnap; int z_teardown_lock; } ;
typedef TYPE_1__ zfsvfs_t ;
struct TYPE_29__ {scalar_t__ v_type; int v_count; int v_flag; int v_vfsp; int v_lock; } ;
typedef TYPE_2__ vnode_t ;
struct TYPE_30__ {int vfs_flag; TYPE_1__* vfs_data; int mnt_optnew; TYPE_2__* mnt_vnodecovered; } ;
typedef TYPE_3__ vfs_t ;
struct TYPE_31__ {int va_uid; int va_mask; } ;
typedef TYPE_4__ vattr_t ;
struct TYPE_32__ {int * td_ucred; } ;
typedef TYPE_5__ kthread_t ;
typedef int cred_t ;
struct TYPE_27__ {char* pn_path; } ;
struct TYPE_26__ {int flags; scalar_t__ datalen; int spec; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 () ;
 int VAR_16 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int *,TYPE_5__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 TYPE_5__* VAR_21 ;
 scalar_t__ FUNC_8 (char*,int ,int *) ;
 int VAR_22 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ,TYPE_13__*) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_16 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_17 (TYPE_2__*,int *,int ) ;
 int FUNC_18 (char*) ;
 TYPE_13__ VAR_23 ;
 TYPE_12__* VAR_24 ;
 scalar_t__ FUNC_19 (int ,char*,void**,int *) ;
 int FUNC_20 (TYPE_2__*,int) ;
 int FUNC_21 (TYPE_3__*,char*) ;
 int FUNC_22 (TYPE_3__*,char*) ;
 int FUNC_23 (TYPE_3__*) ;
 scalar_t__ VAR_25 ;
 int FUNC_24 (TYPE_1__*) ;
 int FUNC_25 (char*,int*) ;

__attribute__((used)) static int
FUNC_26(vfs_t *VAR_26)
{
 kthread_t *VAR_27 = VAR_21;
 vnode_t *VAR_28 = VAR_26->mnt_vnodecovered;
 cred_t *VAR_29 = VAR_27->td_ucred;
 char *VAR_30;
 int VAR_31 = 0;
 int VAR_32;
 if (FUNC_19(VAR_26->mnt_optnew, "from", (void **)&VAR_30, ((void*)0)))
  return (FUNC_3(VAR_3));





 if (VAR_25 &&
     FUNC_8(VAR_30, VAR_20, VAR_29) != VAR_2) {
  FUNC_16(VAR_29, VAR_26);
 }
 VAR_31 = FUNC_15(VAR_29, VAR_28, VAR_26);
 if (VAR_31) {
  if (FUNC_8(VAR_30, VAR_20, VAR_29) != 0)
   goto out;

  if (!(VAR_26->vfs_flag & VAR_15)) {
   vattr_t VAR_33;






   VAR_33.va_mask = VAR_0;

   FUNC_20(VAR_28, VAR_8 | VAR_7);
   if (FUNC_6(VAR_28, &VAR_33, VAR_29)) {
    FUNC_7(VAR_28, 0);
    goto out;
   }

   if (FUNC_17(VAR_28, VAR_29, VAR_33.va_uid) != 0 &&
       FUNC_5(VAR_28, VAR_19, VAR_29, VAR_27) != 0) {
    FUNC_7(VAR_28, 0);
    goto out;
   }
   FUNC_7(VAR_28, 0);
  }

  FUNC_16(VAR_29, VAR_26);
 }





 if (!FUNC_1(VAR_21) &&
     (!FUNC_25(VAR_30, &VAR_32) || !VAR_32)) {
  VAR_31 = FUNC_3(VAR_5);
  goto out;
 }







 VAR_26->vfs_flag |= VAR_10;





 if (VAR_26->vfs_flag & VAR_15) {
  zfsvfs_t *VAR_34 = VAR_26->vfs_data;
  FUNC_13(&VAR_34->z_teardown_lock, VAR_16, VAR_6);
  FUNC_24(VAR_34);
  VAR_31 = FUNC_23(VAR_26);
  FUNC_14(&VAR_34->z_teardown_lock, VAR_6);
  goto out;
 }


 if ((VAR_26->vfs_flag & VAR_11) != 0 &&
     (VAR_26->vfs_flag & VAR_12) == 0) {
  char VAR_35[VAR_9];

  VAR_31 = FUNC_9(VAR_30, VAR_35);
  if (VAR_31 == 0)
   VAR_31 = FUNC_18(VAR_35);
  if (VAR_31)
   goto out;
 }
 FUNC_0();
 VAR_31 = FUNC_21(VAR_26, VAR_30);
 FUNC_2();
out:
 return (VAR_31);
}
