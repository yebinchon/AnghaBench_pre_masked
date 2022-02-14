
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* vdev_tsd; int vdev_delayed_close; int vdev_spa; scalar_t__ vdev_reopening; } ;
typedef TYPE_1__ vdev_t ;
struct TYPE_6__ {int * vf_vnode; } ;
typedef TYPE_2__ vdev_file_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(vdev_t *VAR_2)
{
 vdev_file_t *VAR_3 = VAR_2->vdev_tsd;

 if (VAR_2->vdev_reopening || VAR_3 == ((void*)0))
  return;

 if (VAR_3->vf_vnode != ((void*)0)) {
  (void) FUNC_0(VAR_3->vf_vnode, FUNC_2(VAR_2->vdev_spa), 1, 0,
      VAR_1, ((void*)0));
 }

 VAR_2->vdev_delayed_close = VAR_0;
 FUNC_1(VAR_3, sizeof (vdev_file_t));
 VAR_2->vdev_tsd = ((void*)0);
}
