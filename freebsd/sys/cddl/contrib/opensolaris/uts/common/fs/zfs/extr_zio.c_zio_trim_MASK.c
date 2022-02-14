
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zio_t ;
struct TYPE_6__ {TYPE_1__* vdev_ops; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint64_t ;
typedef int spa_t ;
struct TYPE_5__ {int vdev_op_leaf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (int *,int *,int ,int *,int *,int ,int ,int *,int *,int ,int ,int,TYPE_2__*,int ,int *,int ,int ) ;

zio_t *
FUNC_2(zio_t *VAR_8, spa_t *VAR_9, vdev_t *VAR_10, uint64_t VAR_11, uint64_t VAR_12)
{

 FUNC_0(VAR_10->vdev_ops->vdev_op_leaf);

 return (FUNC_1(VAR_8, VAR_9, 0, ((void*)0), ((void*)0), VAR_12, VAR_12, ((void*)0), ((void*)0),
     VAR_7, VAR_5, VAR_1 |
     VAR_0 | VAR_2 | VAR_3,
     VAR_10, VAR_11, ((void*)0), VAR_6, VAR_4));
}
