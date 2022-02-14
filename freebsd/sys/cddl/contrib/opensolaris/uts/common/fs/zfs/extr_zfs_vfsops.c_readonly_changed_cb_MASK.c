
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* z_vfs; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int vfs_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, uint64_t VAR_4)
{
 zfsvfs_t *VAR_5 = VAR_3;

 if (VAR_4) {

  VAR_5->z_vfs->vfs_flag |= VAR_2;
  FUNC_0(VAR_5->z_vfs, VAR_1);
  FUNC_1(VAR_5->z_vfs, VAR_0, ((void*)0), 0);
 } else {

  VAR_5->z_vfs->vfs_flag &= ~VAR_2;
  FUNC_0(VAR_5->z_vfs, VAR_0);
  FUNC_1(VAR_5->z_vfs, VAR_1, ((void*)0), 0);
 }
}
