
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zpool_name; int * zpool_hdl; } ;
typedef TYPE_1__ zpool_handle_t ;
typedef int msg ;
typedef int libzfs_handle_t ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int *,int,char*) ;

int
FUNC_4(zpool_handle_t *VAR_1)
{
 libzfs_handle_t *VAR_2 = VAR_1->zpool_hdl;
 char VAR_3[1024];
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1->zpool_name);
 if (VAR_4 != 0) {
  (void) FUNC_2(VAR_3, sizeof (VAR_3), FUNC_0(VAR_0,
      "cannot checkpoint '%s'"), VAR_1->zpool_name);
  (void) FUNC_3(VAR_2, VAR_4, VAR_3);
  return (-1);
 }

 return (0);
}
