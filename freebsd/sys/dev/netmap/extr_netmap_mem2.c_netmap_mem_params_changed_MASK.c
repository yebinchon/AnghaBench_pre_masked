
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_obj_params {scalar_t__ last_size; scalar_t__ size; scalar_t__ last_num; scalar_t__ num; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct netmap_obj_params* VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1[VAR_2].last_size != VAR_1[VAR_2].size || VAR_1[VAR_2].last_num != VAR_1[VAR_2].num) {
   VAR_1[VAR_2].last_size = VAR_1[VAR_2].size;
   VAR_1[VAR_2].last_num = VAR_1[VAR_2].num;
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
