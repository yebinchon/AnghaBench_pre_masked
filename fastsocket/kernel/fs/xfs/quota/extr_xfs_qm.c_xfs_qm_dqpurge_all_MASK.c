
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ m_quotainfo; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;

int
FUNC_2(
 xfs_mount_t *VAR_0,
 uint VAR_1)
{
 int VAR_2;





 if (VAR_0->m_quotainfo) {
  while ((VAR_2 = FUNC_1(VAR_0, VAR_1))) {
   FUNC_0(VAR_2 * 10);
  }
 }
 return 0;
}
