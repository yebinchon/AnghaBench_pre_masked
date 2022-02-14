
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_info_iterator {int * addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct rds_info_iterator *VAR_1)
{
 if (VAR_1->addr) {
  FUNC_0(VAR_1->addr, VAR_0);
  VAR_1->addr = ((void*)0);
 }
}
