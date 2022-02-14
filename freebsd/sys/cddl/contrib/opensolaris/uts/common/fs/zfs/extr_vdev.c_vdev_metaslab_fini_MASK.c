
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t vdev_ms_count; int ** vdev_ms; int vdev_mg; int * vdev_checkpoint_sm; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int metaslab_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 (int **,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(vdev_t *VAR_1)
{
 if (VAR_1->vdev_checkpoint_sm != ((void*)0)) {
  FUNC_0(FUNC_5(VAR_1->vdev_spa,
      VAR_0));
  FUNC_6(VAR_1->vdev_checkpoint_sm);
  VAR_1->vdev_checkpoint_sm = ((void*)0);
 }

 if (VAR_1->vdev_ms != ((void*)0)) {
  uint64_t VAR_2 = VAR_1->vdev_ms_count;

  FUNC_4(VAR_1->vdev_mg);
  for (uint64_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
   metaslab_t *VAR_4 = VAR_1->vdev_ms[VAR_3];

   if (VAR_4 != ((void*)0))
    FUNC_3(VAR_4);
  }
  FUNC_2(VAR_1->vdev_ms, VAR_2 * sizeof (metaslab_t *));
  VAR_1->vdev_ms = ((void*)0);

  VAR_1->vdev_ms_count = 0;
 }
 FUNC_1(VAR_1->vdev_ms_count);
}
