
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_info {struct gcov_info* next; } ;


 struct gcov_info* VAR_0 ;

struct gcov_info *
FUNC_0(struct gcov_info *VAR_1)
{
 if (!VAR_1)
  return VAR_0;

 return (VAR_1->next);
}
