
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct octeon_device {size_t num_consoles; TYPE_1__* console_timer; struct lio_console* console; } ;
struct lio_console {scalar_t__ output_base_addr; scalar_t__ input_base_addr; scalar_t__ buffer_size; scalar_t__ addr; int active; } ;
struct TYPE_2__ {int timer; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(struct octeon_device *VAR_0)
{
 struct lio_console *VAR_1;
 uint32_t VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_consoles; VAR_2++) {
  VAR_1 = &VAR_0->console[VAR_2];

  if (!VAR_1->active)
   continue;

  FUNC_0(&VAR_0->console_timer[VAR_2].timer);
  VAR_1->addr = 0;
  VAR_1->buffer_size = 0;
  VAR_1->input_base_addr = 0;
  VAR_1->output_base_addr = 0;
 }

 VAR_0->num_consoles = 0;
}
