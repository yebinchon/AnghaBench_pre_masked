
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int zpool_hdl; int zpool_name; } ;
typedef TYPE_1__ zpool_handle_t ;
struct TYPE_6__ {scalar_t__ zc_history; void* zc_guid; void* zc_cookie; int zc_name; int member_0; } ;
typedef TYPE_2__ zfs_cmd_t ;
typedef scalar_t__ uint64_t ;
typedef int msg ;
typedef void* boolean_t ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_7(zpool_handle_t *VAR_4, boolean_t VAR_5, boolean_t VAR_6,
    const char *VAR_7)
{
 zfs_cmd_t VAR_8 = { 0 };
 char VAR_9[1024];

 (void) FUNC_1(VAR_9, sizeof (VAR_9), FUNC_0(VAR_1,
     "cannot export '%s'"), VAR_4->zpool_name);

 (void) FUNC_2(VAR_8.zc_name, VAR_4->zpool_name, sizeof (VAR_8.zc_name));
 VAR_8.zc_cookie = VAR_5;
 VAR_8.zc_guid = VAR_6;
 VAR_8.zc_history = (uint64_t)(uintptr_t)VAR_7;

 if (FUNC_5(VAR_4->zpool_hdl, VAR_2, &VAR_8) != 0) {
  switch (VAR_3) {
  case 128:
   FUNC_4(VAR_4->zpool_hdl, FUNC_0(VAR_1,
       "use '-f' to override the following errors:\n"
       "'%s' has an active shared spare which could be"
       " used by other pools once '%s' is exported."),
       VAR_4->zpool_name, VAR_4->zpool_name);
   return (FUNC_3(VAR_4->zpool_hdl, VAR_0,
       VAR_9));
  default:
   return (FUNC_6(VAR_4->zpool_hdl, VAR_3,
       VAR_9));
  }
 }

 return (0);
}
