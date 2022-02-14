
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_bdev; int s_dev; } ;
struct nilfs_super_data {TYPE_1__* bdev; } ;
struct TYPE_2__ {int bd_dev; } ;



__attribute__((used)) static int FUNC_0(struct super_block *VAR_0, void *VAR_1)
{
 struct nilfs_super_data *VAR_2 = VAR_1;

 VAR_0->s_bdev = VAR_2->bdev;
 VAR_0->s_dev = VAR_0->s_bdev->bd_dev;
 return 0;
}
