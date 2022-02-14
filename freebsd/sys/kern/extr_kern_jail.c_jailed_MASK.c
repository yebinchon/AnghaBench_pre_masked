
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {int * cr_prison; } ;


 int VAR_0 ;

int
FUNC_0(struct ucred *VAR_1)
{

 return (VAR_1->cr_prison != &VAR_0);
}
