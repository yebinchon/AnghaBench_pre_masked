
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int znode_t ;
struct TYPE_7__ {int z_root; } ;
typedef TYPE_1__ zfsvfs_t ;
typedef int vnode_t ;
struct TYPE_8__ {TYPE_1__* vfs_data; } ;
typedef TYPE_2__ vfs_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (TYPE_1__*,int ,int **) ;

__attribute__((used)) static int
FUNC_6(vfs_t *VAR_0, int VAR_1, vnode_t **VAR_2)
{
 zfsvfs_t *VAR_3 = VAR_0->vfs_data;
 znode_t *VAR_4;
 int VAR_5;

 FUNC_1(VAR_3);

 VAR_5 = FUNC_5(VAR_3, VAR_3->z_root, &VAR_4);
 if (VAR_5 == 0)
  *VAR_2 = FUNC_3(VAR_4);

 FUNC_2(VAR_3);

 if (VAR_5 == 0) {
  VAR_5 = FUNC_4(*VAR_2, VAR_1);
  if (VAR_5 != 0) {
   FUNC_0(*VAR_2);
   *VAR_2 = ((void*)0);
  }
 }
 return (VAR_5);
}
