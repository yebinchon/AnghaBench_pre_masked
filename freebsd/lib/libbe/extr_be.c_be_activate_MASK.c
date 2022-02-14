
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int zfs_handle_t ;
typedef int uint64_t ;
typedef int nvlist_t ;
struct TYPE_9__ {int lzh; int active_phandle; int bootfs; } ;
typedef TYPE_1__ libbe_handle_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,char*,int *) ;
 scalar_t__ FUNC_3 (int **) ;
 int FUNC_4 (TYPE_1__*,char const*,char*) ;
 int FUNC_5 (TYPE_1__*,int *,int ,char*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int ,int **) ;
 scalar_t__ FUNC_8 (int *,char*,char**) ;
 scalar_t__ FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (char*,int,char*,char*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int ,char*,int ) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ,int *) ;
 int FUNC_16 (int ,char*,char*) ;

int
FUNC_17(libbe_handle_t *VAR_7, const char *VAR_8, bool VAR_9)
{
 char VAR_10[VAR_3];
 char VAR_11[VAR_3];
 nvlist_t *VAR_12, *VAR_13, *VAR_14;
 char *VAR_15;
 uint64_t VAR_16;
 zfs_handle_t *VAR_17;
 int VAR_18;

 FUNC_4(VAR_7, VAR_8, VAR_10);


 if ((VAR_18 = FUNC_1(VAR_7, VAR_10)) != 0)
  return (FUNC_10(VAR_7, VAR_18));

 if (VAR_9) {
  VAR_12 = FUNC_15(VAR_7->active_phandle, ((void*)0));
  if (VAR_12 == ((void*)0))

   return (FUNC_10(VAR_7, VAR_2));

  if (FUNC_9(VAR_12, VAR_5,
      &VAR_16) != 0)

   return (FUNC_10(VAR_7, VAR_2));


  FUNC_11(VAR_11, sizeof(VAR_11), "zfs:%s:", VAR_10);


  if (FUNC_7(VAR_12, VAR_6,
      &VAR_14) != 0)
   return (FUNC_10(VAR_7, VAR_0));

  return (FUNC_5(VAR_7, VAR_14, VAR_16, VAR_11));
 } else {
  if (FUNC_0(VAR_7, VAR_7->bootfs) != 0)
   return (-1);


  VAR_18 = FUNC_16(VAR_7->active_phandle, "bootfs", VAR_10);
  if (VAR_18)
   return (-1);

  VAR_17 = FUNC_13(VAR_7->lzh, VAR_10, VAR_4);
  if (VAR_17 == ((void*)0))
   return (-1);

  if (FUNC_3(&VAR_13) != 0)
   return (-1);

  if (FUNC_2(VAR_7, VAR_10, VAR_13) != 0) {
   FUNC_6(VAR_13);
   return (-1);
  }

  if (FUNC_8(VAR_13, "origin", &VAR_15) == 0)
   VAR_18 = FUNC_14(VAR_17);
  FUNC_6(VAR_13);

  FUNC_12(VAR_17);

  if (VAR_18)
   return (-1);
 }

 return (VAR_1);
}
