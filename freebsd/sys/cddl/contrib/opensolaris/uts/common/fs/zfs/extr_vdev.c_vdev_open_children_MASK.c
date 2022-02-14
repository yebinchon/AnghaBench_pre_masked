
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int vdev_children; TYPE_4__** vdev_child; scalar_t__ vdev_nonrot; } ;
typedef TYPE_1__ vdev_t ;
typedef int taskq_t ;
struct TYPE_7__ {scalar_t__ vdev_nonrot; int vdev_open_error; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int * FUNC_1 (char*,int,int ,int,int,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(vdev_t *VAR_5)
{
 taskq_t *VAR_6;
 int VAR_7 = VAR_5->vdev_children;

 VAR_5->vdev_nonrot = VAR_0;






 if (VAR_0 || FUNC_5(VAR_5)) {
  for (int VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_5->vdev_child[VAR_8]->vdev_open_error =
       FUNC_4(VAR_5->vdev_child[VAR_8]);
   VAR_5->vdev_nonrot &= VAR_5->vdev_child[VAR_8]->vdev_nonrot;
  }
  return;
 }
 VAR_6 = FUNC_1("vdev_open", VAR_7, VAR_3,
     VAR_7, VAR_7, VAR_1);

 for (int VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_0(FUNC_3(VAR_6, VAR_4, VAR_5->vdev_child[VAR_9],
      VAR_2) != 0);

 FUNC_2(VAR_6);

 for (int VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  VAR_5->vdev_nonrot &= VAR_5->vdev_child[VAR_10]->vdev_nonrot;
}
