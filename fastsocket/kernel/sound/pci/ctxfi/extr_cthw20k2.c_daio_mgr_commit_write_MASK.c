
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hw {int dummy; } ;
struct TYPE_5__ {int atxctl; int arxctl; scalar_t__ daoimap; } ;
struct TYPE_6__ {TYPE_2__ bf; } ;
struct TYPE_4__ {int idx; unsigned int aim; } ;
struct daio_mgr_ctrl_blk {unsigned int* txctl; unsigned int* rxctl; TYPE_3__ dirty; TYPE_1__ daoimap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hw*,scalar_t__,unsigned int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_3, void *VAR_4)
{
 struct daio_mgr_ctrl_blk *VAR_5 = VAR_4;
 unsigned int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  if ((VAR_5->dirty.bf.atxctl & (0x1 << VAR_7))) {
   VAR_6 = VAR_5->txctl[VAR_7];
   FUNC_0(VAR_3, (VAR_2+(0x40*VAR_7)), VAR_6);
   VAR_5->dirty.bf.atxctl &= ~(0x1 << VAR_7);
   FUNC_1(1);
  }
  if ((VAR_5->dirty.bf.arxctl & (0x1 << VAR_7))) {
   VAR_6 = VAR_5->rxctl[VAR_7];
   FUNC_0(VAR_3, (VAR_1+(0x40*VAR_7)), VAR_6);
   VAR_5->dirty.bf.arxctl &= ~(0x1 << VAR_7);
   FUNC_1(1);
  }
 }
 if (VAR_5->dirty.bf.daoimap) {
  FUNC_0(VAR_3, VAR_0+VAR_5->daoimap.idx*4,
      VAR_5->daoimap.aim);
  VAR_5->dirty.bf.daoimap = 0;
 }

 return 0;
}
