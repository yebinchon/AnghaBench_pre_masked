
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jblocks {int jb_off; } ;
struct TYPE_2__ {int d_bsize; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct jblocks *VAR_1, int VAR_2)
{

 VAR_1->jb_off += VAR_2 / VAR_0.d_bsize;
}
