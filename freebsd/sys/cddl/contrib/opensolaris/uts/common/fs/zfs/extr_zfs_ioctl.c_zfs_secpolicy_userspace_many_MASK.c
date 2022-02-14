
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t zc_objset_type; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_3(zfs_cmd_t *VAR_3, nvlist_t *VAR_4, cred_t *VAR_5)
{
 int VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return (VAR_6);

 if (VAR_3->zc_objset_type >= VAR_1)
  return (FUNC_0(VAR_0));

 return (FUNC_2(VAR_3->zc_name,
     VAR_2[VAR_3->zc_objset_type], VAR_5));
}
