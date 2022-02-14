
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct mnttab {char const* mnt_mountp; } ;
typedef int libzfs_handle_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int ,struct mnttab*) ;
 int FUNC_2 (int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 char* FUNC_6 (int *,char const*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,char*,int ) ;

int
FUNC_8(zfs_handle_t *VAR_2, const char *VAR_3, int VAR_4)
{
 libzfs_handle_t *VAR_5 = VAR_2->zfs_hdl;
 struct mnttab VAR_6;
 char *VAR_7 = ((void*)0);


 if (VAR_3 != ((void*)0) || ((FUNC_4(VAR_2) == VAR_0) &&
     FUNC_1(VAR_5, VAR_2->zfs_name, &VAR_6) == 0)) {






  if (VAR_3 == ((void*)0))
   VAR_7 = FUNC_6(VAR_5, VAR_6.mnt_mountp);
  else
   VAR_7 = FUNC_6(VAR_5, VAR_3);




  if (FUNC_7(VAR_2, VAR_7, VAR_1) != 0)
   return (-1);

  if (FUNC_3(VAR_5, VAR_7, VAR_4) != 0) {
   FUNC_0(VAR_7);
   (void) FUNC_5(VAR_2);
   return (-1);
  }
  FUNC_2(VAR_5, VAR_2->zfs_name);
  FUNC_0(VAR_7);
 }

 return (0);
}
