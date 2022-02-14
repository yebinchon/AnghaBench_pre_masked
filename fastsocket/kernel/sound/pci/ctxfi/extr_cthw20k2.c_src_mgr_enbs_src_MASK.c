
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int enbsa; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct src_mgr_ctrl_blk {int enbsa; int* enb; TYPE_2__ dirty; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 ((struct src_mgr_ctrl_blk *)VAR_0)->enbsa |= (0x1 << ((VAR_1%128)/4));
 ((struct src_mgr_ctrl_blk *)VAR_0)->dirty.bf.enbsa = 1;
 ((struct src_mgr_ctrl_blk *)VAR_0)->enb[VAR_1/32] |= (0x1 << (VAR_1%32));
 return 0;
}
