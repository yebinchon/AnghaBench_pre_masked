
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* zdm_msg; } ;
typedef TYPE_1__ zfs_dbgmsg_t ;


 TYPE_1__* FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_5(const char *VAR_2)
{
 zfs_dbgmsg_t *VAR_3;

 (void) FUNC_4("ZFS_DBGMSG(%s):\n", VAR_2);
 FUNC_2(&VAR_1);
 for (VAR_3 = FUNC_0(&VAR_0); VAR_3;
     VAR_3 = FUNC_1(&VAR_0, VAR_3))
  (void) FUNC_4("%s\n", VAR_3->zdm_msg);
 FUNC_3(&VAR_1);
}
