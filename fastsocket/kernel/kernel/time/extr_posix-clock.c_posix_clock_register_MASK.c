
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int owner; } ;
struct TYPE_4__ {int owner; } ;
struct posix_clock {TYPE_2__ cdev; TYPE_1__ ops; int rwsem; int kref; } ;
typedef int dev_t ;


 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

int FUNC_4(struct posix_clock *VAR_1, dev_t VAR_2)
{
 int VAR_3;

 FUNC_3(&VAR_1->kref);
 FUNC_2(&VAR_1->rwsem);

 FUNC_1(&VAR_1->cdev, &VAR_0);
 VAR_1->cdev.owner = VAR_1->ops.owner;
 VAR_3 = FUNC_0(&VAR_1->cdev, VAR_2, 1);

 return VAR_3;
}
