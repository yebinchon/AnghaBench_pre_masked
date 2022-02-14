
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gdbarch_data {size_t index; } ;
struct gdbarch {size_t nr_data; int ** data; } ;


 int FUNC_0 (int) ;

void
FUNC_1 (struct gdbarch *VAR_0,
                  struct gdbarch_data *VAR_1,
                  void *VAR_2)
{
  FUNC_0 (VAR_1->index < VAR_0->nr_data);
  FUNC_0 (VAR_0->data[VAR_1->index] == ((void*)0));
  VAR_0->data[VAR_1->index] = VAR_2;
}
