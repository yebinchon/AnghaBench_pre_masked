
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_data {size_t index; int init_p; void* (* init ) (struct gdbarch*) ;} ;
struct gdbarch {size_t nr_data; void** data; scalar_t__ initialized_p; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct gdbarch*) ;

void *
FUNC_2 (struct gdbarch *VAR_0, struct gdbarch_data *VAR_1)
{
  FUNC_0 (VAR_1->index < VAR_0->nr_data);



  if (VAR_0->data[VAR_1->index] == ((void*)0)
      && VAR_0->initialized_p)
    {

      FUNC_0 (VAR_1->init_p);
      VAR_1->init_p = 0;
      FUNC_0 (VAR_1->init != ((void*)0));
      VAR_0->data[VAR_1->index] = VAR_1->init (VAR_0);
      VAR_1->init_p = 1;
      FUNC_0 (VAR_0->data[VAR_1->index] != ((void*)0));
    }
  return VAR_0->data[VAR_1->index];
}
