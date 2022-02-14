
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_7__ {int zc_guid; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int msg ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (char*,int,char*,char const*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ,char*) ;
 int FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (int *,int ,TYPE_2__*) ;
 int * FUNC_8 (TYPE_1__*,char const*,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_9 (int *,int,char*) ;

int
FUNC_10(zpool_handle_t *VAR_9, const char *VAR_10)
{
 zfs_cmd_t VAR_11 = { 0 };
 char VAR_12[1024];
 nvlist_t *VAR_13;
 boolean_t VAR_14, VAR_15;
 libzfs_handle_t *VAR_16 = VAR_9->zpool_hdl;

 (void) FUNC_2(VAR_12, sizeof (VAR_12),
     FUNC_0(VAR_5, "cannot detach %s"), VAR_10);

 (void) FUNC_3(VAR_11.zc_name, VAR_9->zpool_name, sizeof (VAR_11.zc_name));
 if ((VAR_13 = FUNC_8(VAR_9, VAR_10, &VAR_14, &VAR_15,
     ((void*)0))) == ((void*)0))
  return (FUNC_5(VAR_16, VAR_3, VAR_12));

 if (VAR_14)
  return (FUNC_5(VAR_16, VAR_2, VAR_12));

 if (VAR_15)
  return (FUNC_5(VAR_16, VAR_1, VAR_12));

 FUNC_4(FUNC_1(VAR_13, VAR_7, &VAR_11.zc_guid) == 0);

 if (FUNC_7(VAR_16, VAR_6, &VAR_11) == 0)
  return (0);

 switch (VAR_8) {

 case 128:



  FUNC_6(VAR_16, FUNC_0(VAR_5, "only "
      "applicable to mirror and replacing vdevs"));
  (void) FUNC_5(VAR_16, VAR_0, VAR_12);
  break;

 case 129:



  (void) FUNC_5(VAR_16, VAR_4, VAR_12);
  break;

 default:
  (void) FUNC_9(VAR_16, VAR_8, VAR_12);
 }

 return (-1);
}
