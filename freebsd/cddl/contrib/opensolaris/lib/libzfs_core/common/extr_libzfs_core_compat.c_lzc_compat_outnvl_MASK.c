
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfs_ioc_t ;
struct TYPE_3__ {int zc_perm_action; int zc_objset_type; int zc_cookie; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;


 scalar_t__ VAR_0 ;

 int FUNC_0 (int *,char*,int ) ;
 int * FUNC_1 () ;
 scalar_t__ VAR_1 ;

int
FUNC_2(zfs_cmd_t *VAR_2, const zfs_ioc_t VAR_3, nvlist_t **VAR_4)
{
 nvlist_t *VAR_5;

 if (VAR_1 >= VAR_0)
  return (0);

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_1();
  FUNC_0(VAR_5, "used", VAR_2->zc_cookie);
  FUNC_0(VAR_5, "compressed", VAR_2->zc_objset_type);
  FUNC_0(VAR_5, "uncompressed", VAR_2->zc_perm_action);
  *VAR_4 = VAR_5;
 break;
 }

 return (0);
}
