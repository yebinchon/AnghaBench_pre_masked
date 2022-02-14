
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_stats {int count; TYPE_4__* data; } ;
struct drm_file {TYPE_3__* master; } ;
struct drm_device {int counters; scalar_t__* types; int * counts; } ;
struct TYPE_8__ {scalar_t__ type; int value; } ;
struct TYPE_6__ {TYPE_1__* hw_lock; } ;
struct TYPE_7__ {TYPE_2__ lock; } ;
struct TYPE_5__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_stats*,int ,int) ;

int FUNC_2(struct drm_device *VAR_1, void *VAR_2,
   struct drm_file *VAR_3)
{
 struct drm_stats *VAR_4 = VAR_2;
 int VAR_5;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 for (VAR_5 = 0; VAR_5 < VAR_1->counters; VAR_5++) {
  if (VAR_1->types[VAR_5] == VAR_0)
   VAR_4->data[VAR_5].value =
       (VAR_3->master->lock.hw_lock ? VAR_3->master->lock.hw_lock->lock : 0);
  else
   VAR_4->data[VAR_5].value = FUNC_0(&VAR_1->counts[VAR_5]);
  VAR_4->data[VAR_5].type = VAR_1->types[VAR_5];
 }

 VAR_4->count = VAR_1->counters;

 return 0;
}
