
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t zc_objset_type; scalar_t__* zc_value; scalar_t__ zc_guid; int zc_name; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
typedef int cred_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (scalar_t__,int *) ;
 int * VAR_4 ;
 int FUNC_3 (TYPE_1__*,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static int
FUNC_5(zfs_cmd_t *VAR_5, nvlist_t *VAR_6, cred_t *VAR_7)
{
 int VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
 if (VAR_8)
  return (VAR_8);

 if (VAR_5->zc_objset_type >= VAR_1)
  return (FUNC_0(VAR_0));

 if (VAR_5->zc_value[0] == 0) {




  if (VAR_5->zc_objset_type == VAR_3 ||
      VAR_5->zc_objset_type == VAR_2) {
   if (VAR_5->zc_guid == FUNC_1(VAR_7))
    return (0);
  } else {
   if (FUNC_2(VAR_5->zc_guid, VAR_7))
    return (0);
  }
 }

 return (FUNC_4(VAR_5->zc_name,
     VAR_4[VAR_5->zc_objset_type], VAR_7));
}
