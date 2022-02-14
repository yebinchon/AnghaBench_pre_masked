
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct annotate_browser {scalar_t__ jumps_width; int addr_width; int target_width; int max_addr_width; int min_addr_width; } ;
struct TYPE_2__ {scalar_t__ show_nr_jumps; scalar_t__ use_offset; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct annotate_browser *VAR_1)
{
 if (VAR_0.use_offset)
  VAR_1->target_width = VAR_1->min_addr_width;
 else
  VAR_1->target_width = VAR_1->max_addr_width;

 VAR_1->addr_width = VAR_1->target_width;

 if (VAR_0.show_nr_jumps)
  VAR_1->addr_width += VAR_1->jumps_width + 1;
}
