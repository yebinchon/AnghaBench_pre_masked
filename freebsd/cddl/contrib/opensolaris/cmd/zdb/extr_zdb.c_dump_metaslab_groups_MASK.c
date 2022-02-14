
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {unsigned int vdev_children; scalar_t__ vdev_ms_count; scalar_t__ vdev_id; TYPE_3__* vdev_mg; struct TYPE_13__** vdev_child; } ;
typedef TYPE_1__ vdev_t ;
typedef scalar_t__ uint64_t ;
typedef char* u_longlong_t ;
struct TYPE_14__ {TYPE_1__* spa_root_vdev; } ;
typedef TYPE_2__ spa_t ;
struct TYPE_15__ {scalar_t__ mg_fragmentation; int mg_histogram; TYPE_4__* mg_class; } ;
typedef TYPE_3__ metaslab_group_t ;
struct TYPE_16__ {int mc_histogram; } ;
typedef TYPE_4__ metaslab_class_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (char*,char*,...) ;
 char* FUNC_6 (TYPE_2__*) ;
 TYPE_4__* FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(spa_t *VAR_2)
{
 vdev_t *VAR_3 = VAR_2->spa_root_vdev;
 metaslab_class_t *VAR_4 = FUNC_7(VAR_2);
 uint64_t VAR_5;

 FUNC_2(VAR_4);

 for (unsigned VAR_6 = 0; VAR_6 < VAR_3->vdev_children; VAR_6++) {
  vdev_t *VAR_7 = VAR_3->vdev_child[VAR_6];
  metaslab_group_t *VAR_8 = VAR_7->vdev_mg;

  if (VAR_8->mg_class != VAR_4)
   continue;

  FUNC_4(VAR_8);
  VAR_8->mg_fragmentation = FUNC_3(VAR_8);

  (void) FUNC_5("\tvdev %10llu\t\tmetaslabs%5llu\t\t"
      "fragmentation",
      (u_longlong_t)VAR_7->vdev_id,
      (u_longlong_t)VAR_7->vdev_ms_count);
  if (VAR_8->mg_fragmentation == VAR_1) {
   (void) FUNC_5("%3s\n", "-");
  } else {
   (void) FUNC_5("%3llu%%\n",
       (u_longlong_t)VAR_8->mg_fragmentation);
  }
  FUNC_0(VAR_8->mg_histogram, VAR_0, 0);
 }

 (void) FUNC_5("\tpool %s\tfragmentation", FUNC_6(VAR_2));
 VAR_5 = FUNC_1(VAR_4);
 if (VAR_5 == VAR_1)
  (void) FUNC_5("\t%3s\n", "-");
 else
  (void) FUNC_5("\t%3llu%%\n", (u_longlong_t)VAR_5);
 FUNC_0(VAR_4->mc_histogram, VAR_0, 0);
}
