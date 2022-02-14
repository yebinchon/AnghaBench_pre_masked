
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* m_ddev_targp; int m_log; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef scalar_t__ xfs_lsn_t ;
struct TYPE_18__ {scalar_t__ li_lsn; } ;
typedef TYPE_3__ xfs_log_item_t ;
struct xfs_ail_cursor {int dummy; } ;
struct xfs_ail {scalar_t__ xa_target; scalar_t__ xa_log_flush; int xa_lock; int xa_ail; struct xfs_ail_cursor xa_cursors; TYPE_2__* xa_mount; } ;
struct TYPE_16__ {int bt_task; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;




 int VAR_0 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_2__*,int ) ;
 int FUNC_17 (struct xfs_ail*,struct xfs_ail_cursor*) ;
 TYPE_3__* FUNC_18 (struct xfs_ail*,struct xfs_ail_cursor*,scalar_t__) ;
 int FUNC_19 (struct xfs_ail*,struct xfs_ail_cursor*) ;
 TYPE_3__* FUNC_20 (struct xfs_ail*,struct xfs_ail_cursor*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

long
FUNC_21(
 struct xfs_ail *VAR_7,
 xfs_lsn_t *VAR_8)
{
 long VAR_9 = 10;
 xfs_lsn_t VAR_10 = *VAR_8;
 xfs_lsn_t VAR_11;
 xfs_lsn_t VAR_12;
 xfs_log_item_t *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 xfs_mount_t *VAR_17 = VAR_7->xa_mount;
 struct xfs_ail_cursor *VAR_18 = &VAR_7->xa_cursors;
 int VAR_19 = 0;





 FUNC_8(&VAR_7->xa_lock);
 if (VAR_10 == 0 && VAR_7->xa_log_flush &&
     !FUNC_7(&VAR_7->xa_ail)) {
  VAR_7->xa_log_flush = 0;
  FUNC_9(&VAR_7->xa_lock);
  FUNC_6(VAR_2);
  FUNC_16(VAR_17, VAR_0);
  FUNC_8(&VAR_7->xa_lock);
 }

 VAR_11 = VAR_7->xa_target;
 FUNC_19(VAR_7, VAR_18);
 VAR_13 = FUNC_18(VAR_7, VAR_18, *VAR_8);
 if (!VAR_13 || FUNC_4(VAR_17)) {



  FUNC_17(VAR_7, VAR_18);
  FUNC_9(&VAR_7->xa_lock);
  *VAR_8 = 0;
  VAR_9 = 50;
  return VAR_9;
 }

 FUNC_6(VAR_1);
 VAR_12 = VAR_13->li_lsn;
 VAR_14 = VAR_16 = VAR_15 = 0;
 while ((FUNC_5(VAR_13->li_lsn, VAR_11) <= 0)) {
  int VAR_20;
  VAR_20 = FUNC_3(VAR_13);
  FUNC_9(&VAR_7->xa_lock);
  switch (VAR_20) {
  case 128:
   FUNC_6(VAR_6);
   FUNC_12(VAR_13);

   FUNC_1(VAR_13);
   VAR_10 = VAR_12;
   break;

  case 129:
   FUNC_6(VAR_5);
   FUNC_13(VAR_13);

   if (!FUNC_2(VAR_13)) {
    FUNC_14(VAR_13);
    VAR_16++;
    VAR_7->xa_log_flush++;
   } else {
    VAR_10 = VAR_12;
   }
   VAR_19 = 1;
   break;

  case 130:
   FUNC_6(VAR_4);
   FUNC_11(VAR_13);

   VAR_16++;
   VAR_7->xa_log_flush++;
   break;

  case 131:
   FUNC_6(VAR_3);
   FUNC_10(VAR_13);
   VAR_16++;
   break;

  default:
   FUNC_0(0);
   break;
  }

  FUNC_8(&VAR_7->xa_lock);

  if (FUNC_4(VAR_17))
   break;
  FUNC_0(VAR_17->m_log);

  VAR_15++;
  if (VAR_16 > 100)
   break;

  VAR_13 = FUNC_20(VAR_7, VAR_18);
  if (VAR_13 == ((void*)0))
   break;
  VAR_12 = VAR_13->li_lsn;
 }
 FUNC_17(VAR_7, VAR_18);
 FUNC_9(&VAR_7->xa_lock);

 if (VAR_19) {

  FUNC_15(VAR_17->m_ddev_targp->bt_task);
 }

 if (!VAR_15) {

  VAR_10 = 0;
  VAR_7->xa_log_flush = 0;

  VAR_9 = 50;
 } else if (FUNC_5(VAR_12, VAR_11) >= 0) {





  VAR_9 = 50;
  VAR_10 = 0;
 } else if ((VAR_16 * 100) / VAR_15 > 90) {
  VAR_9 = 20;
  VAR_10 = 0;
 }

 *VAR_8 = VAR_10;
 return VAR_9;
}
