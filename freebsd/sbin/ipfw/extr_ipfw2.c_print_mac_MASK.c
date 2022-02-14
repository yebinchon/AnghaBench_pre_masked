
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct buf_pr {int dummy; } ;
struct TYPE_3__ {scalar_t__ mask; scalar_t__ addr; } ;
typedef TYPE_1__ ipfw_insn_mac ;


 int FUNC_0 (struct buf_pr*,char*) ;
 int FUNC_1 (struct buf_pr*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct buf_pr *VAR_0, ipfw_insn_mac *VAR_1)
{

 FUNC_0(VAR_0, " MAC");
 FUNC_1(VAR_0, VAR_1->addr, VAR_1->mask);
 FUNC_1(VAR_0, VAR_1->addr + 6, VAR_1->mask + 6);
}
