
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ zfs_share_proto_t ;
struct TYPE_10__ {int zfs_name; TYPE_2__* zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct mnttab {char const* mnt_mountp; } ;
struct TYPE_11__ {int libzfs_mnttab; } ;
typedef TYPE_2__ libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,struct mnttab*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,char*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 char* FUNC_7 (TYPE_2__*,char const*) ;

int
FUNC_8(zfs_handle_t *VAR_2, const char *VAR_3,
    zfs_share_proto_t *VAR_4)
{
 libzfs_handle_t *VAR_5 = VAR_2->zfs_hdl;
 struct mnttab VAR_6;
 char *VAR_7 = ((void*)0);


 FUNC_3(VAR_2->zfs_hdl->libzfs_mnttab);
 if (VAR_3 != ((void*)0))
  VAR_3 = VAR_7 = FUNC_7(VAR_5, VAR_3);

 if (VAR_3 != ((void*)0) || ((FUNC_6(VAR_2) == VAR_1) &&
     FUNC_2(VAR_5, FUNC_5(VAR_2), &VAR_6) == 0)) {
  zfs_share_proto_t *VAR_8;

  if (VAR_3 == ((void*)0))
   VAR_7 = FUNC_7(VAR_2->zfs_hdl, VAR_6.mnt_mountp);

  for (VAR_8 = VAR_4; *VAR_8 != VAR_0;
      VAR_8++) {

   if (FUNC_1(VAR_5, VAR_7, *VAR_8) &&
       FUNC_4(VAR_5, VAR_2->zfs_name,
       VAR_7, *VAR_8) != 0) {
    if (VAR_7 != ((void*)0))
     FUNC_0(VAR_7);
    return (-1);
   }
  }
 }
 if (VAR_7 != ((void*)0))
  FUNC_0(VAR_7);

 return (0);
}
