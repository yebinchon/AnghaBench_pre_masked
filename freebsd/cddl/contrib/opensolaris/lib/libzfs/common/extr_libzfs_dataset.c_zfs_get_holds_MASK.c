
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef int errbuf ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int **) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,char*) ;

int
FUNC_6(zfs_handle_t *VAR_5, nvlist_t **VAR_6)
{
 int VAR_7;
 char VAR_8[1024];

 VAR_7 = FUNC_1(VAR_5->zfs_name, VAR_6);

 if (VAR_7 != 0) {
  libzfs_handle_t *VAR_9 = VAR_5->zfs_hdl;

  (void) FUNC_2(VAR_8, sizeof (VAR_8),
      FUNC_0(VAR_3, "cannot get holds for '%s'"),
      VAR_5->zfs_name);
  switch (VAR_7) {
  case 128:
   FUNC_4(VAR_9, FUNC_0(VAR_3,
       "pool must be upgraded"));
   VAR_7 = FUNC_3(VAR_9, VAR_1, VAR_8);
   break;
  case 130:
   VAR_7 = FUNC_3(VAR_9, VAR_0, VAR_8);
   break;
  case 129:
   VAR_7 = FUNC_3(VAR_9, VAR_2, VAR_8);
   break;
  default:
   VAR_7 = FUNC_5(VAR_9, VAR_4, VAR_8);
   break;
  }
 }

 return (VAR_7);
}
