
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
typedef int objset_t ;
struct TYPE_5__ {scalar_t__ vfs_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(vnode_t *VAR_1, const char *VAR_2, int VAR_3, char *VAR_4)
{
 objset_t *VAR_5 = ((zfsvfs_t *)((VAR_1)->v_vfsp->vfs_data))->z_os;

 FUNC_1(VAR_5, VAR_4);
 if (FUNC_3(VAR_4) + 1 + FUNC_3(VAR_2) >= VAR_3)
  return (FUNC_0(VAR_0));
 (void) FUNC_2(VAR_4, "@");
 (void) FUNC_2(VAR_4, VAR_2);
 return (0);
}
