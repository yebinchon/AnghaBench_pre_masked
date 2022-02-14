
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int flags; } ;
struct eqn_box {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct termp*,struct eqn_box const*) ;

void
FUNC_1(struct termp *VAR_1, const struct eqn_box *VAR_2)
{

 FUNC_0(VAR_1, VAR_2);
 VAR_1->flags &= ~VAR_0;
}
