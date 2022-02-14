
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct bcache {TYPE_1__* bcache_ctl; } ;
typedef int daddr_t ;
struct TYPE_2__ {scalar_t__ bc_count; int bc_blkno; } ;


 size_t FUNC_0 (struct bcache*,int ) ;
 int FUNC_1 (char*,int ,size_t,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct bcache *VAR_1, daddr_t VAR_2)
{
    u_int VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_2);

    FUNC_1("insert blk %llu -> %u # %d", VAR_2, VAR_3, VAR_0);
    VAR_1->bcache_ctl[VAR_3].bc_blkno = VAR_2;
    VAR_1->bcache_ctl[VAR_3].bc_count = VAR_0++;
}
