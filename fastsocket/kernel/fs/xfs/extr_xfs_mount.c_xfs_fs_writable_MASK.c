
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int m_flags; TYPE_2__* m_super; } ;
typedef TYPE_3__ xfs_mount_t ;
struct TYPE_6__ {scalar_t__ frozen; } ;
struct TYPE_7__ {TYPE_1__ s_writers; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;

int
FUNC_1(xfs_mount_t *VAR_1)
{
 return !(VAR_1->m_super->s_writers.frozen || FUNC_0(VAR_1) ||
  (VAR_1->m_flags & VAR_0));
}
