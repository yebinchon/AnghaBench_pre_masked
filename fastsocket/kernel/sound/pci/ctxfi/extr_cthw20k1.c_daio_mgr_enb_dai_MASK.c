
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spictl; int i2sictl; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct daio_mgr_ctrl_blk {TYPE_2__ dirty; int i2sctl; int spictl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, unsigned int VAR_3)
{
 struct daio_mgr_ctrl_blk *VAR_4 = VAR_2;

 if (VAR_3 < 4) {

  FUNC_0(&VAR_4->spictl, VAR_1 << (VAR_3*8), 1);
  VAR_4->dirty.bf.spictl |= (0x1 << VAR_3);
 } else {

  VAR_3 %= 4;
  FUNC_0(&VAR_4->i2sctl, VAR_0 << (VAR_3*8), 1);
  VAR_4->dirty.bf.i2sictl |= (0x1 << VAR_3);
 }
 return 0;
}
