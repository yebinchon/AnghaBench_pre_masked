
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int regs_content_count; int regs_column_count; } ;
struct TYPE_4__ {TYPE_2__ data_display_info; } ;
struct TYPE_6__ {TYPE_1__ detail; } ;


 TYPE_3__* VAR_0 ;

int
FUNC_0 (void)
{
  int VAR_1 = (-1);

  if (VAR_0->detail.data_display_info.regs_content_count > 0)
    {
      VAR_1 = (VAR_0->detail.data_display_info.regs_content_count /
    VAR_0->detail.data_display_info.regs_column_count);
      if (VAR_0->detail.data_display_info.regs_content_count %
   VAR_0->detail.data_display_info.regs_column_count)
 VAR_1++;
    }
  return VAR_1;
}
