
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int zprop_source_t ;
typedef int zfs_prop_t ;
struct TYPE_5__ {int zfs_hdl; int zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int *,char**,int *) ;
 int FUNC_2 (TYPE_1__*,int *,char*,char*,size_t) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6(zfs_handle_t *VAR_3, zfs_prop_t VAR_4, uint64_t *VAR_5,
    zprop_source_t *VAR_6, char *VAR_7, size_t VAR_8)
{
 char *VAR_9;




 if (!FUNC_5(VAR_4, VAR_3->zfs_type)) {
  return (FUNC_3(VAR_3->zfs_hdl, VAR_0,
      FUNC_0(VAR_1, "cannot get property '%s'"),
      FUNC_4(VAR_4)));
 }

 if (VAR_6)
  *VAR_6 = VAR_2;

 if (FUNC_1(VAR_3, VAR_4, VAR_6, &VAR_9, VAR_5) != 0)
  return (-1);

 FUNC_2(VAR_3, VAR_6, VAR_9, VAR_7, VAR_8);

 return (0);
}
