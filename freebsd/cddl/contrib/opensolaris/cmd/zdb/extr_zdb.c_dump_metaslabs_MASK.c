
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t vdev_children; size_t vdev_ms_count; int * vdev_ms; struct TYPE_6__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef size_t uint64_t ;
typedef int u_longlong_t ;
struct TYPE_7__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int VAR_1 ;
 size_t* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_6(spa_t *VAR_4)
{
 vdev_t *VAR_5, *VAR_6 = VAR_4->spa_root_vdev;
 uint64_t VAR_7, VAR_8 = 0, VAR_9 = VAR_6->vdev_children;

 (void) FUNC_5("\nMetaslabs:\n");

 if (!VAR_0['d'] && VAR_3 > 0) {
  VAR_8 = VAR_2[0];

  if (VAR_8 >= VAR_9)
   (void) FUNC_1("bad vdev id: %llu", (u_longlong_t)VAR_8);

  if (VAR_3 > 1) {
   VAR_5 = VAR_6->vdev_child[VAR_8];
   FUNC_4(VAR_5);

   for (VAR_7 = 1; VAR_7 < VAR_3; VAR_7++) {
    if (VAR_2[VAR_7] < VAR_5->vdev_ms_count)
     FUNC_0(
         VAR_5->vdev_ms[VAR_2[VAR_7]]);
    else
     (void) FUNC_2(VAR_1, "bad metaslab "
         "number %d\n",
         (u_longlong_t)VAR_2[VAR_7]);
   }
   (void) FUNC_5("\n");
   return;
  }
  VAR_9 = VAR_8 + 1;
 }
 for (; VAR_8 < VAR_9; VAR_8++) {
  VAR_5 = VAR_6->vdev_child[VAR_8];
  FUNC_4(VAR_5);

  FUNC_3(VAR_5);

  for (VAR_7 = 0; VAR_7 < VAR_5->vdev_ms_count; VAR_7++)
   FUNC_0(VAR_5->vdev_ms[VAR_7]);
  (void) FUNC_5("\n");
 }
}
