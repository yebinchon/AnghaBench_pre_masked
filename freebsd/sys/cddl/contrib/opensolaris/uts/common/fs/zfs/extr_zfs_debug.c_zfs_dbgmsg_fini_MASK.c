
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zdm_msg; } ;
typedef TYPE_1__ zfs_dbgmsg_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_5(void)
{
 zfs_dbgmsg_t *VAR_3;

 while ((VAR_3 = FUNC_2(&VAR_1)) != ((void*)0)) {
  int VAR_4 = sizeof (zfs_dbgmsg_t) + FUNC_4(VAR_3->zdm_msg);
  FUNC_1(VAR_3, VAR_4);
  VAR_0 -= VAR_4;
 }
 FUNC_3(&VAR_2);
 FUNC_0(VAR_0);
}
