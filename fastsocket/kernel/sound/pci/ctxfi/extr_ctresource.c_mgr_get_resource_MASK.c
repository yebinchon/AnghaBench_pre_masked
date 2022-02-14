
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsc_mgr {unsigned int avail; int amount; int rscs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int,unsigned int*) ;

int FUNC_1(struct rsc_mgr *VAR_1, unsigned int VAR_2, unsigned int *VAR_3)
{
 int VAR_4;

 if (VAR_2 > VAR_1->avail)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_1->rscs, VAR_1->amount, VAR_2, VAR_3);
 if (!VAR_4)
  VAR_1->avail -= VAR_2;

 return VAR_4;
}
