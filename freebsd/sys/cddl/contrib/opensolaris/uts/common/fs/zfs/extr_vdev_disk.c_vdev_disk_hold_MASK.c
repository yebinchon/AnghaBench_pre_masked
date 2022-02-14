
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* vdev_path; unsigned long long vdev_wholedisk; int vdev_devid_vp; int * vdev_devid; int * vdev_name_vp; int * vdev_tsd; int vdev_spa; } ;
typedef TYPE_1__ vdev_t ;
typedef int ddi_devid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *,char**) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t,int ) ;
 int FUNC_5 (char*,size_t) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (char*,int **) ;
 int FUNC_8 (char*,size_t,char*,char*) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(vdev_t *VAR_3)
{
 ddi_devid_t VAR_4;
 char *VAR_5;

 FUNC_0(FUNC_9(VAR_3->vdev_spa, VAR_2, VAR_1));




 if (VAR_3->vdev_path == ((void*)0) || VAR_3->vdev_path[0] != '/')
  return;





 if (VAR_3->vdev_tsd != ((void*)0))
  return;

 if (VAR_3->vdev_wholedisk == -1ULL) {
  size_t VAR_6 = FUNC_10(VAR_3->vdev_path) + 3;
  char *VAR_7 = FUNC_4(VAR_6, VAR_0);

  (void) FUNC_8(VAR_7, VAR_6, "%ss0", VAR_3->vdev_path);

  (void) FUNC_7(VAR_7, &VAR_3->vdev_name_vp);
  FUNC_5(VAR_7, VAR_6);
 }

 if (VAR_3->vdev_name_vp == ((void*)0))
  (void) FUNC_7(VAR_3->vdev_path, &VAR_3->vdev_name_vp);

 if (VAR_3->vdev_devid != ((void*)0) &&
     FUNC_2(VAR_3->vdev_devid, &VAR_4, &VAR_5) == 0) {
  (void) FUNC_6(VAR_4, VAR_5, &VAR_3->vdev_devid_vp);
  FUNC_3(VAR_5);
  FUNC_1(VAR_4);
 }
}
