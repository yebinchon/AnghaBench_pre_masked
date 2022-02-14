
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct res_counter {struct res_counter* parent; void* soft_limit; void* limit; int lock; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct res_counter *VAR_1, struct res_counter *VAR_2)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->limit = VAR_0;
 VAR_1->soft_limit = VAR_0;
 VAR_1->parent = VAR_2;
}
