
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int zfs_name; int * zfs_hdl; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_13__ {int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef int libzfs_handle_t ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (int ,char const*,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;

zfs_handle_t *
FUNC_7(libzfs_handle_t *VAR_0, const char *VAR_1)
{
 zfs_cmd_t VAR_2 = { 0 };

 zfs_handle_t *VAR_3 = FUNC_0(sizeof (zfs_handle_t), 1);

 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_3->zfs_hdl = VAR_0;
 (void) FUNC_4(VAR_3->zfs_name, VAR_1, sizeof (VAR_3->zfs_name));
 if (FUNC_5(VAR_0, &VAR_2, 0) != 0) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }
 if (FUNC_2(VAR_3, &VAR_2) == -1) {
  FUNC_6(&VAR_2);
  FUNC_1(VAR_3);
  return (((void*)0));
 }
 if (FUNC_3(VAR_3, &VAR_2) == -1) {
  FUNC_1(VAR_3);
  VAR_3 = ((void*)0);
 }
 FUNC_6(&VAR_2);
 return (VAR_3);
}
