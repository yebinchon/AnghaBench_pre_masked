
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p2p_data {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_0(struct p2p_data *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return 0;
 if (VAR_3->state == VAR_2)
  return 2;
 return VAR_3->state != VAR_0 && VAR_3->state != VAR_1;
}
