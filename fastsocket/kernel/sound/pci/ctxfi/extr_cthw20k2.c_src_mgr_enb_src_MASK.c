
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct src_mgr_ctrl_blk {int* enb; TYPE_1__ dirty; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 ((struct src_mgr_ctrl_blk *)VAR_0)->enb[VAR_1/32] |= (0x1 << (VAR_1%32));
 ((struct src_mgr_ctrl_blk *)VAR_0)->dirty.data |= (0x1 << (VAR_1/32));
 return 0;
}
