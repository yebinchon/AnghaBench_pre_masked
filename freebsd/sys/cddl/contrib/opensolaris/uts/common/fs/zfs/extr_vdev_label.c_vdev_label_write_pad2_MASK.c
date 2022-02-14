
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_7__ {TYPE_1__* vdev_ops; int * vdev_spa; } ;
typedef TYPE_2__ vdev_t ;
typedef int spa_t ;
typedef int abd_t ;
struct TYPE_6__ {int vdev_op_leaf; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 int VAR_10 ;
 int FUNC_8 (int *,TYPE_2__*,int ,int *,int ,size_t,int *,int *,int) ;
 int VAR_11 ;
 int * FUNC_9 (int *,int *,int *,int) ;
 int FUNC_10 (int *) ;

int
FUNC_11(vdev_t *VAR_12, const char *VAR_13, size_t VAR_14)
{
 spa_t *VAR_15 = VAR_12->vdev_spa;
 zio_t *VAR_16;
 abd_t *VAR_17;
 int VAR_18 = VAR_8 | VAR_7;
 int VAR_19;

 if (VAR_14 > VAR_6)
  return (VAR_1);

 if (!VAR_12->vdev_ops->vdev_op_leaf)
  return (VAR_2);
 if (FUNC_7(VAR_12))
  return (VAR_3);

 FUNC_0(FUNC_6(VAR_15, VAR_5, VAR_4) == VAR_5);

 VAR_17 = FUNC_1(VAR_6, VAR_0);
 FUNC_4(VAR_17, VAR_6);
 FUNC_2(VAR_17, VAR_13, VAR_14);

retry:
 VAR_16 = FUNC_9(VAR_15, ((void*)0), ((void*)0), VAR_18);
 FUNC_8(VAR_16, VAR_12, 0, VAR_17,
     FUNC_5(VAR_10, VAR_11),
     VAR_6, ((void*)0), ((void*)0), VAR_18);
 VAR_19 = FUNC_10(VAR_16);
 if (VAR_19 != 0 && !(VAR_18 & VAR_9)) {
  VAR_18 |= VAR_9;
  goto retry;
 }

 FUNC_3(VAR_17);
 return (VAR_19);
}
