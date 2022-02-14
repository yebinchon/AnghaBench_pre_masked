
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_delay_config {int base; int max; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

void
FUNC_1(struct lock_delay_config *VAR_1)
{

 VAR_1->base = 1;
 VAR_1->max = FUNC_0(VAR_0) * 256;
 if (VAR_1->max > 32678)
  VAR_1->max = 32678;
}
