
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct bcache {TYPE_1__* bcache_ctl; } ;
typedef int daddr_t ;
struct TYPE_2__ {int bc_blkno; int bc_count; } ;


 size_t FUNC_0 (struct bcache*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static void
FUNC_2(struct bcache *VAR_0, daddr_t VAR_1)
{
    u_int VAR_2;

    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if (VAR_0->bcache_ctl[VAR_2].bc_blkno == VAR_1) {
 VAR_0->bcache_ctl[VAR_2].bc_count = -1;
 VAR_0->bcache_ctl[VAR_2].bc_blkno = -1;
 FUNC_1("invalidate blk %llu", VAR_1);
    }
}
