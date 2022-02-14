
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reserve_info {struct reserve_info* next; } ;



struct reserve_info *FUNC_0(struct reserve_info *VAR_0,
          struct reserve_info *VAR_1)
{
 struct reserve_info *VAR_2;

 VAR_1->next = ((void*)0);

 if (! VAR_0)
  return VAR_1;

 for (VAR_2 = VAR_0; VAR_2->next; VAR_2 = VAR_2->next)
  ;

 VAR_2->next = VAR_1;

 return VAR_0;
}
