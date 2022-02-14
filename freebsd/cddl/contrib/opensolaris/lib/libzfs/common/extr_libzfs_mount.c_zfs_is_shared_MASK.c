
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_share_type_t ;
typedef scalar_t__ zfs_share_proto_t ;
typedef int zfs_handle_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__* VAR_3 ;
 int FUNC_1 (int *,int *,scalar_t__) ;

boolean_t
FUNC_2(zfs_handle_t *VAR_4)
{
 zfs_share_type_t VAR_5 = 0;
 zfs_share_proto_t *VAR_6;

 if (FUNC_0(VAR_4))
  return (VAR_0);

 for (VAR_6 = VAR_3; *VAR_6 != VAR_2;
     VAR_6++)
  VAR_5 |= FUNC_1(VAR_4, ((void*)0), *VAR_6);

 return (VAR_5 ? VAR_1 : VAR_0);
}
