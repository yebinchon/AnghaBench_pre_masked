
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_buffer_object {int lru; int swap; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct ttm_buffer_object *VAR_0)
{
 int VAR_1 = 0;

 if (!FUNC_1(&VAR_0->swap)) {
  FUNC_0(&VAR_0->swap);
  ++VAR_1;
 }
 if (!FUNC_1(&VAR_0->lru)) {
  FUNC_0(&VAR_0->lru);
  ++VAR_1;
 }






 return VAR_1;
}
