
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int kref; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ttm_buffer_object*) ;

void FUNC_2(struct ttm_buffer_object **VAR_0)
{
 struct ttm_buffer_object *VAR_1 = *VAR_0;

 *VAR_0 = ((void*)0);
 if (FUNC_0(&VAR_1->kref))
  FUNC_1(VAR_1);
}
