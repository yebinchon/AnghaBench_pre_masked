
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objfile_data {size_t index; } ;
struct objfile {size_t num_data; void** data; } ;


 int FUNC_0 (int) ;

void *
FUNC_1 (struct objfile *VAR_0, const struct objfile_data *VAR_1)
{
  FUNC_0 (VAR_1->index < VAR_0->num_data);
  return VAR_0->data[VAR_1->index];
}
