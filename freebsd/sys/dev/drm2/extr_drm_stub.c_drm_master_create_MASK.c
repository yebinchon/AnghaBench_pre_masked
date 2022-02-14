
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_minor {int master_list; } ;
struct TYPE_2__ {int lock_queue; int spinlock; } ;
struct drm_master {int head; struct drm_minor* minor; int magicfree; int magiclist; TYPE_1__ lock; int refcount; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *) ;
 struct drm_master* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int *,int) ;

struct drm_master *FUNC_7(struct drm_minor *VAR_5)
{
 struct drm_master *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1, VAR_3 | VAR_4);
 if (!VAR_6)
  return ((void*)0);

 FUNC_6(&VAR_6->refcount, 1);
 FUNC_5(&VAR_6->lock.spinlock, "drm_master__lock__spinlock",
     ((void*)0), VAR_2);
 FUNC_0(&VAR_6->lock.lock_queue);
 FUNC_2(&VAR_6->magiclist, VAR_0);
 FUNC_1(&VAR_6->magicfree);
 VAR_6->minor = VAR_5;

 FUNC_3(&VAR_6->head, &VAR_5->master_list);

 return VAR_6;
}
