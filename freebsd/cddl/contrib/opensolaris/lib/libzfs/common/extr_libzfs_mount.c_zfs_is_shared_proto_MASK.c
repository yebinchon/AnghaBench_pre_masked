
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zfs_share_type_t ;
typedef int zfs_share_proto_t ;
struct TYPE_4__ {int zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (TYPE_1__*,char**) ;

zfs_share_type_t
FUNC_3(zfs_handle_t *VAR_1, char **VAR_2, zfs_share_proto_t VAR_3)
{
 char *VAR_4;
 zfs_share_type_t VAR_5;

 if (!FUNC_2(VAR_1, &VAR_4))
  return (VAR_0);

 if ((VAR_5 = FUNC_1(VAR_1->zfs_hdl, VAR_4, VAR_3))
     != VAR_0) {
  if (VAR_2 != ((void*)0))
   *VAR_2 = VAR_4;
  else
   FUNC_0(VAR_4);
  return (VAR_5);
 } else {
  FUNC_0(VAR_4);
  return (VAR_0);
 }
}
