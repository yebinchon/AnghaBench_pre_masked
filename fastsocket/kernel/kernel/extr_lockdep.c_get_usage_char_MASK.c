
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class {int usage_mask; } ;
typedef enum lock_usage_bit { ____Placeholder_lock_usage_bit } lock_usage_bit ;


 int FUNC_0 (int) ;

__attribute__((used)) static char FUNC_1(struct lock_class *VAR_0, enum lock_usage_bit VAR_1)
{
 char VAR_2 = '.';

 if (VAR_0->usage_mask & FUNC_0(VAR_1 + 2))
  VAR_2 = '+';
 if (VAR_0->usage_mask & FUNC_0(VAR_1)) {
  VAR_2 = '-';
  if (VAR_0->usage_mask & FUNC_0(VAR_1 + 2))
   VAR_2 = '?';
 }

 return VAR_2;
}
