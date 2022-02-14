
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ vdev_notrim; TYPE_2__* vdev_trimmap; } ;
typedef TYPE_1__ vdev_t ;
typedef int uint64_t ;
struct TYPE_7__ {int tm_lock; } ;
typedef TYPE_2__ trim_map_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int VAR_0 ;

void
FUNC_4(vdev_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3, uint64_t VAR_4)
{
 trim_map_t *VAR_5 = VAR_1->vdev_trimmap;

 if (!VAR_0 || VAR_1->vdev_notrim || VAR_5 == ((void*)0))
  return;

 FUNC_1(&VAR_5->tm_lock);
 FUNC_3(VAR_5, VAR_2, FUNC_0(VAR_1, VAR_2, VAR_3), VAR_4);
 FUNC_2(&VAR_5->tm_lock);
}
