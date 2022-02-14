
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


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_4, uint64_t VAR_5)
{
 zfsvfs_t *VAR_6 = VAR_4;

 if (VAR_5 == VAR_0) {
  VAR_6->z_vfs->vfs_flag |= VAR_3;
  FUNC_0(VAR_6->z_vfs, VAR_1);
  FUNC_1(VAR_6->z_vfs, VAR_2, ((void*)0), 0);
 } else {
  VAR_6->z_vfs->vfs_flag &= ~VAR_3;
  FUNC_0(VAR_6->z_vfs, VAR_2);
  FUNC_1(VAR_6->z_vfs, VAR_1, ((void*)0), 0);
 }
}
