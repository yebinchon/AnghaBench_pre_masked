
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_counter {scalar_t__ usage; scalar_t__ limit; scalar_t__ max_usage; int failcnt; } ;


 int VAR_0 ;

int FUNC_0(struct res_counter *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->usage + VAR_2 > VAR_1->limit) {
  VAR_1->failcnt++;
  return -VAR_0;
 }

 VAR_1->usage += VAR_2;
 if (VAR_1->usage > VAR_1->max_usage)
  VAR_1->max_usage = VAR_1->usage;
 return 0;
}
