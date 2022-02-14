
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * vdev_path; scalar_t__ vdev_guid; } ;
typedef TYPE_1__ vdev_t ;
typedef int u_longlong_t ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,int *,...) ;

__attribute__((used)) static void
FUNC_4(vdev_t *VAR_0, vdev_t *VAR_1)
{
 if (VAR_0->vdev_path != ((void*)0) && VAR_1->vdev_path != ((void*)0)) {
  if (FUNC_2(VAR_0->vdev_path, VAR_1->vdev_path) != 0) {
   FUNC_3("vdev_copy_path: vdev %llu: path changed "
       "from '%s' to '%s'", (u_longlong_t)VAR_1->vdev_guid,
       VAR_1->vdev_path, VAR_0->vdev_path);
   FUNC_1(VAR_1->vdev_path);
   VAR_1->vdev_path = FUNC_0(VAR_0->vdev_path);
  }
 } else if (VAR_0->vdev_path != ((void*)0)) {
  VAR_1->vdev_path = FUNC_0(VAR_0->vdev_path);
  FUNC_3("vdev_copy_path: vdev %llu: path set to '%s'",
      (u_longlong_t)VAR_1->vdev_guid, VAR_1->vdev_path);
 }
}
