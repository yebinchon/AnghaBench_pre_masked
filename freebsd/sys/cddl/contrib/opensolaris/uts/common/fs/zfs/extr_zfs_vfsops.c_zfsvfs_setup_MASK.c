
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_2__* z_os; TYPE_7__* z_vfs; int z_replay; int z_log; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int boolean_t ;
struct TYPE_13__ {int vfs_flag; } ;
struct TYPE_12__ {int os_user_ptr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_7__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,int ) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_10(zfsvfs_t *VAR_6, boolean_t VAR_7)
{
 int VAR_8;

 VAR_8 = FUNC_5(VAR_6->z_vfs);
 if (VAR_8)
  return (VAR_8);

 VAR_6->z_log = FUNC_8(VAR_6->z_os, VAR_3);






 if (VAR_7) {
  boolean_t VAR_9;





  VAR_9 = VAR_6->z_vfs->vfs_flag & VAR_2;
  if (VAR_9 != 0)
   VAR_6->z_vfs->vfs_flag &= ~VAR_2;
  else
   FUNC_6(VAR_6);
  if (FUNC_4(FUNC_1(VAR_6->z_os))) {
   if (VAR_5) {
    FUNC_7(VAR_6->z_log, VAR_0);
   } else {
    VAR_6->z_replay = VAR_1;
    FUNC_9(VAR_6->z_os, VAR_6,
        VAR_4);
    VAR_6->z_replay = VAR_0;
   }
  }
  VAR_6->z_vfs->vfs_flag |= VAR_9;
 }




 FUNC_2(&VAR_6->z_os->os_user_ptr_lock);
 FUNC_0(VAR_6->z_os, VAR_6);
 FUNC_3(&VAR_6->z_os->os_user_ptr_lock);

 return (0);
}
