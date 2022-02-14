
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ca; } ;
struct TYPE_4__ {TYPE_1__ bf; } ;
struct src_rsc_ctrl_blk {int ca; TYPE_2__ dirty; } ;
struct hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hw*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct hw *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct src_rsc_ctrl_blk *VAR_5 = VAR_4;

 VAR_5->ca = FUNC_1(VAR_2, VAR_1+VAR_3*0x100);
 VAR_5->dirty.bf.ca = 0;

 return FUNC_0(VAR_5->ca, VAR_0);
}
