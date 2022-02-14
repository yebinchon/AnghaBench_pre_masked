
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* z_vfs; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_10__ {int os_user_ptr_lock; } ;
typedef TYPE_3__ objset_t ;
typedef int boolean_t ;
struct TYPE_8__ {int mnt_kern_flag; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

boolean_t
FUNC_5(objset_t *VAR_4)
{
 zfsvfs_t *VAR_5;
 boolean_t VAR_6 = VAR_0;

 FUNC_0(FUNC_2(VAR_4) == VAR_2);

 FUNC_3(&VAR_4->os_user_ptr_lock);
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 != ((void*)0) && VAR_5->z_vfs != ((void*)0) &&
     (VAR_5->z_vfs->mnt_kern_flag & VAR_3))
  VAR_6 = VAR_1;
 FUNC_4(&VAR_4->os_user_ptr_lock);

 return (VAR_6);
}
