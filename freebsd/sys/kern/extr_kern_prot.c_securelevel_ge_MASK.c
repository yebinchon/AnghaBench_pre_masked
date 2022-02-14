
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {TYPE_1__* cr_prison; } ;
struct TYPE_2__ {int pr_securelevel; } ;


 int VAR_0 ;

int
FUNC_0(struct ucred *VAR_1, int VAR_2)
{

 return (VAR_1->cr_prison->pr_securelevel >= VAR_2 ? VAR_0 : 0);
}
