
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * z_vfs; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int vfs_t ;
struct TYPE_8__ {int os_user_ptr_lock; } ;
typedef TYPE_2__ objset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(objset_t *VAR_3, vfs_t **VAR_4)
{
 zfsvfs_t *VAR_5;
 int VAR_6 = 0;

 if (FUNC_2(VAR_3) != VAR_0) {
  return (FUNC_0(VAR_1));
 }

 FUNC_3(&VAR_3->os_user_ptr_lock);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5) {
  *VAR_4 = VAR_5->z_vfs;
  FUNC_5(VAR_5->z_vfs);
 } else {
  VAR_6 = FUNC_0(VAR_2);
 }
 FUNC_4(&VAR_3->os_user_ptr_lock);
 return (VAR_6);
}
