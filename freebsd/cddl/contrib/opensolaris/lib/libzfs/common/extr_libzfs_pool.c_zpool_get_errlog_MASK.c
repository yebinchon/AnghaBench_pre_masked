
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_5__* zpool_hdl; int zpool_name; int zpool_config; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_10__ {uintptr_t zc_nvlist_dst; int zc_nvlist_dst_size; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
struct TYPE_11__ {scalar_t__ zb_objset; scalar_t__ zb_object; } ;
typedef TYPE_3__ zbookmark_phys_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_12__ {int libzfs_fd; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int **,int ,int ) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (TYPE_3__*,int,int,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int) ;
 int VAR_8 ;
 void* FUNC_11 (TYPE_5__*,int) ;

int
FUNC_12(zpool_handle_t *VAR_9, nvlist_t **VAR_10)
{
 zfs_cmd_t VAR_11 = { 0 };
 uint64_t VAR_12;
 zbookmark_phys_t *VAR_13 = ((void*)0);
 int VAR_14;






 FUNC_10(FUNC_7(VAR_9->zpool_config, VAR_4,
     &VAR_12) == 0);
 if (VAR_12 == 0)
  return (0);
 if ((VAR_11.zc_nvlist_dst = (uintptr_t)FUNC_11(VAR_9->zpool_hdl,
     VAR_12 * sizeof (zbookmark_phys_t))) == (uintptr_t)((void*)0))
  return (-1);
 VAR_11.zc_nvlist_dst_size = VAR_12;
 (void) FUNC_9(VAR_11.zc_name, VAR_9->zpool_name);
 for (;;) {
  if (FUNC_1(VAR_9->zpool_hdl->libzfs_fd, VAR_3,
      &VAR_11) != 0) {
   FUNC_0((void *)(uintptr_t)VAR_11.zc_nvlist_dst);
   if (VAR_7 == VAR_0) {
    void *VAR_15;

    VAR_12 = VAR_11.zc_nvlist_dst_size;
    VAR_15 = FUNC_11(VAR_9->zpool_hdl, VAR_12 *
        sizeof (zbookmark_phys_t));
    if (VAR_15 == ((void*)0))
     return (-1);
    VAR_11.zc_nvlist_dst = (uintptr_t)VAR_15;
   } else {
    return (-1);
   }
  } else {
   break;
  }
 }
 VAR_13 = ((zbookmark_phys_t *)(uintptr_t)VAR_11.zc_nvlist_dst) +
     VAR_11.zc_nvlist_dst_size;
 VAR_12 -= VAR_11.zc_nvlist_dst_size;

 FUNC_8(VAR_13, VAR_12, sizeof (zbookmark_phys_t), VAR_8);

 FUNC_10(FUNC_5(VAR_10, 0, VAR_1) == 0);




 for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
  nvlist_t *VAR_16;


  if (VAR_14 > 0 && VAR_13[VAR_14-1].zb_objset == VAR_13[VAR_14].zb_objset &&
      VAR_13[VAR_14-1].zb_object == VAR_13[VAR_14].zb_object)
   continue;

  if (FUNC_5(&VAR_16, VAR_2, VAR_1) != 0)
   goto nomem;
  if (FUNC_4(VAR_16, VAR_5,
      VAR_13[VAR_14].zb_objset) != 0) {
   FUNC_6(VAR_16);
   goto nomem;
  }
  if (FUNC_4(VAR_16, VAR_6,
      VAR_13[VAR_14].zb_object) != 0) {
   FUNC_6(VAR_16);
   goto nomem;
  }
  if (FUNC_3(*VAR_10, "ejk", VAR_16) != 0) {
   FUNC_6(VAR_16);
   goto nomem;
  }
  FUNC_6(VAR_16);
 }

 FUNC_0((void *)(uintptr_t)VAR_11.zc_nvlist_dst);
 return (0);

nomem:
 FUNC_0((void *)(uintptr_t)VAR_11.zc_nvlist_dst);
 return (FUNC_2(VAR_9->zpool_hdl));
}
