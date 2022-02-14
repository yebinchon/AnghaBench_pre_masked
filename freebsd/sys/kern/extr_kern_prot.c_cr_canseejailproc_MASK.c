
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucred {scalar_t__ cr_uid; scalar_t__ cr_prison; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct ucred *VAR_2, struct ucred *VAR_3)
{
 if (VAR_2->cr_uid == 0)
  return (0);
 return (!VAR_1 && VAR_2->cr_prison != VAR_3->cr_prison ? VAR_0 : 0);
}
