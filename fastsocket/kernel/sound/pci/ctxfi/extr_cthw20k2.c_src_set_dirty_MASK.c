
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int data; } ;
struct src_rsc_ctrl_blk {TYPE_1__ dirty; } ;



__attribute__((used)) static int FUNC_0(void *VAR_0, unsigned int VAR_1)
{
 ((struct src_rsc_ctrl_blk *)VAR_0)->dirty.data = (VAR_1 & 0xffff);
 return 0;
}
