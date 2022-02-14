
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int zpool_hdl; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_12__ {int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int uint64_t ;
struct TYPE_13__ {int member_0; } ;
typedef TYPE_3__ prop_flags_t ;
typedef int nvlist_t ;
typedef int errbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,char const*,char const*) ;
 scalar_t__ FUNC_3 (int **,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,int *) ;
 int FUNC_9 (int ,int ,TYPE_2__*) ;
 int FUNC_10 (TYPE_1__*,int ,int *) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (int ,int ,char*) ;
 int * FUNC_13 (int ,int ,int *,int ,TYPE_3__,char*) ;

int
FUNC_14(zpool_handle_t *VAR_5, const char *VAR_6, const char *VAR_7)
{
 zfs_cmd_t VAR_8 = { 0 };
 int VAR_9 = -1;
 char VAR_10[1024];
 nvlist_t *VAR_11 = ((void*)0);
 nvlist_t *VAR_12;
 uint64_t VAR_13;
 prop_flags_t VAR_14 = { 0 };

 (void) FUNC_5(VAR_10, sizeof (VAR_10),
     FUNC_0(VAR_1, "cannot set property for '%s'"),
     VAR_5->zpool_name);

 if (FUNC_3(&VAR_11, VAR_0, 0) != 0)
  return (FUNC_1(VAR_5->zpool_hdl));

 if (FUNC_2(VAR_11, VAR_6, VAR_7) != 0) {
  FUNC_4(VAR_11);
  return (FUNC_1(VAR_5->zpool_hdl));
 }

 VAR_13 = FUNC_10(VAR_5, VAR_3, ((void*)0));
 if ((VAR_12 = FUNC_13(VAR_5->zpool_hdl,
     VAR_5->zpool_name, VAR_11, VAR_13, VAR_14, VAR_10)) == ((void*)0)) {
  FUNC_4(VAR_11);
  return (-1);
 }

 FUNC_4(VAR_11);
 VAR_11 = VAR_12;




 (void) FUNC_6(VAR_8.zc_name, VAR_5->zpool_name, sizeof (VAR_8.zc_name));

 if (FUNC_8(VAR_5->zpool_hdl, &VAR_8, VAR_11) != 0) {
  FUNC_4(VAR_11);
  return (-1);
 }

 VAR_9 = FUNC_9(VAR_5->zpool_hdl, VAR_2, &VAR_8);

 FUNC_7(&VAR_8);
 FUNC_4(VAR_11);

 if (VAR_9)
  (void) FUNC_12(VAR_5->zpool_hdl, VAR_4, VAR_10);
 else
  (void) FUNC_11(VAR_5);

 return (VAR_9);
}
