
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union exp_element {struct block* block; } ;
struct block {int dummy; } ;


 int FUNC_0 (union exp_element) ;

void
FUNC_1 (struct block *VAR_0)
{
  union exp_element VAR_1;
  VAR_1.block = VAR_0;
  FUNC_0 (VAR_1);
}
