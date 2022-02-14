
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int zc_nvlist_conf_size; int member_0; } ;
typedef TYPE_1__ zfs_cmd_t ;
typedef int nvlist_t ;
struct TYPE_15__ {int libzfs_fd; } ;
typedef TYPE_2__ libzfs_handle_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*,int **) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*,int *) ;

__attribute__((used)) static nvlist_t *
FUNC_7(libzfs_handle_t *VAR_4, nvlist_t *VAR_5)
{
 nvlist_t *VAR_6;
 zfs_cmd_t VAR_7 = { 0 };
 int VAR_8, VAR_9;

 if (FUNC_6(VAR_4, &VAR_7, VAR_5) != 0)
  return (((void*)0));

 VAR_9 = FUNC_0(VAR_0, VAR_7.zc_nvlist_conf_size * 4);

 if (FUNC_2(VAR_4, &VAR_7, VAR_9) != 0) {
  FUNC_4(&VAR_7);
  return (((void*)0));
 }

 while ((VAR_8 = FUNC_1(VAR_4->libzfs_fd, VAR_2,
     &VAR_7)) != 0 && VAR_3 == VAR_1) {
  if (FUNC_3(VAR_4, &VAR_7) != 0) {
   FUNC_4(&VAR_7);
   return (((void*)0));
  }
 }

 if (VAR_8) {
  FUNC_4(&VAR_7);
  return (((void*)0));
 }

 if (FUNC_5(VAR_4, &VAR_7, &VAR_6) != 0) {
  FUNC_4(&VAR_7);
  return (((void*)0));
 }

 FUNC_4(&VAR_7);
 return (VAR_6);
}
