
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * vdev_fru; int * vdev_path; TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_5__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int *,int ,scalar_t__) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,int *) ;

int
FUNC_8(spa_t *VAR_5, uint64_t VAR_6, const char *VAR_7,
    boolean_t VAR_8)
{
 vdev_t *VAR_9;
 boolean_t VAR_10 = VAR_0;

 FUNC_0(FUNC_6(VAR_5));

 FUNC_4(VAR_5, VAR_4);

 if ((VAR_9 = FUNC_1(VAR_5, VAR_6, VAR_1)) == ((void*)0))
  return (FUNC_5(VAR_5, ((void*)0), VAR_2));

 if (!VAR_9->vdev_ops->vdev_op_leaf)
  return (FUNC_5(VAR_5, ((void*)0), VAR_3));

 if (VAR_8) {
  if (FUNC_7(VAR_7, VAR_9->vdev_path) != 0) {
   FUNC_3(VAR_9->vdev_path);
   VAR_9->vdev_path = FUNC_2(VAR_7);
   VAR_10 = VAR_1;
  }
 } else {
  if (VAR_9->vdev_fru == ((void*)0)) {
   VAR_9->vdev_fru = FUNC_2(VAR_7);
   VAR_10 = VAR_1;
  } else if (FUNC_7(VAR_7, VAR_9->vdev_fru) != 0) {
   FUNC_3(VAR_9->vdev_fru);
   VAR_9->vdev_fru = FUNC_2(VAR_7);
   VAR_10 = VAR_1;
  }
 }

 return (FUNC_5(VAR_5, VAR_10 ? VAR_9 : ((void*)0), 0));
}
