
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {int zc_cookie; scalar_t__ zc_nvlist_src; int zc_guid; int zc_name; int zc_iflags; int zc_nvlist_src_size; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int vdev_t ;
struct TYPE_17__ {scalar_t__ spa_last_open_failed; } ;
typedef TYPE_2__ spa_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (scalar_t__,int ,int ,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ) ;
 int * FUNC_9 (TYPE_2__*,int ,int ) ;
 int VAR_9 ;
 int FUNC_10 (int ,TYPE_2__**,int ) ;
 int FUNC_11 (int ,TYPE_2__**,int ,int *,int **) ;
 int FUNC_12 (TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int FUNC_14 (TYPE_2__*,int *,int ) ;
 int FUNC_15 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_16 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_17(zfs_cmd_t *VAR_10)
{
 spa_t *VAR_11;
 vdev_t *VAR_12;
 int VAR_13;




 FUNC_2(&VAR_9);
 VAR_11 = FUNC_8(VAR_10->zc_name);
 if (VAR_11 == ((void*)0)) {
  FUNC_3(&VAR_9);
  return (FUNC_0(VAR_2));
 }
 if (FUNC_7(VAR_11) == VAR_7) {

  FUNC_12(VAR_11, VAR_6);
 }
 VAR_11->spa_last_open_failed = 0;
 FUNC_3(&VAR_9);

 if (VAR_10->zc_cookie & VAR_8) {
  VAR_13 = FUNC_10(VAR_10->zc_name, &VAR_11, VAR_4);
 } else {
  nvlist_t *VAR_14;
  nvlist_t *VAR_15 = ((void*)0);

  if (VAR_10->zc_nvlist_src == 0)
   return (FUNC_0(VAR_1));

  if ((VAR_13 = FUNC_1(VAR_10->zc_nvlist_src,
      VAR_10->zc_nvlist_src_size, VAR_10->zc_iflags, &VAR_14)) == 0) {
   VAR_13 = FUNC_11(VAR_10->zc_name, &VAR_11, VAR_4,
       VAR_14, &VAR_15);
   if (VAR_15 != ((void*)0)) {
    int VAR_16;

    if ((VAR_16 = FUNC_5(VAR_10, VAR_15)) != 0)
     VAR_13 = VAR_16;
    FUNC_4(VAR_15);
   }
   FUNC_4(VAR_14);
  }
 }

 if (VAR_13 != 0)
  return (VAR_13);

 FUNC_13(VAR_11, VAR_5);

 if (VAR_10->zc_guid == 0) {
  VAR_12 = ((void*)0);
 } else {
  VAR_12 = FUNC_9(VAR_11, VAR_10->zc_guid, VAR_0);
  if (VAR_12 == ((void*)0)) {
   (void) FUNC_14(VAR_11, ((void*)0), VAR_3);
   FUNC_6(VAR_11, VAR_4);
   return (FUNC_0(VAR_3));
  }
 }

 FUNC_15(VAR_11, VAR_12);

 (void) FUNC_14(VAR_11, ((void*)0), 0);




 if (FUNC_16(VAR_11) != 0)
  VAR_13 = FUNC_0(VAR_2);

 FUNC_6(VAR_11, VAR_4);

 return (VAR_13);
}
