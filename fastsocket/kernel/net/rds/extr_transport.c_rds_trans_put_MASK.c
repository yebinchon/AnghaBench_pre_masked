
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_transport {scalar_t__ t_owner; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct rds_transport *VAR_0)
{
 if (VAR_0 && VAR_0->t_owner)
  FUNC_0(VAR_0->t_owner);
}
