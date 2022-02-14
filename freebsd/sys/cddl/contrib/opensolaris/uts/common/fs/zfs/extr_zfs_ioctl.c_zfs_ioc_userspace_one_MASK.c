
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfsvfs_t ;
struct TYPE_3__ {int zc_cookie; int zc_guid; int zc_value; int zc_objset_type; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ,int *) ;
 int FUNC_2 (int ,int ,int **,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int
FUNC_4(zfs_cmd_t *VAR_4)
{
 zfsvfs_t *VAR_5;
 int VAR_6;

 if (VAR_4->zc_objset_type >= VAR_3)
  return (FUNC_0(VAR_1));

 VAR_6 = FUNC_2(VAR_4->zc_name, VAR_2, &VAR_5, VAR_0);
 if (VAR_6 != 0)
  return (VAR_6);

 VAR_6 = FUNC_1(VAR_5,
     VAR_4->zc_objset_type, VAR_4->zc_value, VAR_4->zc_guid, &VAR_4->zc_cookie);
 FUNC_3(VAR_5, VAR_2);

 return (VAR_6);
}
