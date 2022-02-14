
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;


struct TYPE_16__ {scalar_t__ z_sa_hdl; } ;
typedef TYPE_3__ znode_t ;
struct TYPE_17__ {int * z_os; TYPE_2__* z_vfs; int z_teardown_lock; int z_teardown_inactive_lock; scalar_t__ z_unmounted; int z_znodes_lock; int z_all_znodes; int * z_log; TYPE_1__* z_parent; } ;
typedef TYPE_4__ zfsvfs_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_15__ {int vfs_flag; } ;
struct TYPE_14__ {int z_vfs; } ;
struct TYPE_13__ {scalar_t__ v_count; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_11__* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int *) ;
 TYPE_3__* FUNC_10 (int *,TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (TYPE_4__*) ;
 int FUNC_19 (TYPE_3__*) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int
FUNC_21(zfsvfs_t *VAR_5, boolean_t VAR_6)
{
 znode_t *VAR_7;

 FUNC_13(&VAR_5->z_teardown_lock, VAR_3, VAR_2);

 if (!VAR_6) {






  (void) FUNC_7(VAR_5->z_parent->z_vfs, 0);



 }





 if (VAR_5->z_log) {
  FUNC_20(VAR_5->z_log);
  VAR_5->z_log = ((void*)0);
 }

 FUNC_15(&VAR_5->z_teardown_inactive_lock, VAR_3);






 if (!VAR_6 && (VAR_5->z_unmounted || VAR_5->z_os == ((void*)0))) {
  FUNC_16(&VAR_5->z_teardown_inactive_lock);
  FUNC_14(&VAR_5->z_teardown_lock, VAR_2);
  return (FUNC_1(VAR_1));
 }
 FUNC_11(&VAR_5->z_znodes_lock);
 for (VAR_7 = FUNC_9(&VAR_5->z_all_znodes); VAR_7 != ((void*)0);
     VAR_7 = FUNC_10(&VAR_5->z_all_znodes, VAR_7))
  if (VAR_7->z_sa_hdl) {
   FUNC_0(FUNC_2(VAR_7)->v_count >= 0);
   FUNC_19(VAR_7);
  }
 FUNC_12(&VAR_5->z_znodes_lock);






 if (VAR_6) {
  VAR_5->z_unmounted = VAR_0;
  FUNC_16(&VAR_5->z_teardown_inactive_lock);
  FUNC_14(&VAR_5->z_teardown_lock, VAR_2);
 }






 if (VAR_5->z_os == ((void*)0))
  return (0);




 FUNC_18(VAR_5);




 if (FUNC_8(FUNC_4(VAR_5->z_os)) &&
     !(VAR_5->z_vfs->vfs_flag & VAR_4))
  FUNC_17(FUNC_6(VAR_5->z_os), 0);
 FUNC_5(VAR_5->z_os);

 return (0);
}
