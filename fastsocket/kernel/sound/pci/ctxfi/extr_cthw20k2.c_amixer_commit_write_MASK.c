
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hw {int dummy; } ;
struct TYPE_3__ {scalar_t__ amophi; scalar_t__ amoplo; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct amixer_rsc_ctrl_blk {TYPE_2__ dirty; int amophi; int amoplo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hw*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct hw *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct amixer_rsc_ctrl_blk *VAR_5 = VAR_4;

 if (VAR_5->dirty.bf.amoplo || VAR_5->dirty.bf.amophi) {
  FUNC_0(VAR_2, VAR_1+VAR_3*8, VAR_5->amoplo);
  VAR_5->dirty.bf.amoplo = 0;
  FUNC_0(VAR_2, VAR_0+VAR_3*8, VAR_5->amophi);
  VAR_5->dirty.bf.amophi = 0;
 }

 return 0;
}
