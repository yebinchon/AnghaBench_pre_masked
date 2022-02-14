
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mparse {int secondary; int roff; TYPE_1__* man; } ;
struct TYPE_2__ {int manmac; int mdocmac; } ;


 int FUNC_0 (struct mparse*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;

void
FUNC_5(struct mparse *VAR_0)
{
 FUNC_4(VAR_0->man->mdocmac);
 FUNC_4(VAR_0->man->manmac);
 FUNC_3(VAR_0->man);
 FUNC_2(VAR_0->roff);
 FUNC_1(VAR_0->secondary);
 FUNC_0(VAR_0);
}
