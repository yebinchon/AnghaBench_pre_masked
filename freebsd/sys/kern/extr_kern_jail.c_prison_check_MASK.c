
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_prison; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;

int
FUNC_1(struct ucred *VAR_1, struct ucred *VAR_2)
{

 return ((VAR_1->cr_prison == VAR_2->cr_prison ||
     FUNC_0(VAR_1->cr_prison, VAR_2->cr_prison)) ? 0 : VAR_0);
}
