
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * z_os; } ;
typedef TYPE_2__ zfsvfs_t ;
struct TYPE_7__ {TYPE_1__* v_vfsp; } ;
typedef TYPE_3__ vnode_t ;
typedef int uint64_t ;
typedef int objset_t ;
struct TYPE_5__ {scalar_t__ vfs_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char const*,int *) ;

__attribute__((used)) static int
FUNC_2(vnode_t *VAR_0, const char *VAR_1, uint64_t *VAR_2)
{
 objset_t *VAR_3 = ((zfsvfs_t *)((VAR_0)->v_vfsp->vfs_data))->z_os;
 int VAR_4;

 VAR_4 = FUNC_1(FUNC_0(VAR_3), VAR_1, VAR_2);
 return (VAR_4);
}
