
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uu_timelow; int uu_timemid; int uu_clockseq; } ;
typedef TYPE_1__ xfs_uu_t ;
typedef int uuid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(uuid_t *VAR_0, int VAR_1 [2])
{
 xfs_uu_t *VAR_2 = (xfs_uu_t *)VAR_0;

 VAR_1[0] = (FUNC_0(VAR_2->uu_clockseq) << 16) |
     FUNC_0(VAR_2->uu_timemid);
 VAR_1[1] = FUNC_1(VAR_2->uu_timelow);
}
