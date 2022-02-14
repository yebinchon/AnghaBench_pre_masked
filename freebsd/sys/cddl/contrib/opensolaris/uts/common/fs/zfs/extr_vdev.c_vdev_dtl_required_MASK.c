
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int vdev_cant_read; struct TYPE_8__* vdev_top; TYPE_2__* vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint8_t ;
struct TYPE_9__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 scalar_t__ VAR_6 ;

boolean_t
FUNC_5(vdev_t *VAR_7)
{
 spa_t *VAR_8 = VAR_7->vdev_spa;
 vdev_t *VAR_9 = VAR_7->vdev_top;
 uint8_t VAR_10 = VAR_7->vdev_cant_read;
 boolean_t VAR_11;

 FUNC_0(FUNC_1(VAR_8, VAR_5, VAR_4) == VAR_5);

 if (VAR_7 == VAR_8->spa_root_vdev || VAR_7 == VAR_9)
  return (VAR_1);






 VAR_7->vdev_cant_read = VAR_1;
 FUNC_3(VAR_9, 0, 0, VAR_0);
 VAR_11 = !FUNC_2(VAR_9, VAR_2);
 VAR_7->vdev_cant_read = VAR_10;
 FUNC_3(VAR_9, 0, 0, VAR_0);

 if (!VAR_11 && VAR_6)
  VAR_11 = !!FUNC_4(VAR_7, ((void*)0), VAR_3);

 return (VAR_11);
}
