
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdbarch_swap {TYPE_1__* source; int swap; struct gdbarch_swap* next; } ;
struct gdbarch {struct gdbarch_swap* swap; } ;
struct TYPE_2__ {int sizeof_data; int data; } ;


 struct gdbarch* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static struct gdbarch *
FUNC_3 (void)
{
  struct gdbarch *VAR_1 = VAR_0;
  struct gdbarch_swap *VAR_2;

  FUNC_0 (VAR_1 != ((void*)0));
  for (VAR_2 = VAR_1->swap;
       VAR_2 != ((void*)0);
       VAR_2 = VAR_2->next)
    {
      FUNC_1 (VAR_2->swap, VAR_2->source->data, VAR_2->source->sizeof_data);
      FUNC_2 (VAR_2->source->data, 0, VAR_2->source->sizeof_data);
    }
  VAR_0 = ((void*)0);
  return VAR_1;
}
