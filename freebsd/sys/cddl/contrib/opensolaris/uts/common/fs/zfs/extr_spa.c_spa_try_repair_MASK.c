
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ vs_aux; } ;
struct TYPE_11__ {TYPE_1__ vdev_stat; void* vdev_offline; } ;
typedef TYPE_2__ vdev_t ;
typedef int uint_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_12__ {int spa_root_vdev; } ;
typedef TYPE_3__ spa_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__**,int) ;
 TYPE_2__** FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int *,int ,int **) ;
 scalar_t__ FUNC_3 (int *,int ,scalar_t__**,int*) ;
 TYPE_2__* FUNC_4 (TYPE_3__*,scalar_t__,void*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(spa_t *VAR_6, nvlist_t *VAR_7)
{
 uint_t VAR_8;
 uint64_t *VAR_9;
 uint_t VAR_10, VAR_11;
 nvlist_t *VAR_12;
 vdev_t **VAR_13;
 boolean_t VAR_14;

 if (FUNC_2(VAR_7, VAR_4, &VAR_12) != 0)
  return;


 if (FUNC_3(VAR_12, VAR_5,
     &VAR_9, &VAR_11) != 0)
  return;

 VAR_13 = FUNC_1(VAR_11 * sizeof (vdev_t *), VAR_2);


 VAR_14 = VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  if (VAR_9[VAR_10] == 0)
   continue;

  VAR_13[VAR_10] = FUNC_4(VAR_6, VAR_9[VAR_10], VAR_0);
  if (VAR_13[VAR_10] == ((void*)0)) {




   VAR_14 = VAR_0;
  } else {

   VAR_13[VAR_10]->vdev_offline = VAR_0;
  }
 }

 if (VAR_14) {
  FUNC_5(VAR_6->spa_root_vdev);


  for (VAR_8 = 0, VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   if (VAR_13[VAR_10] != ((void*)0) &&
       VAR_13[VAR_10]->vdev_stat.vs_aux != VAR_3)
    break;
   ++VAR_8;
  }
 }






 if (!VAR_14 || VAR_11 == VAR_8) {
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
   if (VAR_13[VAR_10] != ((void*)0))
    FUNC_6(VAR_13[VAR_10]);
  FUNC_5(VAR_6->spa_root_vdev);
 }

 FUNC_0(VAR_13, VAR_11 * sizeof (vdev_t *));
}
