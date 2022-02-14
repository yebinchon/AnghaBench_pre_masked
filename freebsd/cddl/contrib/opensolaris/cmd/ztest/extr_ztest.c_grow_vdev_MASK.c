
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {char* vdev_path; TYPE_1__* vdev_ops; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int ulong_t ;
typedef int spa_t ;
struct TYPE_8__ {int zo_verbose; } ;
struct TYPE_6__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,size_t) ;
 size_t FUNC_3 (int,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char*,int ,int ) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int ) ;
 TYPE_3__ VAR_4 ;

vdev_t *
FUNC_7(vdev_t *VAR_5, void *VAR_6)
{
 spa_t *VAR_7 = VAR_5->vdev_spa;
 size_t *VAR_8 = VAR_6;
 size_t VAR_9;
 int VAR_10;

 FUNC_0(FUNC_6(VAR_7, VAR_2, VAR_1) == VAR_2);
 FUNC_0(VAR_5->vdev_ops->vdev_op_leaf);

 if ((VAR_10 = FUNC_4(VAR_5->vdev_path, VAR_0)) == -1)
  return (VAR_5);

 VAR_9 = FUNC_3(VAR_10, 0, VAR_3);
 (void) FUNC_2(VAR_10, *VAR_8);

 if (VAR_4.zo_verbose >= 6) {
  (void) FUNC_5("%s grew from %lu to %lu bytes\n",
      VAR_5->vdev_path, (ulong_t)VAR_9, (ulong_t)*VAR_8);
 }
 (void) FUNC_1(VAR_10);
 return (((void*)0));
}
