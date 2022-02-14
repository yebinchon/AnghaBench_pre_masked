
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ enbsa; } ;
struct TYPE_3__ {int data; TYPE_2__ bf; } ;
struct src_mgr_ctrl_blk {TYPE_1__ dirty; int * enb; int enbsa; } ;
struct hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct hw*,int ) ;
 int FUNC_1 (struct hw*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_3, void *VAR_4)
{
 struct src_mgr_ctrl_blk *VAR_5 = VAR_4;
 int VAR_6;
 unsigned int VAR_7;

 if (VAR_5->dirty.bf.enbsa) {
  do {
   VAR_7 = FUNC_0(VAR_3, VAR_2);
  } while (VAR_7 & 0x1);
  FUNC_1(VAR_3, VAR_1, VAR_5->enbsa);
  VAR_5->dirty.bf.enbsa = 0;
 }
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if ((VAR_5->dirty.data & (0x1 << VAR_6))) {
   FUNC_1(VAR_3, VAR_0+(VAR_6*0x100), VAR_5->enb[VAR_6]);
   VAR_5->dirty.data &= ~(0x1 << VAR_6);
  }
 }

 return 0;
}
