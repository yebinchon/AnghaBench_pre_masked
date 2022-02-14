
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int seeks; int shrink; } ;
struct TYPE_8__ {TYPE_5__ bt_shrinker; int bt_lru_lock; int bt_lru; int bt_bdi; struct block_device* bt_bdev; int bt_dev; struct xfs_mount* bt_mount; } ;
typedef TYPE_1__ xfs_buftarg_t ;
struct xfs_mount {int dummy; } ;
struct block_device {int bd_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct block_device*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,char const*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (TYPE_1__*,struct block_device*) ;

xfs_buftarg_t *
FUNC_8(
 struct xfs_mount *VAR_3,
 struct block_device *VAR_4,
 int VAR_5,
 const char *VAR_6)
{
 xfs_buftarg_t *VAR_7;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);

 VAR_7->bt_mount = VAR_3;
 VAR_7->bt_dev = VAR_4->bd_dev;
 VAR_7->bt_bdev = VAR_4;
 VAR_7->bt_bdi = FUNC_1(VAR_4);
 if (!VAR_7->bt_bdi)
  goto error;

 FUNC_0(&VAR_7->bt_lru);
 FUNC_5(&VAR_7->bt_lru_lock);
 if (FUNC_7(VAR_7, VAR_4))
  goto error;
 if (FUNC_6(VAR_7, VAR_6))
  goto error;
 VAR_7->bt_shrinker.shrink = VAR_2;
 VAR_7->bt_shrinker.seeks = VAR_0;
 FUNC_4(&VAR_7->bt_shrinker);
 return VAR_7;

error:
 FUNC_2(VAR_7);
 return ((void*)0);
}
