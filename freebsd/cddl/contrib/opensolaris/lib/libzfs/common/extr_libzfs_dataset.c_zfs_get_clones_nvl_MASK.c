
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ zfs_type; int * zfs_props; int zfs_hdl; int zfs_name; } ;
typedef TYPE_1__ zfs_handle_t ;
struct get_clones_arg {scalar_t__ numclones; int origin; int * value; } ;
typedef int pool ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,struct get_clones_arg*) ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 scalar_t__ FUNC_2 (int **,int ,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 int FUNC_5 (char*,int ,int) ;
 int FUNC_6 (char**,char*) ;
 int FUNC_7 (int) ;
 TYPE_1__* FUNC_8 (int ,char*,int ) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (int ) ;

nvlist_t *
FUNC_11(zfs_handle_t *VAR_7)
{
 nvlist_t *VAR_8, *VAR_9;

 if (FUNC_4(VAR_7->zfs_props,
     FUNC_10(VAR_2), &VAR_8) != 0) {
  struct get_clones_arg VAR_10;





  if (VAR_7->zfs_type != VAR_5)
   return (((void*)0));
  if (FUNC_2(&VAR_8, VAR_0, 0) != 0)
   return (((void*)0));
  if (FUNC_2(&VAR_9, VAR_0, 0) != 0) {
   FUNC_3(VAR_8);
   return (((void*)0));
  }

  VAR_10.numclones = FUNC_9(VAR_7, VAR_3);
  VAR_10.value = VAR_9;
  VAR_10.origin = VAR_7->zfs_name;

  if (VAR_10.numclones != 0) {
   zfs_handle_t *VAR_11;
   char VAR_12[VAR_1];
   char *VAR_13 = VAR_12;


   (void) FUNC_5(VAR_12, VAR_7->zfs_name, sizeof (VAR_12));
   (void) FUNC_6(&VAR_13, "/@");
   VAR_11 = FUNC_8(VAR_7->zfs_hdl, VAR_12,
       VAR_4);

   (void) FUNC_0(VAR_11, &VAR_10);
  }

  if (VAR_10.numclones != 0 ||
      FUNC_1(VAR_8, VAR_6, VAR_9) != 0 ||
      FUNC_1(VAR_7->zfs_props,
      FUNC_10(VAR_2), VAR_8) != 0) {
   FUNC_3(VAR_8);
   FUNC_3(VAR_9);
   return (((void*)0));
  }
  FUNC_3(VAR_8);
  FUNC_3(VAR_9);
  FUNC_7(0 == FUNC_4(VAR_7->zfs_props,
      FUNC_10(VAR_2), &VAR_8));
 }

 FUNC_7(FUNC_4(VAR_8, VAR_6, &VAR_9) == 0);

 return (VAR_9);
}
