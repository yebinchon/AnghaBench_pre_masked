
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucred {TYPE_1__* cr_prison; } ;
struct TYPE_2__ {int pr_allow; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ucred*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct ucred *VAR_2)
{

 if (FUNC_0(VAR_2) &&
     !(VAR_2->cr_prison->pr_allow & VAR_1))
  return (VAR_0);

 return (0);
}
