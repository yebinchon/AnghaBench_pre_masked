
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* z_vfs; scalar_t__ z_atime; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int vfs_flag; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_5, uint64_t VAR_6)
{
 zfsvfs_t *VAR_7 = VAR_5;

 if (VAR_6 == VAR_4) {
  VAR_7->z_atime = VAR_4;
  VAR_7->z_vfs->vfs_flag &= ~VAR_3;
  FUNC_0(VAR_7->z_vfs, VAR_2);
  FUNC_1(VAR_7->z_vfs, VAR_1, ((void*)0), 0);
 } else {
  VAR_7->z_atime = VAR_0;
  VAR_7->z_vfs->vfs_flag |= VAR_3;
  FUNC_0(VAR_7->z_vfs, VAR_1);
  FUNC_1(VAR_7->z_vfs, VAR_2, ((void*)0), 0);
 }
}
