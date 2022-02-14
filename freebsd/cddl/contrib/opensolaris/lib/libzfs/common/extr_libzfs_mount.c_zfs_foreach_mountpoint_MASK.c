
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zoneid_t ;
typedef int (* zfs_iter_f ) (int *,void*) ;
typedef int zfs_handle_t ;
typedef int tpool_t ;
typedef int libzfs_handle_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char*) ;
 scalar_t__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int **,size_t,int) ;
 int FUNC_3 (int **,size_t,int,int ) ;
 int * FUNC_4 (int,int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int **,size_t,int,int (*) (int *,void*),void*,int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;

void
FUNC_9(libzfs_handle_t *VAR_4, zfs_handle_t **VAR_5,
    size_t VAR_6, zfs_iter_f VAR_7, void *VAR_8, boolean_t VAR_9)
{
 zoneid_t VAR_10 = FUNC_1();






 boolean_t VAR_11 = !VAR_9 ||
     (FUNC_0("ZFS_SERIAL_MOUNT") != ((void*)0));





 FUNC_3(VAR_5, VAR_6, sizeof (zfs_handle_t *), VAR_3);

 if (VAR_11) {
  for (int VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   VAR_7(VAR_5[VAR_12], VAR_8);
  }
  return;
 }





 tpool_t *VAR_13 = FUNC_4(1, VAR_2, 0, ((void*)0));






 for (int VAR_14 = 0; VAR_14 < VAR_6;
     VAR_14 = FUNC_2(VAR_5, VAR_6, VAR_14)) {





  if (VAR_10 == VAR_0 &&
      FUNC_8(VAR_5[VAR_14], VAR_1))
   break;
  FUNC_7(VAR_4, VAR_5, VAR_6, VAR_14, VAR_7, VAR_8,
      VAR_13);
 }

 FUNC_6(VAR_13);
 FUNC_5(VAR_13);
}
